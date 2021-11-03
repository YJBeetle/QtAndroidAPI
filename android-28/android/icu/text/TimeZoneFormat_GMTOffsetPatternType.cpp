#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TimeZoneFormat_GMTOffsetPatternType.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::TimeZoneFormat_GMTOffsetPatternType TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_H()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_H",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	android::icu::text::TimeZoneFormat_GMTOffsetPatternType TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_HM()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_HM",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	android::icu::text::TimeZoneFormat_GMTOffsetPatternType TimeZoneFormat_GMTOffsetPatternType::NEGATIVE_HMS()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"NEGATIVE_HMS",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	android::icu::text::TimeZoneFormat_GMTOffsetPatternType TimeZoneFormat_GMTOffsetPatternType::POSITIVE_H()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_H",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	android::icu::text::TimeZoneFormat_GMTOffsetPatternType TimeZoneFormat_GMTOffsetPatternType::POSITIVE_HM()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_HM",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	android::icu::text::TimeZoneFormat_GMTOffsetPatternType TimeZoneFormat_GMTOffsetPatternType::POSITIVE_HMS()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"POSITIVE_HMS",
			"Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
	
	// QJniObject forward
	TimeZoneFormat_GMTOffsetPatternType::TimeZoneFormat_GMTOffsetPatternType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::TimeZoneFormat_GMTOffsetPatternType TimeZoneFormat_GMTOffsetPatternType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;",
			arg0.object<jstring>()
		);
	}
	JArray TimeZoneFormat_GMTOffsetPatternType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$GMTOffsetPatternType",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;"
		);
	}
} // namespace android::icu::text

