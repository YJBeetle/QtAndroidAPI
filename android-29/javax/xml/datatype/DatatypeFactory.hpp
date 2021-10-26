#pragma once

#ifndef JAVAX_XML_DATATYPE_DATATYPEFACTORY
#define JAVAX_XML_DATATYPE_DATATYPEFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::regex
{
	class Pattern;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::javax::xml::datatype
{
	class Duration;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::math
{
	class BigDecimal;
}
namespace __jni_impl::javax::xml::datatype
{
	class XMLGregorianCalendar;
}
namespace __jni_impl::java::util
{
	class GregorianCalendar;
}

namespace __jni_impl::javax::xml::datatype
{
	class DatatypeFactory : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DATATYPEFACTORY_PROPERTY();
		static jstring DATATYPEFACTORY_IMPLEMENTATION_CLASS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newInstance(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newDefaultInstance();
		QAndroidJniObject newDuration(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		QAndroidJniObject newDuration(jboolean arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigDecimal arg6);
		QAndroidJniObject newDuration(jlong arg0);
		QAndroidJniObject newDuration(jstring arg0);
		QAndroidJniObject newDuration(const QString &arg0);
		QAndroidJniObject newDurationDayTime(jboolean arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4);
		QAndroidJniObject newDurationDayTime(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		QAndroidJniObject newDurationDayTime(jstring arg0);
		QAndroidJniObject newDurationDayTime(const QString &arg0);
		QAndroidJniObject newDurationDayTime(jlong arg0);
		QAndroidJniObject newDurationYearMonth(jlong arg0);
		QAndroidJniObject newDurationYearMonth(jboolean arg0, jint arg1, jint arg2);
		QAndroidJniObject newDurationYearMonth(jstring arg0);
		QAndroidJniObject newDurationYearMonth(const QString &arg0);
		QAndroidJniObject newDurationYearMonth(jboolean arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2);
		QAndroidJniObject newXMLGregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		QAndroidJniObject newXMLGregorianCalendar(__jni_impl::java::math::BigInteger arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::java::math::BigDecimal arg6, jint arg7);
		QAndroidJniObject newXMLGregorianCalendar();
		QAndroidJniObject newXMLGregorianCalendar(jstring arg0);
		QAndroidJniObject newXMLGregorianCalendar(const QString &arg0);
		QAndroidJniObject newXMLGregorianCalendar(__jni_impl::java::util::GregorianCalendar arg0);
		QAndroidJniObject newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		QAndroidJniObject newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, __jni_impl::java::math::BigDecimal arg3, jint arg4);
		QAndroidJniObject newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject newXMLGregorianCalendarDate(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::javax::xml::datatype

#include "../../../java/util/regex/Pattern.hpp"
#include "../../../java/lang/ClassLoader.hpp"
#include "Duration.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "XMLGregorianCalendar.hpp"
#include "../../../java/util/GregorianCalendar.hpp"

namespace __jni_impl::javax::xml::datatype
{
	// Fields
	jstring DatatypeFactory::DATATYPEFACTORY_PROPERTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeFactory",
			"DATATYPEFACTORY_PROPERTY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DatatypeFactory::DATATYPEFACTORY_IMPLEMENTATION_CLASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeFactory",
			"DATATYPEFACTORY_IMPLEMENTATION_CLASS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void DatatypeFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DatatypeFactory::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"()Ljavax/xml/datatype/DatatypeFactory;"
		);
	}
	QAndroidJniObject DatatypeFactory::newInstance(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/datatype/DatatypeFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DatatypeFactory::newInstance(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/datatype/DatatypeFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DatatypeFactory::newDefaultInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.datatype.DatatypeFactory",
			"newDefaultInstance",
			"()Ljavax/xml/datatype/DatatypeFactory;"
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
	QAndroidJniObject DatatypeFactory::newDuration(jboolean arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigDecimal arg6)
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
	QAndroidJniObject DatatypeFactory::newDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"newDuration",
			"(J)Ljavax/xml/datatype/Duration;",
			arg0
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
	QAndroidJniObject DatatypeFactory::newDurationDayTime(jboolean arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4)
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
	QAndroidJniObject DatatypeFactory::newDurationYearMonth(jboolean arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
	{
		return __thiz.callObjectMethod(
			"newDurationYearMonth",
			"(ZLjava/math/BigInteger;Ljava/math/BigInteger;)Ljavax/xml/datatype/Duration;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
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
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendar(__jni_impl::java::math::BigInteger arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::java::math::BigDecimal arg6, jint arg7)
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
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendar(__jni_impl::java::util::GregorianCalendar arg0)
	{
		return __thiz.callObjectMethod(
			"newXMLGregorianCalendar",
			"(Ljava/util/GregorianCalendar;)Ljavax/xml/datatype/XMLGregorianCalendar;",
			arg0.__jniObject().object()
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
	QAndroidJniObject DatatypeFactory::newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, __jni_impl::java::math::BigDecimal arg3, jint arg4)
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
} // namespace __jni_impl::javax::xml::datatype

namespace javax::xml::datatype
{
	class DatatypeFactory : public __jni_impl::javax::xml::datatype::DatatypeFactory
	{
	public:
		DatatypeFactory(QAndroidJniObject obj) { __thiz = obj; }
		DatatypeFactory()
		{
			__constructor();
		}
	};
} // namespace javax::xml::datatype

#endif // JAVAX_XML_DATATYPE_DATATYPEFACTORY

