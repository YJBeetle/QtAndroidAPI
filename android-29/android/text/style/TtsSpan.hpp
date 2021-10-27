#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}

namespace __jni_impl::android::text::style
{
	class TtsSpan : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ANIMACY_ANIMATE();
		static jstring ANIMACY_INANIMATE();
		static jstring ARG_ANIMACY();
		static jstring ARG_CASE();
		static jstring ARG_COUNTRY_CODE();
		static jstring ARG_CURRENCY();
		static jstring ARG_DAY();
		static jstring ARG_DENOMINATOR();
		static jstring ARG_DIGITS();
		static jstring ARG_DOMAIN();
		static jstring ARG_EXTENSION();
		static jstring ARG_FRACTIONAL_PART();
		static jstring ARG_FRAGMENT_ID();
		static jstring ARG_GENDER();
		static jstring ARG_HOURS();
		static jstring ARG_INTEGER_PART();
		static jstring ARG_MINUTES();
		static jstring ARG_MONTH();
		static jstring ARG_MULTIPLICITY();
		static jstring ARG_NUMBER();
		static jstring ARG_NUMBER_PARTS();
		static jstring ARG_NUMERATOR();
		static jstring ARG_PASSWORD();
		static jstring ARG_PATH();
		static jstring ARG_PORT();
		static jstring ARG_PROTOCOL();
		static jstring ARG_QUANTITY();
		static jstring ARG_QUERY_STRING();
		static jstring ARG_TEXT();
		static jstring ARG_UNIT();
		static jstring ARG_USERNAME();
		static jstring ARG_VERBATIM();
		static jstring ARG_WEEKDAY();
		static jstring ARG_YEAR();
		static jstring CASE_ABLATIVE();
		static jstring CASE_ACCUSATIVE();
		static jstring CASE_DATIVE();
		static jstring CASE_GENITIVE();
		static jstring CASE_INSTRUMENTAL();
		static jstring CASE_LOCATIVE();
		static jstring CASE_NOMINATIVE();
		static jstring CASE_VOCATIVE();
		static jstring GENDER_FEMALE();
		static jstring GENDER_MALE();
		static jstring GENDER_NEUTRAL();
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
		static jstring MULTIPLICITY_DUAL();
		static jstring MULTIPLICITY_PLURAL();
		static jstring MULTIPLICITY_SINGLE();
		static jstring TYPE_CARDINAL();
		static jstring TYPE_DATE();
		static jstring TYPE_DECIMAL();
		static jstring TYPE_DIGITS();
		static jstring TYPE_ELECTRONIC();
		static jstring TYPE_FRACTION();
		static jstring TYPE_MEASURE();
		static jstring TYPE_MONEY();
		static jstring TYPE_ORDINAL();
		static jstring TYPE_TELEPHONE();
		static jstring TYPE_TEXT();
		static jstring TYPE_TIME();
		static jstring TYPE_VERBATIM();
		static jint WEEKDAY_FRIDAY();
		static jint WEEKDAY_MONDAY();
		static jint WEEKDAY_SATURDAY();
		static jint WEEKDAY_SUNDAY();
		static jint WEEKDAY_THURSDAY();
		static jint WEEKDAY_TUESDAY();
		static jint WEEKDAY_WEDNESDAY();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0, __jni_impl::android::os::PersistableBundle arg1);
		void __constructor(const QString &arg0, __jni_impl::android::os::PersistableBundle arg1);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getArgs();
		jint getSpanTypeId();
		jstring getType();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"

namespace __jni_impl::android::text::style
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
	
	// Constructors
	void TtsSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void TtsSpan::__constructor(jstring arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TtsSpan::__constructor(const QString &arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	void TtsSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan : public __jni_impl::android::text::style::TtsSpan
	{
	public:
		TtsSpan(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		TtsSpan(jstring arg0, __jni_impl::android::os::PersistableBundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::style

