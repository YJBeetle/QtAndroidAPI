#include "./LocaleDisplayNames_DialectHandling.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject LocaleDisplayNames_DialectHandling::DIALECT_NAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"DIALECT_NAMES",
			"Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	QAndroidJniObject LocaleDisplayNames_DialectHandling::STANDARD_NAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"STANDARD_NAMES",
			"Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	
	// QAndroidJniObject forward
	LocaleDisplayNames_DialectHandling::LocaleDisplayNames_DialectHandling(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject LocaleDisplayNames_DialectHandling::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/LocaleDisplayNames$DialectHandling;",
			arg0
		);
	}
	jarray LocaleDisplayNames_DialectHandling::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"values",
			"()[Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		).object<jarray>();
	}
} // namespace android::icu::text

