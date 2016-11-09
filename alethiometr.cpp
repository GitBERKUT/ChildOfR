#include "alethiometr.h"
#include "ui_alethiometr.h"

Alethiometr::Alethiometr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Alethiometr)
{
    ui->setupUi(this);

	for (int i = 0; i < 3; i++){
		inputSymbols.append(new SymbolControlWidget());
	}
	for (int i = 0; i < 7; i++){
		outputSymbols.append(new SymbolControlWidget());
	}
//	inputSymbols[0]->setParent(ui->Inframe_1);
//	inputSymbols[1]->setParent(ui->Inframe_2);
//	inputSymbols[2]->setParent(ui->Inframe_3);
//	outputSymbols[0]->setParent(ui->Outframe_1);
//	outputSymbols[0]->setParent(ui->Outframe_2);
//	outputSymbols[0]->setParent(ui->Outframe_3);
//	outputSymbols[0]->setParent(ui->Outframe_4);
//	outputSymbols[0]->setParent(ui->Outframe_5);
//	outputSymbols[0]->setParent(ui->Outframe_6);
//	outputSymbols[0]->setParent(ui->Outframe_7);

	ui->Inframe_1->layout()->addWidget(inputSymbols[0]);
	ui->Inframe_2->layout()->addWidget(inputSymbols[1]);
	ui->Inframe_3->layout()->addWidget(inputSymbols[2]);
	ui->Outframe_1->layout()->addWidget(outputSymbols[0]);
	ui->Outframe_2->layout()->addWidget(outputSymbols[1]);
	ui->Outframe_3->layout()->addWidget(outputSymbols[2]);
	ui->Outframe_4->layout()->addWidget(outputSymbols[3]);
	ui->Outframe_5->layout()->addWidget(outputSymbols[4]);
	ui->Outframe_6->layout()->addWidget(outputSymbols[5]);
	ui->Outframe_7->layout()->addWidget(outputSymbols[6]);


	connect(ui->doButton,			SIGNAL(clicked(bool)),
			this,					SLOT(onDo()));




}

Alethiometr::~Alethiometr()
{
	delete ui;
}

Alethiometr::onDo()
{
	int seed = inputSymbols[0]->getSymbol() + (inputSymbols[0]->getSymbol() * 36) + (inputSymbols[0]->getSymbol() * 36 * 36);

	seed *= 42;

	seed += (QDateTime::currentDateTime().toMSecsSinceEpoch()/1000);

	qsrand(seed);

//	qDebug()<<qrand()<<qrand()<<qrand()<<qrand()<<qrand()<<qrand()<<qrand();

	foreach (SymbolControlWidget* scw, outputSymbols) {
		scw->setSymbol(qrand()% 36 + 1);
	}

}
