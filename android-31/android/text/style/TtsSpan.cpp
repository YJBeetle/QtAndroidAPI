#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./TtsSpan.hpp"

namespace android::text::style
{
	// Fields
	jstring TtsSpan::ANIMACY_ANIMATE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ANIMACY_ANIMATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ANIMACY_INANIMATE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ANIMACY_INANIMATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_ANIMACY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_ANIMACY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_CASE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_CASE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_COUNTRY_CODE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_COUNTRY_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_CURRENCY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_CURRENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_DAY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_DENOMINATOR()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DENOMINATOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_DIGITS()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DIGITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_DOMAIN()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DOMAIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_EXTENSION()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_EXTENSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_FRACTIONAL_PART()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_FRACTIONAL_PART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_FRAGMENT_ID()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_FRAGMENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_GENDER()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_GENDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_HOURS()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_HOURS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_INTEGER_PART()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_INTEGER_PART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_MINUTES()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MINUTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_MONTH()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_MULTIPLICITY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MULTIPLICITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_NUMBER()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_NUMBER_PARTS()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMBER_PARTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_NUMERATOR()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMERATOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_PASSWORD()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_PATH()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PATH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_PORT()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_PROTOCOL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_QUANTITY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_QUANTITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_QUERY_STRING()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_QUERY_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_TEXT()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_UNIT()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_UNIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_USERNAME()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_USERNAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_VERBATIM()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_VERBATIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_WEEKDAY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_WEEKDAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_YEAR()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_YEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_ABLATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_ABLATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_ACCUSATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_ACCUSATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_DATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_DATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_GENITIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_GENITIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_INSTRUMENTAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_INSTRUMENTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_LOCATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_LOCATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_NOMINATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_NOMINATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_VOCATIVE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_VOCATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::GENDER_FEMALE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_FEMALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::GENDER_MALE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_MALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::GENDER_NEUTRAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_NEUTRAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TtsSpan::MONTH_APRIL()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_APRIL"
		);
	}
	jint TtsSpan::MONTH_AUGUST()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_AUGUST"
		);
	}
	jint TtsSpan::MONTH_DECEMBER()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_DECEMBER"
		);
	}
	jint TtsSpan::MONTH_FEBRUARY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_FEBRUARY"
		);
	}
	jint TtsSpan::MONTH_JANUARY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JANUARY"
		);
	}
	jint TtsSpan::MONTH_JULY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JULY"
		);
	}
	jint TtsSpan::MONTH_JUNE()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JUNE"
		);
	}
	jint TtsSpan::MONTH_MARCH()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_MARCH"
		);
	}
	jint TtsSpan::MONTH_MAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_MAY"
		);
	}
	jint TtsSpan::MONTH_NOVEMBER()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_NOVEMBER"
		);
	}
	jint TtsSpan::MONTH_OCTOBER()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_OCTOBER"
		);
	}
	jint TtsSpan::MONTH_SEPTEMBER()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_SEPTEMBER"
		);
	}
	jstring TtsSpan::MULTIPLICITY_DUAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_DUAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::MULTIPLICITY_PLURAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_PLURAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::MULTIPLICITY_SINGLE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_SINGLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_CARDINAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_CARDINAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_DATE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_DECIMAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DECIMAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_DIGITS()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DIGITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_ELECTRONIC()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_ELECTRONIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_FRACTION()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_FRACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_MEASURE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_MEASURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_MONEY()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_MONEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_ORDINAL()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_ORDINAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_TELEPHONE()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TELEPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_TEXT()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_TIME()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_VERBATIM()
	{
		return getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_VERBATIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TtsSpan::WEEKDAY_FRIDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_FRIDAY"
		);
	}
	jint TtsSpan::WEEKDAY_MONDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_MONDAY"
		);
	}
	jint TtsSpan::WEEKDAY_SATURDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_SATURDAY"
		);
	}
	jint TtsSpan::WEEKDAY_SUNDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_SUNDAY"
		);
	}
	jint TtsSpan::WEEKDAY_THURSDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_THURSDAY"
		);
	}
	jint TtsSpan::WEEKDAY_TUESDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_TUESDAY"
		);
	}
	jint TtsSpan::WEEKDAY_WEDNESDAY()
	{
		return getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_WEDNESDAY"
		);
	}
	
	// QAndroidJniObject forward
	TtsSpan::TtsSpan(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TtsSpan::TtsSpan(android::os::Parcel arg0)
		: JObject(
			"android.text.style.TtsSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	TtsSpan::TtsSpan(jstring arg0, android::os::PersistableBundle arg1)
		: JObject(
			"android.text.style.TtsSpan",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint TtsSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::PersistableBundle TtsSpan::getArgs()
	{
		return callObjectMethod(
			"getArgs",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint TtsSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jstring TtsSpan::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TtsSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

