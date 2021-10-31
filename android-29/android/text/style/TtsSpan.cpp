#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./TtsSpan.hpp"

namespace android::text::style
{
	// Fields
	jstring TtsSpan::ANIMACY_ANIMATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ANIMACY_ANIMATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ANIMACY_INANIMATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ANIMACY_INANIMATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_ANIMACY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_ANIMACY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_CASE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_CASE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_COUNTRY_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_COUNTRY_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_CURRENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_CURRENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_DENOMINATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DENOMINATOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_DIGITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DIGITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_DOMAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DOMAIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_EXTENSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_EXTENSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_FRACTIONAL_PART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_FRACTIONAL_PART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_FRAGMENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_FRAGMENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_GENDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_GENDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_HOURS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_INTEGER_PART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_INTEGER_PART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MINUTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_MULTIPLICITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MULTIPLICITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_NUMBER_PARTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMBER_PARTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_NUMERATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMERATOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_PATH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PATH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_PORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_QUANTITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_QUANTITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_QUERY_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_QUERY_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_UNIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_UNIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_USERNAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_USERNAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_VERBATIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_VERBATIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_WEEKDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_WEEKDAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::ARG_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_YEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_ABLATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_ABLATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_ACCUSATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_ACCUSATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_DATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_DATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_GENITIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_GENITIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_INSTRUMENTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_INSTRUMENTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_LOCATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_LOCATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_NOMINATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_NOMINATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::CASE_VOCATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_VOCATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::GENDER_FEMALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_FEMALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::GENDER_MALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_MALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::GENDER_NEUTRAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_NEUTRAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TtsSpan::MONTH_APRIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_APRIL"
		);
	}
	jint TtsSpan::MONTH_AUGUST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_AUGUST"
		);
	}
	jint TtsSpan::MONTH_DECEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_DECEMBER"
		);
	}
	jint TtsSpan::MONTH_FEBRUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_FEBRUARY"
		);
	}
	jint TtsSpan::MONTH_JANUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JANUARY"
		);
	}
	jint TtsSpan::MONTH_JULY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JULY"
		);
	}
	jint TtsSpan::MONTH_JUNE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JUNE"
		);
	}
	jint TtsSpan::MONTH_MARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_MARCH"
		);
	}
	jint TtsSpan::MONTH_MAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_MAY"
		);
	}
	jint TtsSpan::MONTH_NOVEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_NOVEMBER"
		);
	}
	jint TtsSpan::MONTH_OCTOBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_OCTOBER"
		);
	}
	jint TtsSpan::MONTH_SEPTEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_SEPTEMBER"
		);
	}
	jstring TtsSpan::MULTIPLICITY_DUAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_DUAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::MULTIPLICITY_PLURAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_PLURAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::MULTIPLICITY_SINGLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_SINGLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_CARDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_CARDINAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_DECIMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DECIMAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_DIGITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DIGITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_ELECTRONIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_ELECTRONIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_FRACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_FRACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_MEASURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_MEASURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_MONEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_MONEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_ORDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_ORDINAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_TELEPHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TELEPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TtsSpan::TYPE_VERBATIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_VERBATIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TtsSpan::WEEKDAY_FRIDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_FRIDAY"
		);
	}
	jint TtsSpan::WEEKDAY_MONDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_MONDAY"
		);
	}
	jint TtsSpan::WEEKDAY_SATURDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_SATURDAY"
		);
	}
	jint TtsSpan::WEEKDAY_SUNDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_SUNDAY"
		);
	}
	jint TtsSpan::WEEKDAY_THURSDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_THURSDAY"
		);
	}
	jint TtsSpan::WEEKDAY_TUESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_TUESDAY"
		);
	}
	jint TtsSpan::WEEKDAY_WEDNESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_WEDNESDAY"
		);
	}
	
	TtsSpan::TtsSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan::TtsSpan(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	TtsSpan::TtsSpan(jstring arg0, android::os::PersistableBundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint TtsSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject TtsSpan::getArgs()
	{
		return __thiz.callObjectMethod(
			"getArgs",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint TtsSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jstring TtsSpan::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TtsSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

