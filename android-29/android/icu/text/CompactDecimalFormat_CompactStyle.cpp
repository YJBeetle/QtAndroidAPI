#include "./CompactDecimalFormat_CompactStyle.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject CompactDecimalFormat_CompactStyle::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"LONG",
			"Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
	QAndroidJniObject CompactDecimalFormat_CompactStyle::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"SHORT",
			"Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
	
	// QAndroidJniObject forward
	CompactDecimalFormat_CompactStyle::CompactDecimalFormat_CompactStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CompactDecimalFormat_CompactStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/CompactDecimalFormat$CompactStyle;",
			arg0
		);
	}
	jarray CompactDecimalFormat_CompactStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"values",
			"()[Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		).object<jarray>();
	}
} // namespace android::icu::text
