#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./TtsSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline JString TtsSpan::ANIMACY_ANIMATE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ANIMACY_ANIMATE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ANIMACY_INANIMATE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ANIMACY_INANIMATE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_ANIMACY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_ANIMACY",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_CASE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_CASE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_COUNTRY_CODE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_COUNTRY_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_CURRENCY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_CURRENCY",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_DAY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_DENOMINATOR()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DENOMINATOR",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_DIGITS()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DIGITS",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_DOMAIN()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DOMAIN",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_EXTENSION()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_EXTENSION",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_FRACTIONAL_PART()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_FRACTIONAL_PART",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_FRAGMENT_ID()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_FRAGMENT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_GENDER()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_GENDER",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_HOURS()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_HOURS",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_INTEGER_PART()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_INTEGER_PART",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_MINUTES()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MINUTES",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_MONTH()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MONTH",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_MULTIPLICITY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MULTIPLICITY",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_NUMBER()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_NUMBER_PARTS()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMBER_PARTS",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_NUMERATOR()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMERATOR",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_PASSWORD()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_PATH()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PATH",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_PORT()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PORT",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_PROTOCOL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PROTOCOL",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_QUANTITY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_QUANTITY",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_QUERY_STRING()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_QUERY_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_TEXT()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_UNIT()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_UNIT",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_USERNAME()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_USERNAME",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_VERBATIM()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_VERBATIM",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_WEEKDAY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_WEEKDAY",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::ARG_YEAR()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_YEAR",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::CASE_ABLATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_ABLATIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::CASE_ACCUSATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_ACCUSATIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::CASE_DATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_DATIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::CASE_GENITIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_GENITIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::CASE_INSTRUMENTAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_INSTRUMENTAL",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::CASE_LOCATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_LOCATIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::CASE_NOMINATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_NOMINATIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::CASE_VOCATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_VOCATIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::GENDER_FEMALE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_FEMALE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::GENDER_MALE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_MALE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::GENDER_NEUTRAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_NEUTRAL",
			"Ljava/lang/String;"
		);
	}
	inline jint TtsSpan::MONTH_APRIL()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_APRIL"
		);
	}
	inline jint TtsSpan::MONTH_AUGUST()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_AUGUST"
		);
	}
	inline jint TtsSpan::MONTH_DECEMBER()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_DECEMBER"
		);
	}
	inline jint TtsSpan::MONTH_FEBRUARY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_FEBRUARY"
		);
	}
	inline jint TtsSpan::MONTH_JANUARY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JANUARY"
		);
	}
	inline jint TtsSpan::MONTH_JULY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JULY"
		);
	}
	inline jint TtsSpan::MONTH_JUNE()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JUNE"
		);
	}
	inline jint TtsSpan::MONTH_MARCH()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_MARCH"
		);
	}
	inline jint TtsSpan::MONTH_MAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_MAY"
		);
	}
	inline jint TtsSpan::MONTH_NOVEMBER()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_NOVEMBER"
		);
	}
	inline jint TtsSpan::MONTH_OCTOBER()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_OCTOBER"
		);
	}
	inline jint TtsSpan::MONTH_SEPTEMBER()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_SEPTEMBER"
		);
	}
	inline JString TtsSpan::MULTIPLICITY_DUAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_DUAL",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::MULTIPLICITY_PLURAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_PLURAL",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::MULTIPLICITY_SINGLE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_SINGLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_CARDINAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_CARDINAL",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_DATE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DATE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_DECIMAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DECIMAL",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_DIGITS()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DIGITS",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_ELECTRONIC()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_ELECTRONIC",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_FRACTION()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_FRACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_MEASURE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_MEASURE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_MONEY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_MONEY",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_ORDINAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_ORDINAL",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_TELEPHONE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TELEPHONE",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_TEXT()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_TIME()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TIME",
			"Ljava/lang/String;"
		);
	}
	inline JString TtsSpan::TYPE_VERBATIM()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_VERBATIM",
			"Ljava/lang/String;"
		);
	}
	inline jint TtsSpan::WEEKDAY_FRIDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_FRIDAY"
		);
	}
	inline jint TtsSpan::WEEKDAY_MONDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_MONDAY"
		);
	}
	inline jint TtsSpan::WEEKDAY_SATURDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_SATURDAY"
		);
	}
	inline jint TtsSpan::WEEKDAY_SUNDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_SUNDAY"
		);
	}
	inline jint TtsSpan::WEEKDAY_THURSDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_THURSDAY"
		);
	}
	inline jint TtsSpan::WEEKDAY_TUESDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_TUESDAY"
		);
	}
	inline jint TtsSpan::WEEKDAY_WEDNESDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_WEDNESDAY"
		);
	}
	
	// Constructors
	inline TtsSpan::TtsSpan(android::os::Parcel arg0)
		: JObject(
			"android.text.style.TtsSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline TtsSpan::TtsSpan(JString arg0, android::os::PersistableBundle arg1)
		: JObject(
			"android.text.style.TtsSpan",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint TtsSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::PersistableBundle TtsSpan::getArgs() const
	{
		return callObjectMethod(
			"getArgs",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint TtsSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline JString TtsSpan::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline void TtsSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
