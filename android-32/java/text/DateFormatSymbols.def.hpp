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
		DateFormatSymbols(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DateFormatSymbols();
		DateFormatSymbols(java::util::Locale arg0);
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::DateFormatSymbols getInstance();
		static java::text::DateFormatSymbols getInstance(java::util::Locale arg0);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JArray getAmPmStrings() const;
		JArray getEras() const;
		JString getLocalPatternChars() const;
		JArray getMonths() const;
		JArray getShortMonths() const;
		JArray getShortWeekdays() const;
		JArray getWeekdays() const;
		JArray getZoneStrings() const;
		jint hashCode() const;
		void setAmPmStrings(JArray arg0) const;
		void setEras(JArray arg0) const;
		void setLocalPatternChars(JString arg0) const;
		void setMonths(JArray arg0) const;
		void setShortMonths(JArray arg0) const;
		void setShortWeekdays(JArray arg0) const;
		void setWeekdays(JArray arg0) const;
		void setZoneStrings(JArray arg0) const;
	};
} // namespace java::text

