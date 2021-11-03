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
	
	// QJniObject forward
	XMLGregorianCalendar::XMLGregorianCalendar(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	XMLGregorianCalendar::XMLGregorianCalendar()
		: JObject(
			"javax.xml.datatype.XMLGregorianCalendar",
			"()V"
		) {}
	
	// Methods
	void XMLGregorianCalendar::add(javax::xml::datatype::Duration arg0)
	{
		callMethod<void>(
			"add",
			"(Ljavax/xml/datatype/Duration;)V",
			arg0.object()
		);
	}
	void XMLGregorianCalendar::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject XMLGregorianCalendar::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint XMLGregorianCalendar::compare(javax::xml::datatype::XMLGregorianCalendar arg0)
	{
		return callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/XMLGregorianCalendar;)I",
			arg0.object()
		);
	}
	jboolean XMLGregorianCalendar::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint XMLGregorianCalendar::getDay()
	{
		return callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	java::math::BigInteger XMLGregorianCalendar::getEon()
	{
		return callObjectMethod(
			"getEon",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger XMLGregorianCalendar::getEonAndYear()
	{
		return callObjectMethod(
			"getEonAndYear",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigDecimal XMLGregorianCalendar::getFractionalSecond()
	{
		return callObjectMethod(
			"getFractionalSecond",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint XMLGregorianCalendar::getHour()
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMillisecond()
	{
		return callMethod<jint>(
			"getMillisecond",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMinute()
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMonth()
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getSecond()
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	java::util::TimeZone XMLGregorianCalendar::getTimeZone(jint arg0)
	{
		return callObjectMethod(
			"getTimeZone",
			"(I)Ljava/util/TimeZone;",
			arg0
		);
	}
	jint XMLGregorianCalendar::getTimezone()
	{
		return callMethod<jint>(
			"getTimezone",
			"()I"
		);
	}
	javax::xml::_namespace::QName XMLGregorianCalendar::getXMLSchemaType()
	{
		return callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	jint XMLGregorianCalendar::getYear()
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint XMLGregorianCalendar::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean XMLGregorianCalendar::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	javax::xml::datatype::XMLGregorianCalendar XMLGregorianCalendar::normalize()
	{
		return callObjectMethod(
			"normalize",
			"()Ljavax/xml/datatype/XMLGregorianCalendar;"
		);
	}
	void XMLGregorianCalendar::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void XMLGregorianCalendar::setDay(jint arg0)
	{
		callMethod<void>(
			"setDay",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setFractionalSecond(java::math::BigDecimal arg0)
	{
		callMethod<void>(
			"setFractionalSecond",
			"(Ljava/math/BigDecimal;)V",
			arg0.object()
		);
	}
	void XMLGregorianCalendar::setHour(jint arg0)
	{
		callMethod<void>(
			"setHour",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setMillisecond(jint arg0)
	{
		callMethod<void>(
			"setMillisecond",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setMinute(jint arg0)
	{
		callMethod<void>(
			"setMinute",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setMonth(jint arg0)
	{
		callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setSecond(jint arg0)
	{
		callMethod<void>(
			"setSecond",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setTime",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"setTime",
			"(IIILjava/math/BigDecimal;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void XMLGregorianCalendar::setTimezone(jint arg0)
	{
		callMethod<void>(
			"setTimezone",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setYear(jint arg0)
	{
		callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setYear(java::math::BigInteger arg0)
	{
		callMethod<void>(
			"setYear",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	java::util::GregorianCalendar XMLGregorianCalendar::toGregorianCalendar()
	{
		return callObjectMethod(
			"toGregorianCalendar",
			"()Ljava/util/GregorianCalendar;"
		);
	}
	java::util::GregorianCalendar XMLGregorianCalendar::toGregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1, javax::xml::datatype::XMLGregorianCalendar arg2)
	{
		return callObjectMethod(
			"toGregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jstring XMLGregorianCalendar::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring XMLGregorianCalendar::toXMLFormat()
	{
		return callObjectMethod(
			"toXMLFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::datatype

