#include "./DateTimePatternGenerator_PatternInfo.hpp"
#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	
	// QJniObject forward
	DateTimePatternGenerator::DateTimePatternGenerator(QJniObject obj) : JObject(obj) {}
	
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
	android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::addPattern(JString arg0, jboolean arg1, android::icu::text::DateTimePatternGenerator_PatternInfo arg2)
	{
		return callObjectMethod(
			"addPattern",
			"(Ljava/lang/String;ZLandroid/icu/text/DateTimePatternGenerator$PatternInfo;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	JObject DateTimePatternGenerator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
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
	JString DateTimePatternGenerator::getAppendItemFormat(jint arg0)
	{
		return callObjectMethod(
			"getAppendItemFormat",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString DateTimePatternGenerator::getAppendItemName(jint arg0)
	{
		return callObjectMethod(
			"getAppendItemName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString DateTimePatternGenerator::getBaseSkeleton(JString arg0)
	{
		return callObjectMethod(
			"getBaseSkeleton",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject DateTimePatternGenerator::getBaseSkeletons(JObject arg0)
	{
		return callObjectMethod(
			"getBaseSkeletons",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JString DateTimePatternGenerator::getBestPattern(JString arg0)
	{
		return callObjectMethod(
			"getBestPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString DateTimePatternGenerator::getBestPattern(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"getBestPattern",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString DateTimePatternGenerator::getDateTimeFormat()
	{
		return callObjectMethod(
			"getDateTimeFormat",
			"()Ljava/lang/String;"
		);
	}
	JString DateTimePatternGenerator::getDecimal()
	{
		return callObjectMethod(
			"getDecimal",
			"()Ljava/lang/String;"
		);
	}
	JString DateTimePatternGenerator::getSkeleton(JString arg0)
	{
		return callObjectMethod(
			"getSkeleton",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
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
	JString DateTimePatternGenerator::replaceFieldTypes(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"replaceFieldTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString DateTimePatternGenerator::replaceFieldTypes(JString arg0, JString arg1, jint arg2)
	{
		return callObjectMethod(
			"replaceFieldTypes",
			"(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void DateTimePatternGenerator::setAppendItemFormat(jint arg0, JString arg1)
	{
		callMethod<void>(
			"setAppendItemFormat",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void DateTimePatternGenerator::setAppendItemName(jint arg0, JString arg1)
	{
		callMethod<void>(
			"setAppendItemName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void DateTimePatternGenerator::setDateTimeFormat(JString arg0)
	{
		callMethod<void>(
			"setDateTimeFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DateTimePatternGenerator::setDecimal(JString arg0)
	{
		callMethod<void>(
			"setDecimal",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

