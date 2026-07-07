#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
namespace java::math
{
	class BigDecimal;
}
namespace java::math
{
	class BigInteger;
}
namespace java::util
{
	class GregorianCalendar;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class TimeZone;
}
namespace javax::xml::datatype
{
	class Duration;
}
namespace javax::xml::namespace_
{
	class QName;
}

namespace javax::xml::datatype
{
	class XMLGregorianCalendar : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit XMLGregorianCalendar(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XMLGregorianCalendar(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		XMLGregorianCalendar();
		
		// Methods
		void add(javax::xml::datatype::Duration arg0) const;
		void clear() const;
		JObject clone() const;
		jint compare(javax::xml::datatype::XMLGregorianCalendar arg0) const;
		jboolean equals(JObject arg0) const;
		jint getDay() const;
		java::math::BigInteger getEon() const;
		java::math::BigInteger getEonAndYear() const;
		java::math::BigDecimal getFractionalSecond() const;
		jint getHour() const;
		jint getMillisecond() const;
		jint getMinute() const;
		jint getMonth() const;
		jint getSecond() const;
		java::util::TimeZone getTimeZone(jint arg0) const;
		jint getTimezone() const;
		javax::xml::namespace_::QName getXMLSchemaType() const;
		jint getYear() const;
		jint hashCode() const;
		jboolean isValid() const;
		javax::xml::datatype::XMLGregorianCalendar normalize() const;
		void reset() const;
		void setDay(jint arg0) const;
		void setFractionalSecond(java::math::BigDecimal arg0) const;
		void setHour(jint arg0) const;
		void setMillisecond(jint arg0) const;
		void setMinute(jint arg0) const;
		void setMonth(jint arg0) const;
		void setSecond(jint arg0) const;
		void setTime(jint arg0, jint arg1, jint arg2) const;
		void setTime(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3) const;
		void setTimezone(jint arg0) const;
		void setYear(jint arg0) const;
		void setYear(java::math::BigInteger arg0) const;
		java::util::GregorianCalendar toGregorianCalendar() const;
		java::util::GregorianCalendar toGregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1, javax::xml::datatype::XMLGregorianCalendar arg2) const;
		JString toString() const;
		JString toXMLFormat() const;
	};
} // namespace javax::xml::datatype

