#include "./MeasureFormat_FormatWidth.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject MeasureFormat_FormatWidth::NARROW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"NARROW",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	QAndroidJniObject MeasureFormat_FormatWidth::NUMERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"NUMERIC",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	QAndroidJniObject MeasureFormat_FormatWidth::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"SHORT",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	QAndroidJniObject MeasureFormat_FormatWidth::WIDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"WIDE",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	
	MeasureFormat_FormatWidth::MeasureFormat_FormatWidth(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MeasureFormat_FormatWidth::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat$FormatWidth",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MeasureFormat$FormatWidth;",
			arg0
		);
	}
	jarray MeasureFormat_FormatWidth::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat$FormatWidth",
			"values",
			"()[Landroid/icu/text/MeasureFormat$FormatWidth;"
		).object<jarray>();
	}
} // namespace android::icu::text

