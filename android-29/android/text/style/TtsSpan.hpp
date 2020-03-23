#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN
#define ANDROID_TEXT_STYLE_TTSSPAN

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::text::style
{
	class TtsSpan : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ANIMACY_ANIMATE();
		static QAndroidJniObject ANIMACY_INANIMATE();
		static QAndroidJniObject ARG_ANIMACY();
		static QAndroidJniObject ARG_CASE();
		static QAndroidJniObject ARG_COUNTRY_CODE();
		static QAndroidJniObject ARG_CURRENCY();
		static QAndroidJniObject ARG_DAY();
		static QAndroidJniObject ARG_DENOMINATOR();
		static QAndroidJniObject ARG_DIGITS();
		static QAndroidJniObject ARG_DOMAIN();
		static QAndroidJniObject ARG_EXTENSION();
		static QAndroidJniObject ARG_FRACTIONAL_PART();
		static QAndroidJniObject ARG_FRAGMENT_ID();
		static QAndroidJniObject ARG_GENDER();
		static QAndroidJniObject ARG_HOURS();
		static QAndroidJniObject ARG_INTEGER_PART();
		static QAndroidJniObject ARG_MINUTES();
		static QAndroidJniObject ARG_MONTH();
		static QAndroidJniObject ARG_MULTIPLICITY();
		static QAndroidJniObject ARG_NUMBER();
		static QAndroidJniObject ARG_NUMBER_PARTS();
		static QAndroidJniObject ARG_NUMERATOR();
		static QAndroidJniObject ARG_PASSWORD();
		static QAndroidJniObject ARG_PATH();
		static QAndroidJniObject ARG_PORT();
		static QAndroidJniObject ARG_PROTOCOL();
		static QAndroidJniObject ARG_QUANTITY();
		static QAndroidJniObject ARG_QUERY_STRING();
		static QAndroidJniObject ARG_TEXT();
		static QAndroidJniObject ARG_UNIT();
		static QAndroidJniObject ARG_USERNAME();
		static QAndroidJniObject ARG_VERBATIM();
		static QAndroidJniObject ARG_WEEKDAY();
		static QAndroidJniObject ARG_YEAR();
		static QAndroidJniObject CASE_ABLATIVE();
		static QAndroidJniObject CASE_ACCUSATIVE();
		static QAndroidJniObject CASE_DATIVE();
		static QAndroidJniObject CASE_GENITIVE();
		static QAndroidJniObject CASE_INSTRUMENTAL();
		static QAndroidJniObject CASE_LOCATIVE();
		static QAndroidJniObject CASE_NOMINATIVE();
		static QAndroidJniObject CASE_VOCATIVE();
		static QAndroidJniObject GENDER_FEMALE();
		static QAndroidJniObject GENDER_MALE();
		static QAndroidJniObject GENDER_NEUTRAL();
		static jint MONTH_APRIL();
		static jint MONTH_AUGUST();
		static jint MONTH_DECEMBER();
		static jint MONTH_FEBRUARY();
		static jint MONTH_JANUARY();
		static jint MONTH_JULY();
		static jint MONTH_JUNE();
		static jint MONTH_MARCH();
		static jint MONTH_MAY();
		static jint MONTH_NOVEMBER();
		static jint MONTH_OCTOBER();
		static jint MONTH_SEPTEMBER();
		static QAndroidJniObject MULTIPLICITY_DUAL();
		static QAndroidJniObject MULTIPLICITY_PLURAL();
		static QAndroidJniObject MULTIPLICITY_SINGLE();
		static QAndroidJniObject TYPE_CARDINAL();
		static QAndroidJniObject TYPE_DATE();
		static QAndroidJniObject TYPE_DECIMAL();
		static QAndroidJniObject TYPE_DIGITS();
		static QAndroidJniObject TYPE_ELECTRONIC();
		static QAndroidJniObject TYPE_FRACTION();
		static QAndroidJniObject TYPE_MEASURE();
		static QAndroidJniObject TYPE_MONEY();
		static QAndroidJniObject TYPE_ORDINAL();
		static QAndroidJniObject TYPE_TELEPHONE();
		static QAndroidJniObject TYPE_TEXT();
		static QAndroidJniObject TYPE_TIME();
		static QAndroidJniObject TYPE_VERBATIM();
		static jint WEEKDAY_FRIDAY();
		static jint WEEKDAY_MONDAY();
		static jint WEEKDAY_SATURDAY();
		static jint WEEKDAY_SUNDAY();
		static jint WEEKDAY_THURSDAY();
		static jint WEEKDAY_TUESDAY();
		static jint WEEKDAY_WEDNESDAY();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::os::PersistableBundle arg1);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		QAndroidJniObject getType();
		jint getSpanTypeId();
		QAndroidJniObject getArgs();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/PersistableBundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	QAndroidJniObject TtsSpan::ANIMACY_ANIMATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ANIMACY_ANIMATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ANIMACY_INANIMATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ANIMACY_INANIMATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_ANIMACY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_ANIMACY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_CASE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_CASE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_COUNTRY_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_COUNTRY_CODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_CURRENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_CURRENCY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DAY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_DENOMINATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DENOMINATOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_DIGITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DIGITS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_DOMAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_DOMAIN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_EXTENSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_EXTENSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_FRACTIONAL_PART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_FRACTIONAL_PART",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_FRAGMENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_FRAGMENT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_GENDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_GENDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_HOURS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_INTEGER_PART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_INTEGER_PART",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MINUTES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MONTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_MULTIPLICITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_MULTIPLICITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_NUMBER_PARTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMBER_PARTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_NUMERATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_NUMERATOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PASSWORD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_PATH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PATH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_PORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PORT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_PROTOCOL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_QUANTITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_QUANTITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_QUERY_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_QUERY_STRING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_UNIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_UNIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_USERNAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_USERNAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_VERBATIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_VERBATIM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_WEEKDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_WEEKDAY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::ARG_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"ARG_YEAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::CASE_ABLATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_ABLATIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::CASE_ACCUSATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_ACCUSATIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::CASE_DATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_DATIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::CASE_GENITIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_GENITIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::CASE_INSTRUMENTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_INSTRUMENTAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::CASE_LOCATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_LOCATIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::CASE_NOMINATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_NOMINATIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::CASE_VOCATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"CASE_VOCATIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::GENDER_FEMALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_FEMALE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::GENDER_MALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_MALE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::GENDER_NEUTRAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"GENDER_NEUTRAL",
			"Ljava/lang/String;");
	}
	jint TtsSpan::MONTH_APRIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_APRIL");
	}
	jint TtsSpan::MONTH_AUGUST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_AUGUST");
	}
	jint TtsSpan::MONTH_DECEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_DECEMBER");
	}
	jint TtsSpan::MONTH_FEBRUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_FEBRUARY");
	}
	jint TtsSpan::MONTH_JANUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JANUARY");
	}
	jint TtsSpan::MONTH_JULY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JULY");
	}
	jint TtsSpan::MONTH_JUNE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_JUNE");
	}
	jint TtsSpan::MONTH_MARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_MARCH");
	}
	jint TtsSpan::MONTH_MAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_MAY");
	}
	jint TtsSpan::MONTH_NOVEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_NOVEMBER");
	}
	jint TtsSpan::MONTH_OCTOBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_OCTOBER");
	}
	jint TtsSpan::MONTH_SEPTEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"MONTH_SEPTEMBER");
	}
	QAndroidJniObject TtsSpan::MULTIPLICITY_DUAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_DUAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::MULTIPLICITY_PLURAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_PLURAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::MULTIPLICITY_SINGLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"MULTIPLICITY_SINGLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_CARDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_CARDINAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_DECIMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DECIMAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_DIGITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_DIGITS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_ELECTRONIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_ELECTRONIC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_FRACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_FRACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_MEASURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_MEASURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_MONEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_MONEY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_ORDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_ORDINAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_TELEPHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TELEPHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_TIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TtsSpan::TYPE_VERBATIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.TtsSpan",
			"TYPE_VERBATIM",
			"Ljava/lang/String;");
	}
	jint TtsSpan::WEEKDAY_FRIDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_FRIDAY");
	}
	jint TtsSpan::WEEKDAY_MONDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_MONDAY");
	}
	jint TtsSpan::WEEKDAY_SATURDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_SATURDAY");
	}
	jint TtsSpan::WEEKDAY_SUNDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_SUNDAY");
	}
	jint TtsSpan::WEEKDAY_THURSDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_THURSDAY");
	}
	jint TtsSpan::WEEKDAY_TUESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_TUESDAY");
	}
	jint TtsSpan::WEEKDAY_WEDNESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.TtsSpan",
			"WEEKDAY_WEDNESDAY");
	}
	
	// Constructors
	void TtsSpan::__constructor(jstring arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void TtsSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject TtsSpan::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;");
	}
	jint TtsSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I");
	}
	QAndroidJniObject TtsSpan::getArgs()
	{
		return __thiz.callObjectMethod(
			"getArgs",
			"()Landroid/os/PersistableBundle;");
	}
	jint TtsSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void TtsSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan : public __jni_impl::android::text::style::TtsSpan
	{
	public:
		TtsSpan(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan(jstring arg0, __jni_impl::android::os::PersistableBundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TtsSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TTSSPAN

