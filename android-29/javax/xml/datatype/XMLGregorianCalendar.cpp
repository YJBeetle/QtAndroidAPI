#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/GregorianCalendar.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/util/TimeZone.hpp"
#include "./Duration.hpp"
#include "../namespace/QName.hpp"
#include "./XMLGregorianCalendar.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	XMLGregorianCalendar::XMLGregorianCalendar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	XMLGregorianCalendar::XMLGregorianCalendar()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.XMLGregorianCalendar",
			"()V"
		);
	}
	
	// Methods
	void XMLGregorianCalendar::add(javax::xml::datatype::Duration arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Ljavax/xml/datatype/Duration;)V",
			arg0.__jniObject().object()
		);
	}
	void XMLGregorianCalendar::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject XMLGregorianCalendar::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint XMLGregorianCalendar::compare(javax::xml::datatype::XMLGregorianCalendar arg0)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/XMLGregorianCalendar;)I",
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
	jint XMLGregorianCalendar::getDay()
	{
		return __thiz.callMethod<jint>(
			"getDay",
			"()I"
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
	QAndroidJniObject XMLGregorianCalendar::getFractionalSecond()
	{
		return __thiz.callObjectMethod(
			"getFractionalSecond",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint XMLGregorianCalendar::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMillisecond()
	{
		return __thiz.callMethod<jint>(
			"getMillisecond",
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
	jint XMLGregorianCalendar::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
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
	QAndroidJniObject XMLGregorianCalendar::getTimeZone(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"(I)Ljava/util/TimeZone;",
			arg0
		);
	}
	jint XMLGregorianCalendar::getTimezone()
	{
		return __thiz.callMethod<jint>(
			"getTimezone",
			"()I"
		);
	}
	QAndroidJniObject XMLGregorianCalendar::getXMLSchemaType()
	{
		return __thiz.callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	jint XMLGregorianCalendar::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint XMLGregorianCalendar::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean XMLGregorianCalendar::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
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
	void XMLGregorianCalendar::setDay(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDay",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setFractionalSecond(java::math::BigDecimal arg0)
	{
		__thiz.callMethod<void>(
			"setFractionalSecond",
			"(Ljava/math/BigDecimal;)V",
			arg0.__jniObject().object()
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
	void XMLGregorianCalendar::setMillisecond(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMillisecond",
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
	void XMLGregorianCalendar::setMonth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
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
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3)
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
	void XMLGregorianCalendar::setTimezone(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimezone",
			"(I)V",
			arg0
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
	void XMLGregorianCalendar::setYear(java::math::BigInteger arg0)
	{
		__thiz.callMethod<void>(
			"setYear",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject XMLGregorianCalendar::toGregorianCalendar()
	{
		return __thiz.callObjectMethod(
			"toGregorianCalendar",
			"()Ljava/util/GregorianCalendar;"
		);
	}
	QAndroidJniObject XMLGregorianCalendar::toGregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1, javax::xml::datatype::XMLGregorianCalendar arg2)
	{
		return __thiz.callObjectMethod(
			"toGregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring XMLGregorianCalendar::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLGregorianCalendar::toXMLFormat()
	{
		return __thiz.callObjectMethod(
			"toXMLFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::datatype

