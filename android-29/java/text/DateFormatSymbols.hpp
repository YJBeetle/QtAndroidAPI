#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectOutputStream;
}
namespace java::util
{
	class Locale;
}

namespace java::text
{
	class DateFormatSymbols : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormatSymbols(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateFormatSymbols(QAndroidJniObject obj);
		
		// Constructors
		DateFormatSymbols();
		DateFormatSymbols(java::util::Locale arg0);
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jarray getAmPmStrings();
		jarray getEras();
		jstring getLocalPatternChars();
		jarray getMonths();
		jarray getShortMonths();
		jarray getShortWeekdays();
		jarray getWeekdays();
		jarray getZoneStrings();
		jint hashCode();
		void setAmPmStrings(jarray arg0);
		void setEras(jarray arg0);
		void setLocalPatternChars(jstring arg0);
		void setMonths(jarray arg0);
		void setShortMonths(jarray arg0);
		void setShortWeekdays(jarray arg0);
		void setWeekdays(jarray arg0);
		void setZoneStrings(jarray arg0);
	};
} // namespace java::text

