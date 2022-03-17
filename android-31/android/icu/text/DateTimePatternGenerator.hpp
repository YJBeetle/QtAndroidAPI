#pragma once

#include "./DateTimePatternGenerator_DisplayWidth.def.hpp"
#include "./DateTimePatternGenerator_PatternInfo.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DateTimePatternGenerator.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint DateTimePatternGenerator::DAY()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY"
		);
	}
	inline jint DateTimePatternGenerator::DAYPERIOD()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAYPERIOD"
		);
	}
	inline jint DateTimePatternGenerator::DAY_OF_WEEK_IN_MONTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY_OF_WEEK_IN_MONTH"
		);
	}
	inline jint DateTimePatternGenerator::DAY_OF_YEAR()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY_OF_YEAR"
		);
	}
	inline jint DateTimePatternGenerator::ERA()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"ERA"
		);
	}
	inline jint DateTimePatternGenerator::FRACTIONAL_SECOND()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"FRACTIONAL_SECOND"
		);
	}
	inline jint DateTimePatternGenerator::HOUR()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"HOUR"
		);
	}
	inline jint DateTimePatternGenerator::MATCH_ALL_FIELDS_LENGTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_ALL_FIELDS_LENGTH"
		);
	}
	inline jint DateTimePatternGenerator::MATCH_HOUR_FIELD_LENGTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_HOUR_FIELD_LENGTH"
		);
	}
	inline jint DateTimePatternGenerator::MATCH_NO_OPTIONS()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_NO_OPTIONS"
		);
	}
	inline jint DateTimePatternGenerator::MINUTE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MINUTE"
		);
	}
	inline jint DateTimePatternGenerator::MONTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MONTH"
		);
	}
	inline jint DateTimePatternGenerator::QUARTER()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"QUARTER"
		);
	}
	inline jint DateTimePatternGenerator::SECOND()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"SECOND"
		);
	}
	inline jint DateTimePatternGenerator::WEEKDAY()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEKDAY"
		);
	}
	inline jint DateTimePatternGenerator::WEEK_OF_MONTH()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEK_OF_MONTH"
		);
	}
	inline jint DateTimePatternGenerator::WEEK_OF_YEAR()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEK_OF_YEAR"
		);
	}
	inline jint DateTimePatternGenerator::YEAR()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"YEAR"
		);
	}
	inline jint DateTimePatternGenerator::ZONE()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"ZONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::getEmptyInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getEmptyInstance",
			"()Landroid/icu/text/DateTimePatternGenerator;"
		);
	}
	inline android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"()Landroid/icu/text/DateTimePatternGenerator;"
		);
	}
	inline android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0.object()
		);
	}
	inline android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0.object()
		);
	}
	inline android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::addPattern(JString arg0, jboolean arg1, android::icu::text::DateTimePatternGenerator_PatternInfo arg2) const
	{
		return callObjectMethod(
			"addPattern",
			"(Ljava/lang/String;ZLandroid/icu/text/DateTimePatternGenerator$PatternInfo;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline JObject DateTimePatternGenerator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::cloneAsThawed() const
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/DateTimePatternGenerator;"
		);
	}
	inline android::icu::text::DateTimePatternGenerator DateTimePatternGenerator::freeze() const
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/DateTimePatternGenerator;"
		);
	}
	inline JString DateTimePatternGenerator::getAppendItemFormat(jint arg0) const
	{
		return callObjectMethod(
			"getAppendItemFormat",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString DateTimePatternGenerator::getAppendItemName(jint arg0) const
	{
		return callObjectMethod(
			"getAppendItemName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString DateTimePatternGenerator::getBaseSkeleton(JString arg0) const
	{
		return callObjectMethod(
			"getBaseSkeleton",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject DateTimePatternGenerator::getBaseSkeletons(JObject arg0) const
	{
		return callObjectMethod(
			"getBaseSkeletons",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JString DateTimePatternGenerator::getBestPattern(JString arg0) const
	{
		return callObjectMethod(
			"getBestPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString DateTimePatternGenerator::getBestPattern(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getBestPattern",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString DateTimePatternGenerator::getDateTimeFormat() const
	{
		return callObjectMethod(
			"getDateTimeFormat",
			"()Ljava/lang/String;"
		);
	}
	inline JString DateTimePatternGenerator::getDecimal() const
	{
		return callObjectMethod(
			"getDecimal",
			"()Ljava/lang/String;"
		);
	}
	inline JString DateTimePatternGenerator::getFieldDisplayName(jint arg0, android::icu::text::DateTimePatternGenerator_DisplayWidth arg1) const
	{
		return callObjectMethod(
			"getFieldDisplayName",
			"(ILandroid/icu/text/DateTimePatternGenerator$DisplayWidth;)Ljava/lang/String;",
			arg0,
			arg1.object()
		);
	}
	inline JString DateTimePatternGenerator::getSkeleton(JString arg0) const
	{
		return callObjectMethod(
			"getSkeleton",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject DateTimePatternGenerator::getSkeletons(JObject arg0) const
	{
		return callObjectMethod(
			"getSkeletons",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.object()
		);
	}
	inline jboolean DateTimePatternGenerator::isFrozen() const
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	inline JString DateTimePatternGenerator::replaceFieldTypes(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"replaceFieldTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString DateTimePatternGenerator::replaceFieldTypes(JString arg0, JString arg1, jint arg2) const
	{
		return callObjectMethod(
			"replaceFieldTypes",
			"(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void DateTimePatternGenerator::setAppendItemFormat(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setAppendItemFormat",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void DateTimePatternGenerator::setAppendItemName(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setAppendItemName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void DateTimePatternGenerator::setDateTimeFormat(JString arg0) const
	{
		callMethod<void>(
			"setDateTimeFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DateTimePatternGenerator::setDecimal(JString arg0) const
	{
		callMethod<void>(
			"setDecimal",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
