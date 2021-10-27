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
		
		DatatypeFactory(QAndroidJniObject obj);
		// Constructors
		DatatypeFactory() = default;
		
		// Methods
		static QAndroidJniObject newDefaultInstance();
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, java::lang::ClassLoader arg1);
		static QAndroidJniObject newInstance(const QString &arg0, java::lang::ClassLoader arg1);
		QAndroidJniObject newDuration(jstring arg0);
		QAndroidJniObject newDuration(const QString &arg0);
		QAndroidJniObject newDuration(jlong arg0);
		QAndroidJniObject newDuration(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		QAndroidJniObject newDuration(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigDecimal arg6);
		QAndroidJniObject newDurationDayTime(jstring arg0);
		QAndroidJniObject newDurationDayTime(const QString &arg0);
		QAndroidJniObject newDurationDayTime(jlong arg0);
		QAndroidJniObject newDurationDayTime(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		QAndroidJniObject newDurationDayTime(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4);
		QAndroidJniObject newDurationYearMonth(jstring arg0);
		QAndroidJniObject newDurationYearMonth(const QString &arg0);
		QAndroidJniObject newDurationYearMonth(jlong arg0);
		QAndroidJniObject newDurationYearMonth(jboolean arg0, jint arg1, jint arg2);
		QAndroidJniObject newDurationYearMonth(jboolean arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		QAndroidJniObject newXMLGregorianCalendar();
		QAndroidJniObject newXMLGregorianCalendar(jstring arg0);
		QAndroidJniObject newXMLGregorianCalendar(const QString &arg0);
		QAndroidJniObject newXMLGregorianCalendar(java::util::GregorianCalendar arg0);
		QAndroidJniObject newXMLGregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		QAndroidJniObject newXMLGregorianCalendar(java::math::BigInteger arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::math::BigDecimal arg6, jint arg7);
		QAndroidJniObject newXMLGregorianCalendarDate(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		QAndroidJniObject newXMLGregorianCalendarTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3, jint arg4);
	};
} // namespace javax::xml::datatype

