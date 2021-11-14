#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	XMLGregorianCalendar::XMLGregorianCalendar(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	XMLGregorianCalendar::XMLGregorianCalendar()
		: JObject(
			"javax.xml.datatype.XMLGregorianCalendar",
			"()V"
		) {}
	
	// Methods
	void XMLGregorianCalendar::add(javax::xml::datatype::Duration arg0) const
	{
		callMethod<void>(
			"add",
			"(Ljavax/xml/datatype/Duration;)V",
			arg0.object()
		);
	}
	void XMLGregorianCalendar::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject XMLGregorianCalendar::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint XMLGregorianCalendar::compare(javax::xml::datatype::XMLGregorianCalendar arg0) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/XMLGregorianCalendar;)I",
			arg0.object()
		);
	}
	jboolean XMLGregorianCalendar::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint XMLGregorianCalendar::getDay() const
	{
		return callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	java::math::BigInteger XMLGregorianCalendar::getEon() const
	{
		return callObjectMethod(
			"getEon",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger XMLGregorianCalendar::getEonAndYear() const
	{
		return callObjectMethod(
			"getEonAndYear",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigDecimal XMLGregorianCalendar::getFractionalSecond() const
	{
		return callObjectMethod(
			"getFractionalSecond",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint XMLGregorianCalendar::getHour() const
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMillisecond() const
	{
		return callMethod<jint>(
			"getMillisecond",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMinute() const
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint XMLGregorianCalendar::getSecond() const
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	java::util::TimeZone XMLGregorianCalendar::getTimeZone(jint arg0) const
	{
		return callObjectMethod(
			"getTimeZone",
			"(I)Ljava/util/TimeZone;",
			arg0
		);
	}
	jint XMLGregorianCalendar::getTimezone() const
	{
		return callMethod<jint>(
			"getTimezone",
			"()I"
		);
	}
	javax::xml::namespace_::QName XMLGregorianCalendar::getXMLSchemaType() const
	{
		return callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	jint XMLGregorianCalendar::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint XMLGregorianCalendar::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean XMLGregorianCalendar::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	javax::xml::datatype::XMLGregorianCalendar XMLGregorianCalendar::normalize() const
	{
		return callObjectMethod(
			"normalize",
			"()Ljavax/xml/datatype/XMLGregorianCalendar;"
		);
	}
	void XMLGregorianCalendar::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void XMLGregorianCalendar::setDay(jint arg0) const
	{
		callMethod<void>(
			"setDay",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setFractionalSecond(java::math::BigDecimal arg0) const
	{
		callMethod<void>(
			"setFractionalSecond",
			"(Ljava/math/BigDecimal;)V",
			arg0.object()
		);
	}
	void XMLGregorianCalendar::setHour(jint arg0) const
	{
		callMethod<void>(
			"setHour",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setMillisecond(jint arg0) const
	{
		callMethod<void>(
			"setMillisecond",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setMinute(jint arg0) const
	{
		callMethod<void>(
			"setMinute",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setMonth(jint arg0) const
	{
		callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setSecond(jint arg0) const
	{
		callMethod<void>(
			"setSecond",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setTime",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3) const
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
	void XMLGregorianCalendar::setTimezone(jint arg0) const
	{
		callMethod<void>(
			"setTimezone",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setYear(jint arg0) const
	{
		callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	void XMLGregorianCalendar::setYear(java::math::BigInteger arg0) const
	{
		callMethod<void>(
			"setYear",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	java::util::GregorianCalendar XMLGregorianCalendar::toGregorianCalendar() const
	{
		return callObjectMethod(
			"toGregorianCalendar",
			"()Ljava/util/GregorianCalendar;"
		);
	}
	java::util::GregorianCalendar XMLGregorianCalendar::toGregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1, javax::xml::datatype::XMLGregorianCalendar arg2) const
	{
		return callObjectMethod(
			"toGregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JString XMLGregorianCalendar::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JString XMLGregorianCalendar::toXMLFormat() const
	{
		return callObjectMethod(
			"toXMLFormat",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::datatype

