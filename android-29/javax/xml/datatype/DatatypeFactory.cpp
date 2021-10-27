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
	
	DatatypeFactory::DatatypeFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DatatypeFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newDefaultInstance",
			"()Ljavax/xml/datatype/DatatypeFactory;"
		);
	}
	QAndroidJniObject DatatypeFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"()Ljavax/xml/datatype/DatatypeFactory;"
		);
	}
	QAndroidJniObject DatatypeFactory::newInstance(jstring arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/datatype/DatatypeFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DatatypeFactory::newInstance(const QString &arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/datatype/DatatypeFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DatatypeFactory::newDuration(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newDuration",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	QAndroidJniObject DatatypeFactory::newDuration(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"newDuration",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DatatypeFactory::newDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"newDuration",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	QAndroidJniObject DatatypeFactory::newDuration(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		return __thiz.callObjectMethod(
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
	QAndroidJniObject DatatypeFactory::newDuration(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigDecimal arg6)
	{
		return __thiz.callObjectMethod(
			"newDuration",
			"(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationDayTime(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newDurationDayTime",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationDayTime(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"newDurationDayTime",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationDayTime(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"newDurationDayTime",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationDayTime(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"newDurationDayTime",
			"(ZIIII)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationDayTime(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4)
	{
		return __thiz.callObjectMethod(
			"newDurationDayTime",
			"(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationYearMonth(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newDurationYearMonth",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationYearMonth(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"newDurationYearMonth",
			"(Ljava/lang/String;)Ljavax/xml/datatype/Duration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationYearMonth(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"newDurationYearMonth",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationYearMonth(jboolean arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"newDurationYearMonth",
			"(ZII)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DatatypeFactory::newDurationYearMonth(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2)
	{
		return __thiz.callObjectMethod(
			"newDurationYearMonth",
			"(ZLjava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendar()
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendar",
			"()Ljavax/xml/datatype/XMLGregorianCalendar;"
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendar(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/lang/String;)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendar(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/lang/String;)Ljavax/xml/datatype/XMLGregorianCalendar;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendar(java::util::GregorianCalendar arg0)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/util/GregorianCalendar;)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		return __thiz.callObjectMethod(
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
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendar(java::math::BigInteger arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::math::BigDecimal arg6, jint arg7)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/math/BigInteger;IIIIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendarDate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendarDate",
			"(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendarTime",
			"(IIII)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendarTime",
			"(IIIII)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendarTime",
			"(IIILjava/math/BigDecimal;I)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
} // namespace javax::xml::datatype

