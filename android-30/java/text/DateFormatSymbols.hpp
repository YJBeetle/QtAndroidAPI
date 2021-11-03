#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace java::text
{
	class DateFormatSymbols : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormatSymbols(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateFormatSymbols(QAndroidJniObject obj);
		
		// Constructors
		DateFormatSymbols();
		DateFormatSymbols(java::util::Locale arg0);
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::DateFormatSymbols getInstance();
		static java::text::DateFormatSymbols getInstance(java::util::Locale arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		JArray getAmPmStrings();
		JArray getEras();
		JString getLocalPatternChars();
		JArray getMonths();
		JArray getShortMonths();
		JArray getShortWeekdays();
		JArray getWeekdays();
		JArray getZoneStrings();
		jint hashCode();
		void setAmPmStrings(JArray arg0);
		void setEras(JArray arg0);
		void setLocalPatternChars(JString arg0);
		void setMonths(JArray arg0);
		void setShortMonths(JArray arg0);
		void setShortWeekdays(JArray arg0);
		void setWeekdays(JArray arg0);
		void setZoneStrings(JArray arg0);
	};
} // namespace java::text

