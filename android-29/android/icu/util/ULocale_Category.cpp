#include "./ULocale_Category.hpp"

namespace android::icu::util
{
	// Fields
	QAndroidJniObject ULocale_Category::DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale$Category",
			"DISPLAY",
			"Landroid/icu/util/ULocale$Category;"
		);
	}
	QAndroidJniObject ULocale_Category::FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale$Category",
			"FORMAT",
			"Landroid/icu/util/ULocale$Category;"
		);
	}
	
	// QAndroidJniObject forward
	ULocale_Category::ULocale_Category(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ULocale_Category::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Category;",
			arg0
		);
	}
	jarray ULocale_Category::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"values",
			"()[Landroid/icu/util/ULocale$Category;"
		).object<jarray>();
	}
} // namespace android::icu::util
