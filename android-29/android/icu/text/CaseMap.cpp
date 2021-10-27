#include "./CaseMap_Fold.hpp"
#include "./CaseMap_Lower.hpp"
#include "./CaseMap_Title.hpp"
#include "./CaseMap_Upper.hpp"
#include "./CaseMap.hpp"

namespace android::icu::text
{
	// Fields
	
	CaseMap::CaseMap(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CaseMap::fold()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"fold",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
	QAndroidJniObject CaseMap::toLower()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toLower",
			"()Landroid/icu/text/CaseMap$Lower;"
		);
	}
	QAndroidJniObject CaseMap::toTitle()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toTitle",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap::toUpper()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toUpper",
			"()Landroid/icu/text/CaseMap$Upper;"
		);
	}
	QAndroidJniObject CaseMap::omitUnchangedText()
	{
		return __thiz.callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap;"
		);
	}
} // namespace android::icu::text

