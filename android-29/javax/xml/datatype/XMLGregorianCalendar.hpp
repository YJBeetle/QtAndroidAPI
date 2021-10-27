#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace javax::xml::_namespace
{
	class QName;
}

namespace javax::xml::datatype
{
	class XMLGregorianCalendar : public __JniBaseClass
	{
	public:
		// Fields
		
		XMLGregorianCalendar(QAndroidJniObject obj);
		// Constructors
		XMLGregorianCalendar();
		
		// Methods
		void add(javax::xml::datatype::Duration arg0);
		void clear();
		jobject clone();
		jint compare(javax::xml::datatype::XMLGregorianCalendar arg0);
		jboolean equals(jobject arg0);
		jint getDay();
		QAndroidJniObject getEon();
		QAndroidJniObject getEonAndYear();
		QAndroidJniObject getFractionalSecond();
		jint getHour();
		jint getMillisecond();
		jint getMinute();
		jint getMonth();
		jint getSecond();
		QAndroidJniObject getTimeZone(jint arg0);
		jint getTimezone();
		QAndroidJniObject getXMLSchemaType();
		jint getYear();
		jint hashCode();
		jboolean isValid();
		QAndroidJniObject normalize();
		void reset();
		void setDay(jint arg0);
		void setFractionalSecond(java::math::BigDecimal arg0);
		void setHour(jint arg0);
		void setMillisecond(jint arg0);
		void setMinute(jint arg0);
		void setMonth(jint arg0);
		void setSecond(jint arg0);
		void setTime(jint arg0, jint arg1, jint arg2);
		void setTime(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3);
		void setTimezone(jint arg0);
		void setYear(jint arg0);
		void setYear(java::math::BigInteger arg0);
		QAndroidJniObject toGregorianCalendar();
		QAndroidJniObject toGregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1, javax::xml::datatype::XMLGregorianCalendar arg2);
		jstring toString();
		jstring toXMLFormat();
	};
} // namespace javax::xml::datatype

