#include "meaningsymbol.h"

MeaningSymbol::MeaningSymbol(int id, QObject *parent) : QObject(parent)
{

	setSymbol(id);

}

void MeaningSymbol::setSymbol(MeaningSymbol& nms)
{
	this->setSymbol(nms.getId());
}

void MeaningSymbol::setSymbol(int id)
{

	this->id = id;

	switch (id){
	case 1 : {
		this->name = "watch";
		this->icon = ":/icons/icons/1.jpg";
		break;
	}
	case 2: {
		this->name = "sun";
		this->icon = ":/icons/icons/2.jpg";
		break;
	}
	case 3 : {
		this->name = "alpha/omega";
		this->icon = ":/icons/icons/3.jpg";
		break;
	}
	case 4 : {
		this->name = "puppet";
		this->icon = ":/icons/icons/4.jpg";
		break;
	}
	case 5 : {
		this->name = "snake";
		this->icon = ":/icons/icons/5.jpg";
		break;
	}
	case 6 : {
		this->name = "pot";
		this->icon = ":/icons/icons/6.jpg";
		break;
	}
	case 7 : {
		this->name = "anchor";
		this->icon = ":/icons/icons/7.jpg";
		break;
	}
	case 8 : {
		this->name = "angel";
		this->icon = ":/icons/icons/8.jpg";
		break;
	}
	case 9 : {
		this->name = "helm";
		this->icon = ":/icons/icons/9.jpg";
		break;
	}
	case 10 : {
		this->name = "hive";
		this->icon = ":/icons/icons/10.jpg";
		break;
	}
	case 11 : {
		this->name = "month";
		this->icon = ":/icons/icons/11.jpg";
		break;
	}
	case 12 : {
		this->name = "mother";
		this->icon = ":/icons/icons/12.jpg";
		break;
	}
	case 13 : {
		this->name = "apple";
		this->icon = ":/icons/icons/13.jpg";
		break;
	}
	case 14 : {
		this->name = "bird";
		this->icon = ":/icons/icons/14.jpg";
		break;
	}
	case 15 : {
		this->name = "bread";
		this->icon = ":/icons/icons/15.jpg";
		break;
	}
	case 16 : {
		this->name = "ant";
		this->icon = ":/icons/icons/16.jpg";
		break;
	}
	case 17 : {
		this->name = "taurus";
		this->icon = ":/icons/icons/17.jpg";
		break;
	}
	case 18 : {
		this->name = "candle";
		this->icon = ":/icons/icons/18.jpg";
		break;
	}
	case 19 : {
		this->name = "cornucopia";
		this->icon = ":/icons/icons/19.jpg";
		break;
	}
	case 20 : {
		this->name = "hamelion";
		this->icon = ":/icons/icons/20.jpg";
		break;
	}
	case 21 : {
		this->name = "thunder";
		this->icon = ":/icons/icons/21.jpg";
		break;
	}
	case 22 : {
		this->name = "dolphin";
		this->icon = ":/icons/icons/22.jpg";
		break;
	}
	case 23 : {
		this->name = "rose";
		this->icon = ":/icons/icons/23.jpg";
		break;
	}
	case 24 : {
		this->name = "globe";
		this->icon = ":/icons/icons/24.jpg";
		break;
	}
	case 25 : {
		this->name = "knife";
		this->icon = ":/icons/icons/25.jpg";
		break;
	}
	case 26 : {
		this->name = "griphon";
		this->icon = ":/icons/icons/26.jpg";
		break;
	}
	case 27 : {
		this->name = "horse";
		this->icon = ":/icons/icons/27.jpg";
		break;
	}
	case 28 : {
		this->name = "camel";
		this->icon = ":/icons/icons/28.jpg";
		break;
	}
	case 29 : {
		this->name = "elephant";
		this->icon = ":/icons/icons/29.jpg";
		break;
	}
	case 30 : {
		this->name = "crocodyle";
		this->icon = ":/icons/icons/30.jpg";
		break;
	}
	case 31 : {
		this->name = "child";
		this->icon = ":/icons/icons/31.jpg";
		break;
	}
	case 32 : {
		this->name = "divider";
		this->icon = ":/icons/icons/32.jpg";
		break;
	}
	case 33 : {
		this->name = "lute";
		this->icon = ":/icons/icons/33.jpg";
		break;
	}
	case 34 : {
		this->name = "oak";
		this->icon = ":/icons/icons/34.jpg";
		break;
	}
	case 35 : {
		this->name = "barbar";
		this->icon = ":/icons/icons/35.jpg";
		break;
	}
	case 36 : {
		this->name = "owl";
		this->icon = ":/icons/icons/36.jpg";
		break;
	}
//	deafult : {
//		this->name = "emptienes";
//		this->icon = ":/icons/icons/1.jpg";
//		break;
//	}
	}
}

int MeaningSymbol::getSymbol()
{
	return this->id;
}

int MeaningSymbol::getId() const
{
	return id;
}

QString MeaningSymbol::getName() const
{
	return name;
}

QString MeaningSymbol::getIcon() const
{
	return icon;
}

QString MeaningSymbol::getNameById(int askid)
{
	MeaningSymbol temp(askid);
	return temp.getName();
}
