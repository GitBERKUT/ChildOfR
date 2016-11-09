#ifndef SYMBOLCONTROLWIDGET_H
#define SYMBOLCONTROLWIDGET_H

#include <QWidget>
#include <QDateTime>
#include <QDebug>
#include "meaningsymbol.h"

namespace Ui {
class SymbolControlWidget;
}

class SymbolControlWidget : public QWidget
{
	Q_OBJECT

public:
	explicit SymbolControlWidget(QWidget *parent = 0);
	~SymbolControlWidget();

	MeaningSymbol ms;

	void setSymbol(MeaningSymbol newms);
	void setSymbol(int newid);
	int getSymbol() const;

private:
	Ui::SymbolControlWidget *ui;

private slots:
	void onIdUpdate();
	void redrawControls();
};

#endif // SYMBOLCONTROLWIDGET_H
