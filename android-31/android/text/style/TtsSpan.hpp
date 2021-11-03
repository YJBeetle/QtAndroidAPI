#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;

namespace android::text::style
{
	class TtsSpan : public JObject
	{
	public:
		// Fields
		static JString ANIMACY_ANIMATE();
		static JString ANIMACY_INANIMATE();
		static JString ARG_ANIMACY();
		static JString ARG_CASE();
		static JString ARG_COUNTRY_CODE();
		static JString ARG_CURRENCY();
		static JString ARG_DAY();
		static JString ARG_DENOMINATOR();
		static JString ARG_DIGITS();
		static JString ARG_DOMAIN();
		static JString ARG_EXTENSION();
		static JString ARG_FRACTIONAL_PART();
		static JString ARG_FRAGMENT_ID();
		static JString ARG_GENDER();
		static JString ARG_HOURS();
		static JString ARG_INTEGER_PART();
		static JString ARG_MINUTES();
		static JString ARG_MONTH();
		static JString ARG_MULTIPLICITY();
		static JString ARG_NUMBER();
		static JString ARG_NUMBER_PARTS();
		static JString ARG_NUMERATOR();
		static JString ARG_PASSWORD();
		static JString ARG_PATH();
		static JString ARG_PORT();
		static JString ARG_PROTOCOL();
		static JString ARG_QUANTITY();
		static JString ARG_QUERY_STRING();
		static JString ARG_TEXT();
		static JString ARG_UNIT();
		static JString ARG_USERNAME();
		static JString ARG_VERBATIM();
		static JString ARG_WEEKDAY();
		static JString ARG_YEAR();
		static JString CASE_ABLATIVE();
		static JString CASE_ACCUSATIVE();
		static JString CASE_DATIVE();
		static JString CASE_GENITIVE();
		static JString CASE_INSTRUMENTAL();
		static JString CASE_LOCATIVE();
		static JString CASE_NOMINATIVE();
		static JString CASE_VOCATIVE();
		static JString GENDER_FEMALE();
		static JString GENDER_MALE();
		static JString GENDER_NEUTRAL();
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
		static JString MULTIPLICITY_DUAL();
		static JString MULTIPLICITY_PLURAL();
		static JString MULTIPLICITY_SINGLE();
		static JString TYPE_CARDINAL();
		static JString TYPE_DATE();
		static JString TYPE_DECIMAL();
		static JString TYPE_DIGITS();
		static JString TYPE_ELECTRONIC();
		static JString TYPE_FRACTION();
		static JString TYPE_MEASURE();
		static JString TYPE_MONEY();
		static JString TYPE_ORDINAL();
		static JString TYPE_TELEPHONE();
		static JString TYPE_TEXT();
		static JString TYPE_TIME();
		static JString TYPE_VERBATIM();
		static jint WEEKDAY_FRIDAY();
		static jint WEEKDAY_MONDAY();
		static jint WEEKDAY_SATURDAY();
		static jint WEEKDAY_SUNDAY();
		static jint WEEKDAY_THURSDAY();
		static jint WEEKDAY_TUESDAY();
		static jint WEEKDAY_WEDNESDAY();
		
		// QJniObject forward
		template<typename ...Ts> explicit TtsSpan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan(QJniObject obj);
		
		// Constructors
		TtsSpan(android::os::Parcel arg0);
		TtsSpan(JString arg0, android::os::PersistableBundle arg1);
		
		// Methods
		jint describeContents();
		android::os::PersistableBundle getArgs();
		jint getSpanTypeId();
		JString getType();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

