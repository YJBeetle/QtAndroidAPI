#include "./TimeZoneFormat_GMTOffsetPatternType.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_H()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_H",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_HM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_HM",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_HMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_HMS",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::POSITIVE_H()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_H",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::POSITIVE_HM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_HM",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::POSITIVE_HMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_HMS",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	
	TimeZoneFormat_GMTOffsetPatternType::TimeZoneFormat_GMTOffsetPatternType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat_GMTOffsetPatternType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TimeZoneFormat_GMTOffsetPatternType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		).object<jarray>();
	}
} // namespace android::icu::text

