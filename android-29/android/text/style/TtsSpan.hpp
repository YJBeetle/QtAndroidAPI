#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}

namespace android::text::style
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
		
		TtsSpan(QAndroidJniObject obj);
		// Constructors
		TtsSpan(android::os::Parcel arg0);
		TtsSpan(jstring arg0, android::os::PersistableBundle arg1);
		TtsSpan() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getArgs();
		jint getSpanTypeId();
		jstring getType();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

