#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
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
namespace java::util::regex
{
	class Pattern;
}
namespace javax::xml::datatype
{
	class Duration;
}
namespace javax::xml::datatype
{
	class XMLGregorianCalendar;
}

namespace javax::xml::datatype
{
	class DatatypeFactory : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DATATYPEFACTORY_IMPLEMENTATION_CLASS();
		static jstring DATATYPEFACTORY_PROPERTY();
		
		// QJniObject forward
		template<typename ...Ts> explicit DatatypeFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DatatypeFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::datatype::DatatypeFactory newDefaultInstance();
		static javax::xml::datatype::DatatypeFactory newInstance();
		static javax::xml::datatype::DatatypeFactory newInstance(jstring arg0, java::lang::ClassLoader arg1);
		javax::xml::datatype::Duration newDuration(jstring arg0);
		javax::xml::datatype::Duration newDuration(jlong arg0);
		javax::xml::datatype::Duration newDuration(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		javax::xml::datatype::Duration newDuration(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigDecimal arg6);
		javax::xml::datatype::Duration newDurationDayTime(jstring arg0);
		javax::xml::datatype::Duration newDurationDayTime(jlong arg0);
		javax::xml::datatype::Duration newDurationDayTime(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		javax::xml::datatype::Duration newDurationDayTime(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4);
		javax::xml::datatype::Duration newDurationYearMonth(jstring arg0);
		javax::xml::datatype::Duration newDurationYearMonth(jlong arg0);
		javax::xml::datatype::Duration newDurationYearMonth(jboolean arg0, jint arg1, jint arg2);
		javax::xml::datatype::Duration newDurationYearMonth(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar();
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar(jstring arg0);
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar(java::util::GregorianCalendar arg0);
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar(java::math::BigInteger arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::math::BigDecimal arg6, jint arg7);
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendarDate(jint arg0, jint arg1, jint arg2, jint arg3);
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3);
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3, jint arg4);
	};
} // namespace javax::xml::datatype

