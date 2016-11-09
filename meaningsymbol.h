#ifndef MEANINGSYMBOL_H
#define MEANINGSYMBOL_H

#include <QObject>
#include <QPixmap>
#include <QLabel>

class MeaningSymbol : public QObject
{
	Q_OBJECT
public:
	explicit MeaningSymbol(int id, QObject *parent = 0);

	void setSymbol(MeaningSymbol& nms);
	void setSymbol(int id);

	int getSymbol();



	int getId() const;
	QString getName() const;
	QString getIcon() const;

	QString getNameById(int askid);

signals:

public slots:

private:
    int id;
    QString name;
	QString icon;
    
    
};

#endif // MEANINGSYMBOL_H
