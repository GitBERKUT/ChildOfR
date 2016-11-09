#include "symbolcontrolwidget.h"
#include "ui_symbolcontrolwidget.h"

SymbolControlWidget::SymbolControlWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::SymbolControlWidget),
	ms(1)
{
	ui->setupUi(this);

	connect(ui->inputSB,	SIGNAL(valueChanged(int)),
			this,			SLOT(onIdUpdate()));


	qsrand(QDateTime::currentDateTime().toLocalTime().toTime_t() + QDateTime::currentDateTime().time().msec());

	qDebug() << " ! "<< (int)qrand << RAND_MAX;

	ms.setSymbol(qrand()% 36 + 1);

	redrawControls();

}

SymbolControlWidget::~SymbolControlWidget()
{
	delete ui;
}

void SymbolControlWidget::setSymbol(MeaningSymbol newms)
{
	ms.setSymbol(newms);
	redrawControls();
}

void SymbolControlWidget::setSymbol(int newid)
{
	ms.setSymbol(newid);
	redrawControls();
}

int SymbolControlWidget::getSymbol() const
{
	return ms.getId();
}

void SymbolControlWidget::onIdUpdate()
{

	ms.setSymbol(ui->inputSB->value());
	redrawControls();

}

void SymbolControlWidget::redrawControls()
{
	ui->iconLbl->setPixmap(QPixmap(ms.getIcon()));
	ui->inputSB->setValue(ms.getId());
	ui->nameLbl->setText(ms.getName());
}
