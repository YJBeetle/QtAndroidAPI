#include "../../../java/lang/ClassLoader.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/GregorianCalendar.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./Duration.hpp"
#include "./XMLGregorianCalendar.hpp"
#include "./DatatypeFactory.hpp"

namespace javax::xml::datatype
{
	// Fields
	jstring DatatypeFactory::DATATYPEFACTORY_IMPLEMENTATION_CLASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeFactory",
			"DATATYPEFACTORY_IMPLEMENTATION_CLASS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DatatypeFactory::DATATYPEFACTORY_PROPERTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeFactory",
			"DATATYPEFACTORY_PROPERTY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	DatatypeFactory::DatatypeFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::datatype::DatatypeFactory DatatypeFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newDefaultInstance",
			"()Ljavax/xml/datatype/DatatypeFactory;"
		);
	}
	javax::xml::datatype::DatatypeFactory DatatypeFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"()Ljavax/xml/datatype/DatatypeFactory;"
		);
	}
	javax::xml::datatype::DatatypeFactory DatatypeFactory::newInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/datatype/DatatypeFactory;",
			arg0,
			arg1.object()
		);
	}
	javax::xml::datatype::Duration DatatypeFactory::newDuration(jstring arg0)
	{
		return callObjectMethod(
			"newDuration",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	javax::xml::datatype::Duration DatatypeFactory::newDuration(jlong arg0)
	{
		return callObjectMethod(
			"newDuration",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	javax::xml::datatype::Duration DatatypeFactory::newDuration(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
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
	javax::xml::datatype::Duration DatatypeFactory::newDuration(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigDecimal arg6)
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
	javax::xml::datatype::Duration DatatypeFactory::newDurationDayTime(jstring arg0)
	{
		return callObjectMethod(
			"newDurationDayTime",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	javax::xml::datatype::Duration DatatypeFactory::newDurationDayTime(jlong arg0)
	{
		return callObjectMethod(
			"newDurationDayTime",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	javax::xml::datatype::Duration DatatypeFactory::newDurationDayTime(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	javax::xml::datatype::Duration DatatypeFactory::newDurationDayTime(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4)
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
	javax::xml::datatype::Duration DatatypeFactory::newDurationYearMonth(jstring arg0)
	{
		return callObjectMethod(
			"newDurationYearMonth",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	javax::xml::datatype::Duration DatatypeFactory::newDurationYearMonth(jlong arg0)
	{
		return callObjectMethod(
			"newDurationYearMonth",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	javax::xml::datatype::Duration DatatypeFactory::newDurationYearMonth(jboolean arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"newDurationYearMonth",
			"(ZII)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1,
			arg2
		);
	}
	javax::xml::datatype::Duration DatatypeFactory::newDurationYearMonth(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
	{
		return callObjectMethod(
			"newDurationYearMonth",
			"(ZLjava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar()
	{
		return callObjectMethod(
			"newXMLGregorianCalendar",
			"()Ljavax/xml/datatype/XMLGregorianCalendar;"
		);
	}
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar(jstring arg0)
	{
		return callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/lang/String;)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0
		);
	}
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar(java::util::GregorianCalendar arg0)
	{
		return callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/util/GregorianCalendar;)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0.object()
		);
	}
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
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
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendar(java::math::BigInteger arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::math::BigDecimal arg6, jint arg7)
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
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendarDate(jint arg0, jint arg1, jint arg2, jint arg3)
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
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3)
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
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	javax::xml::datatype::XMLGregorianCalendar DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3, jint arg4)
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

