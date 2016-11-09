#ifndef ALETHIOMETR_H
#define ALETHIOMETR_H

#include <QMainWindow>
#include <QDateTime>
#include "meaningsymbol.h"
#include "symbolcontrolwidget.h"

namespace Ui {
class Alethiometr;
}

class Alethiometr : public QMainWindow
{
    Q_OBJECT

public:
    explicit Alethiometr(QWidget *parent = 0);
    ~Alethiometr();

public slots:
	onDo();

private:
    Ui::Alethiometr *ui;

	QList<SymbolControlWidget*> inputSymbols;
	QList<SymbolControlWidget*> outputSymbols;




private slots:



};

#endif // ALETHIOMETR_H
