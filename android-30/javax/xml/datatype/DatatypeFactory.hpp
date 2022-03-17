#pragma once

#include "../../../java/lang/ClassLoader.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.def.hpp"
#include "../../../java/math/BigInteger.def.hpp"
#include "../../../java/util/GregorianCalendar.def.hpp"
#include "../../../java/util/regex/Pattern.def.hpp"
#include "./Duration.def.hpp"
#include "./XMLGregorianCalendar.def.hpp"
#include "./DatatypeFactory.def.hpp"

namespace javax::xml::datatype
{
	// Fields
	inline JString DatatypeFactory::DATATYPEFACTORY_IMPLEMENTATION_CLASS()
	{
		return getStaticObjectField(
			"javax.xml.datatype.DatatypeFactory",
			"DATATYPEFACTORY_IMPLEMENTATION_CLASS",
			"Ljava/lang/String;"
		);
	}
	inline JString DatatypeFactory::DATATYPEFACTORY_PROPERTY()
	{
		return getStaticObjectField(
			"javax.xml.datatype.DatatypeFactory",
			"DATATYPEFACTORY_PROPERTY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline javax::xml::datatype::DatatypeFactory DatatypeFactory::newDefaultInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newDefaultInstance",
			"()Ljavax/xml/datatype/DatatypeFactory;"
		);
	}
	inline javax::xml::datatype::DatatypeFactory DatatypeFactory::newInstance()
	{
		return callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"()Ljavax/xml/datatype/DatatypeFactory;"
		);
	}
	inline javax::xml::datatype::DatatypeFactory DatatypeFactory::newInstance(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/datatype/DatatypeFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDuration(JString arg0) const
	{
		return callObjectMethod(
			"newDuration",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDuration(jlong arg0) const
	{
		return callObjectMethod(
			"newDuration",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDuration(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6) const
	{
		return callObjectMethod(
			"newDuration",
			"(ZIIIIII)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDuration(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigDecimal arg6) const
	{
		return callObjectMethod(
			"newDuration",
			"(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDurationDayTime(JString arg0) const
	{
		return callObjectMethod(
			"newDurationDayTime",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDurationDayTime(jlong arg0) const
	{
		return callObjectMethod(
			"newDurationDayTime",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDurationDayTime(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		return callObjectMethod(
			"newDurationDayTime",
			"(ZIIII)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDurationDayTime(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4) const
	{
		return callObjectMethod(
			"newDurationDayTime",
			"(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDurationYearMonth(JString arg0) const
	{
		return callObjectMethod(
			"newDurationYearMonth",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDurationYearMonth(jlong arg0) const
	{
		return callObjectMethod(
			"newDurationYearMonth",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDurationYearMonth(jboolean arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"newDurationYearMonth",
			"(ZII)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1,
			arg2
		);
	}
	inline javax::xml::datatype::Duration DatatypeFactory::newDurationYearMonth(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2) const
	{
		return callObjectMethod(
			"newDurationYearMonth",
			"(ZLjava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar() const
	{
		return callObjectMethod(
			"newXMLGregorianCalendar",
			"()Ljavax/xml/datatype/XMLGregorianCalendar;"
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar(JString arg0) const
	{
		return callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/lang/String;)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0.object<jstring>()
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar(java::util::GregorianCalendar arg0) const
	{
		return callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/util/GregorianCalendar;)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0.object()
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7) const
	{
		return callObjectMethod(
			"newXMLGregorianCalendar",
			"(IIIIIIII)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar(java::math::BigInteger arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::math::BigDecimal arg6, jint arg7) const
	{
		return callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/math/BigInteger;IIIIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object(),
			arg7
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendarDate(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"newXMLGregorianCalendarDate",
			"(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"newXMLGregorianCalendarTime",
			"(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		return callObjectMethod(
			"newXMLGregorianCalendarTime",
			"(IIIII)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3, jint arg4) const
	{
		return callObjectMethod(
			"newXMLGregorianCalendarTime",
			"(IIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4
		);
	}
} // namespace javax::xml::datatype

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::datatype;
#endif
