#pragma once

#ifndef JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR
#define JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::xml::datatype
{
	class Duration;
}
namespace __jni_impl::java::math
{
	class BigDecimal;
}
namespace __jni_impl::java::util
{
	class TimeZone;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::javax::xml::namespace
{
	class QName;
}
namespace __jni_impl::java::util
{
	class GregorianCalendar;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::javax::xml::datatype
{
	class XMLGregorianCalendar : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(__jni_impl::javax::xml::datatype::Duration arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jobject clone();
		void clear();
		jint compare(__jni_impl::javax::xml::datatype::XMLGregorianCalendar arg0);
		QAndroidJniObject normalize();
		void reset();
		jint getYear();
		jint getHour();
		jint getMinute();
		jint getSecond();
		void setTime(jint arg0, jint arg1, jint arg2);
		void setTime(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTime(jint arg0, jint arg1, jint arg2, __jni_impl::java::math::BigDecimal arg3);
		jint getDay();
		jint getMonth();
		QAndroidJniObject getTimeZone(jint arg0);
		void setMonth(jint arg0);
		void setYear(__jni_impl::java::math::BigInteger arg0);
		void setYear(jint arg0);
		jboolean isValid();
		void setDay(jint arg0);
		QAndroidJniObject getXMLSchemaType();
		void setSecond(jint arg0);
		void setFractionalSecond(__jni_impl::java::math::BigDecimal arg0);
		void setMillisecond(jint arg0);
		QAndroidJniObject getFractionalSecond();
		jint getTimezone();
		jstring toXMLFormat();
		void setTimezone(jint arg0);
		QAndroidJniObject getEon();
		QAndroidJniObject getEonAndYear();
		jint getMillisecond();
		QAndroidJniObject toGregorianCalendar(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1, __jni_impl::javax::xml::datatype::XMLGregorianCalendar arg2);
		QAndroidJniObject toGregorianCalendar();
		void setHour(jint arg0);
		void setMinute(jint arg0);
	};
} // namespace __jni_impl::javax::xml::datatype

#include "Duration.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/util/TimeZone.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../namespace/QName.hpp"
#include "../../../java/util/GregorianCalendar.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::javax::xml::datatype
{
	// Fields
	
	// Constructors
	void XMLGregorianCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.XMLGregorianCalendar",
			"()V"
		);
	}
	
	// Methods
	void XMLGregorianCalendar::add(__jni_impl::javax::xml::datatype::Duration arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Ljavax/xml/datatype/Duration;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean XMLGregorianCalendar::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring XMLGregorianCalendar::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint XMLGregorianCalendar::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject XMLGregorianCalendar::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void XMLGregorianCalendar::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint XMLGregorianCalendar::compare(__jni_impl::javax::xml::datatype::XMLGregorianCalendar arg0)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/XMLGregorianCalendar;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject XMLGregorianCalendar::normalize()
	{
		return __thiz.callObjectMethod(
			"normalize",
			"()Ljavax/xml/datatype/XMLGregorianCalendar;"
		);
	}
	void XMLGregorianCalendar::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint XMLGregorianCalendar::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getSecond()
	{
		return __thiz.callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2, __jni_impl::java::math::BigDecimal arg3)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(IIILjava/math/BigDecimal;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jint XMLGregorianCalendar::getDay()
	{
		return __thiz.callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	QAndroidJniObject XMLGregorianCalendar::getTimeZone(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"(I)Ljava/util/TimeZone;",
			arg0
		);
	}
	void XMLGregorianCalendar::setMonth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setYear(__jni_impl::java::math::BigInteger arg0)
	{
		__thiz.callMethod<void>(
			"setYear",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	void XMLGregorianCalendar::setYear(jint arg0)
	{
		__thiz.callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	jboolean XMLGregorianCalendar::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	void XMLGregorianCalendar::setDay(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDay",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject XMLGregorianCalendar::getXMLSchemaType()
	{
		return __thiz.callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	void XMLGregorianCalendar::setSecond(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSecond",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setFractionalSecond(__jni_impl::java::math::BigDecimal arg0)
	{
		__thiz.callMethod<void>(
			"setFractionalSecond",
			"(Ljava/math/BigDecimal;)V",
			arg0.__jniObject().object()
		);
	}
	void XMLGregorianCalendar::setMillisecond(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMillisecond",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject XMLGregorianCalendar::getFractionalSecond()
	{
		return __thiz.callObjectMethod(
			"getFractionalSecond",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint XMLGregorianCalendar::getTimezone()
	{
		return __thiz.callMethod<jint>(
			"getTimezone",
			"()I"
		);
	}
	jstring XMLGregorianCalendar::toXMLFormat()
	{
		return __thiz.callObjectMethod(
			"toXMLFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void XMLGregorianCalendar::setTimezone(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimezone",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject XMLGregorianCalendar::getEon()
	{
		return __thiz.callObjectMethod(
			"getEon",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject XMLGregorianCalendar::getEonAndYear()
	{
		return __thiz.callObjectMethod(
			"getEonAndYear",
			"()Ljava/math/BigInteger;"
		);
	}
	jint XMLGregorianCalendar::getMillisecond()
	{
		return __thiz.callMethod<jint>(
			"getMillisecond",
			"()I"
		);
	}
	QAndroidJniObject XMLGregorianCalendar::toGregorianCalendar(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1, __jni_impl::javax::xml::datatype::XMLGregorianCalendar arg2)
	{
		return __thiz.callObjectMethod(
			"toGregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject XMLGregorianCalendar::toGregorianCalendar()
	{
		return __thiz.callObjectMethod(
			"toGregorianCalendar",
			"()Ljava/util/GregorianCalendar;"
		);
	}
	void XMLGregorianCalendar::setHour(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHour",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setMinute(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinute",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::javax::xml::datatype

namespace javax::xml::datatype
{
	class XMLGregorianCalendar : public __jni_impl::javax::xml::datatype::XMLGregorianCalendar
	{
	public:
		XMLGregorianCalendar(QAndroidJniObject obj) { __thiz = obj; }
		XMLGregorianCalendar()
		{
			__constructor();
		}
	};
} // namespace javax::xml::datatype

#endif // JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR

