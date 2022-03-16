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
		
		// QJniObject forward
		template<typename ...Ts> explicit DateFormatSymbols(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateFormatSymbols(QJniObject obj) : JObject(obj) {}
		
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
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JArray getAmPmStrings() const;
		JArray getEraNames() const;
		JArray getEras() const;
		JString getLocalPatternChars() const;
		JArray getMonths() const;
		JArray getMonths(jint arg0, jint arg1) const;
		JArray getQuarters(jint arg0, jint arg1) const;
		JArray getShortMonths() const;
		JArray getShortWeekdays() const;
		JArray getWeekdays() const;
		JArray getWeekdays(jint arg0, jint arg1) const;
		JArray getYearNames(jint arg0, jint arg1) const;
		JArray getZodiacNames(jint arg0, jint arg1) const;
		JArray getZoneStrings() const;
		jint hashCode() const;
		void setAmPmStrings(JArray arg0) const;
		void setEraNames(JArray arg0) const;
		void setEras(JArray arg0) const;
		void setLocalPatternChars(JString arg0) const;
		void setMonths(JArray arg0) const;
		void setMonths(JArray arg0, jint arg1, jint arg2) const;
		void setQuarters(JArray arg0, jint arg1, jint arg2) const;
		void setShortMonths(JArray arg0) const;
		void setShortWeekdays(JArray arg0) const;
		void setWeekdays(JArray arg0) const;
		void setWeekdays(JArray arg0, jint arg1, jint arg2) const;
		void setYearNames(JArray arg0, jint arg1, jint arg2) const;
		void setZodiacNames(JArray arg0, jint arg1, jint arg2) const;
		void setZoneStrings(JArray arg0) const;
	};
} // namespace android::icu::text

