#include "./DateTimePatternGenerator_DisplayWidth.hpp"
#include "./DateTimePatternGenerator_PatternInfo.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateTimePatternGenerator.hpp"

namespace android::icu::text
{
	// Fields
	jint DateTimePatternGenerator::DAY()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY"
		);
	}
	jint DateTimePatternGenerator::DAYPERIOD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAYPERIOD"
		);
	}
	jint DateTimePatternGenerator::DAY_OF_WEEK_IN_MONTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY_OF_WEEK_IN_MONTH"
		);
	}
	jint DateTimePatternGenerator::DAY_OF_YEAR()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY_OF_YEAR"
		);
	}
	jint DateTimePatternGenerator::ERA()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"ERA"
		);
	}
	jint DateTimePatternGenerator::FRACTIONAL_SECOND()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"FRACTIONAL_SECOND"
		);
	}
	jint DateTimePatternGenerator::HOUR()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"HOUR"
		);
	}
	jint DateTimePatternGenerator::MATCH_ALL_FIELDS_LENGTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_ALL_FIELDS_LENGTH"
		);
	}
	jint DateTimePatternGenerator::MATCH_HOUR_FIELD_LENGTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_HOUR_FIELD_LENGTH"
		);
	}
	jint DateTimePatternGenerator::MATCH_NO_OPTIONS()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_NO_OPTIONS"
		);
	}
	jint DateTimePatternGenerator::MINUTE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MINUTE"
		);
	}
	jint DateTimePatternGenerator::MONTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MONTH"
		);
	}
	jint DateTimePatternGenerator::QUARTER()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"QUARTER"
		);
	}
	jint DateTimePatternGenerator::SECOND()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"SECOND"
		);
	}
	jint DateTimePatternGenerator::WEEKDAY()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEKDAY"
		);
	}
	jint DateTimePatternGenerator::WEEK_OF_MONTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEK_OF_MONTH"
		);
	}
	jint DateTimePatternGenerator::WEEK_OF_YEAR()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEK_OF_YEAR"
		);
	}
	jint DateTimePatternGenerator::YEAR()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"YEAR"
		);
	}
	jint DateTimePatternGenerator::ZONE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"ZONE"
		);
	}
	
	// QAndroidJniObject forward
	DateTimePatternGenerator::DateTimePatternGenerator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::getEmptyInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getEmptyInstance",
			"()Landroid/icu/text/DateTimePatternGenerator;"
		);
	}
	android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"()Landroid/icu/text/DateTimePatternGenerator;"
		);
	}
	android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0.object()
		);
	}
	android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0.object()
		);
	}
	android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::addPattern(jstring arg0, jboolean arg1, android::icu::text::DateTimePatternGenerator_PatternInfo arg2)
	{
		return callObjectMethod(
			"addPattern",
			"(Ljava/lang/String;ZLandroid/icu/text/DateTimePatternGenerator$PatternInfo;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jobject DateTimePatternGenerator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/DateTimePatternGenerator;"
		);
	}
	android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::freeze()
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/DateTimePatternGenerator;"
		);
	}
	jstring DateTimePatternGenerator::getAppendItemFormat(jint arg0)
	{
		return callObjectMethod(
			"getAppendItemFormat",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DateTimePatternGenerator::getAppendItemName(jint arg0)
	{
		return callObjectMethod(
			"getAppendItemName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DateTimePatternGenerator::getBaseSkeleton(jstring arg0)
	{
		return callObjectMethod(
			"getBaseSkeleton",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	JObject DateTimePatternGenerator::getBaseSkeletons(JObject arg0)
	{
		return callObjectMethod(
			"getBaseSkeletons",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	jstring DateTimePatternGenerator::getBestPattern(jstring arg0)
	{
		return callObjectMethod(
			"getBestPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DateTimePatternGenerator::getBestPattern(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getBestPattern",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DateTimePatternGenerator::getDateTimeFormat()
	{
		return callObjectMethod(
			"getDateTimeFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateTimePatternGenerator::getDecimal()
	{
		return callObjectMethod(
			"getDecimal",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateTimePatternGenerator::getFieldDisplayName(jint arg0, android::icu::text::DateTimePatternGenerator_DisplayWidth arg1)
	{
		return callObjectMethod(
			"getFieldDisplayName",
			"(ILandroid/icu/text/DateTimePatternGenerator$DisplayWidth;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring DateTimePatternGenerator::getSkeleton(jstring arg0)
	{
		return callObjectMethod(
			"getSkeleton",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	JObject DateTimePatternGenerator::getSkeletons(JObject arg0)
	{
		return callObjectMethod(
			"getSkeletons",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.object()
		);
	}
	jboolean DateTimePatternGenerator::isFrozen()
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	jstring DateTimePatternGenerator::replaceFieldTypes(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"replaceFieldTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DateTimePatternGenerator::replaceFieldTypes(jstring arg0, jstring arg1, jint arg2)
	{
		return callObjectMethod(
			"replaceFieldTypes",
			"(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	void DateTimePatternGenerator::setAppendItemFormat(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setAppendItemFormat",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DateTimePatternGenerator::setAppendItemName(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setAppendItemName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DateTimePatternGenerator::setDateTimeFormat(jstring arg0)
	{
		callMethod<void>(
			"setDateTimeFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DateTimePatternGenerator::setDecimal(jstring arg0)
	{
		callMethod<void>(
			"setDecimal",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::icu::text

