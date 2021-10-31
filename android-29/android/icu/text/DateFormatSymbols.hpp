#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class Calendar;
}
namespace android::icu::util
{
	class ULocale;
}
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
	class DateFormatSymbols : public __JniBaseClass
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
		template<typename ...Ts> explicit DateFormatSymbols(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateFormatSymbols(QAndroidJniObject obj);
		
		// Constructors
		DateFormatSymbols();
		DateFormatSymbols(android::icu::util::ULocale arg0);
		DateFormatSymbols(java::util::Locale arg0);
		DateFormatSymbols(android::icu::util::Calendar arg0, android::icu::util::ULocale arg1);
		DateFormatSymbols(android::icu::util::Calendar arg0, java::util::Locale arg1);
		DateFormatSymbols(jclass arg0, android::icu::util::ULocale arg1);
		DateFormatSymbols(jclass arg0, java::util::Locale arg1);
		DateFormatSymbols(java::util::ResourceBundle arg0, android::icu::util::ULocale arg1);
		DateFormatSymbols(java::util::ResourceBundle arg0, java::util::Locale arg1);
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jarray getAmPmStrings();
		jarray getEraNames();
		jarray getEras();
		jstring getLocalPatternChars();
		jarray getMonths();
		jarray getMonths(jint arg0, jint arg1);
		jarray getQuarters(jint arg0, jint arg1);
		jarray getShortMonths();
		jarray getShortWeekdays();
		jarray getWeekdays();
		jarray getWeekdays(jint arg0, jint arg1);
		jarray getYearNames(jint arg0, jint arg1);
		jarray getZodiacNames(jint arg0, jint arg1);
		jarray getZoneStrings();
		jint hashCode();
		void setAmPmStrings(jarray arg0);
		void setEraNames(jarray arg0);
		void setEras(jarray arg0);
		void setLocalPatternChars(jstring arg0);
		void setMonths(jarray arg0);
		void setMonths(jarray arg0, jint arg1, jint arg2);
		void setQuarters(jarray arg0, jint arg1, jint arg2);
		void setShortMonths(jarray arg0);
		void setShortWeekdays(jarray arg0);
		void setWeekdays(jarray arg0);
		void setWeekdays(jarray arg0, jint arg1, jint arg2);
		void setYearNames(jarray arg0, jint arg1, jint arg2);
		void setZodiacNames(jarray arg0, jint arg1, jint arg2);
		void setZoneStrings(jarray arg0);
	};
} // namespace android::icu::text

