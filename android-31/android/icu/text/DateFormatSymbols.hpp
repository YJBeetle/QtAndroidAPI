#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JArray;
namespace android::icu::util
{
	class Calendar;
}
namespace android::icu::util
{
	class ULocale;
}
class JClass;
class JObject;
class JString;
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class ResourceBundle;
}

namespace android::icu::text
{
	class DateFormatSymbols : public JObject
	{
	public:
		// Fields
		static jint ABBREVIATED();
		static jint FORMAT();
		static jint NARROW();
		static jint SHORT();
		static jint STANDALONE();
		static jint WIDE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormatSymbols(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateFormatSymbols(QAndroidJniObject obj);
		
		// Constructors
		DateFormatSymbols();
		DateFormatSymbols(android::icu::util::ULocale arg0);
		DateFormatSymbols(java::util::Locale arg0);
		DateFormatSymbols(android::icu::util::Calendar arg0, android::icu::util::ULocale arg1);
		DateFormatSymbols(android::icu::util::Calendar arg0, java::util::Locale arg1);
		DateFormatSymbols(JClass arg0, android::icu::util::ULocale arg1);
		DateFormatSymbols(JClass arg0, java::util::Locale arg1);
		DateFormatSymbols(java::util::ResourceBundle arg0, android::icu::util::ULocale arg1);
		DateFormatSymbols(java::util::ResourceBundle arg0, java::util::Locale arg1);
		
		// Methods
		static JArray getAvailableLocales();
		static android::icu::text::DateFormatSymbols getInstance();
		static android::icu::text::DateFormatSymbols getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::DateFormatSymbols getInstance(java::util::Locale arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		JArray getAmPmStrings();
		JArray getEraNames();
		JArray getEras();
		JString getLocalPatternChars();
		JArray getMonths();
		JArray getMonths(jint arg0, jint arg1);
		JArray getNarrowEras();
		JArray getQuarters(jint arg0, jint arg1);
		JArray getShortMonths();
		JArray getShortWeekdays();
		JArray getWeekdays();
		JArray getWeekdays(jint arg0, jint arg1);
		JArray getYearNames(jint arg0, jint arg1);
		JArray getZodiacNames(jint arg0, jint arg1);
		JArray getZoneStrings();
		jint hashCode();
		void setAmPmStrings(JArray arg0);
		void setEraNames(JArray arg0);
		void setEras(JArray arg0);
		void setLocalPatternChars(JString arg0);
		void setMonths(JArray arg0);
		void setMonths(JArray arg0, jint arg1, jint arg2);
		void setNarrowEras(JArray arg0);
		void setQuarters(JArray arg0, jint arg1, jint arg2);
		void setShortMonths(JArray arg0);
		void setShortWeekdays(JArray arg0);
		void setWeekdays(JArray arg0);
		void setWeekdays(JArray arg0, jint arg1, jint arg2);
		void setYearNames(JArray arg0, jint arg1, jint arg2);
		void setZodiacNames(JArray arg0, jint arg1, jint arg2);
		void setZoneStrings(JArray arg0);
	};
} // namespace android::icu::text

