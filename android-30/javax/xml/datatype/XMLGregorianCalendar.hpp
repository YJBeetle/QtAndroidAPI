#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.def.hpp"
#include "../../../java/math/BigInteger.def.hpp"
#include "../../../java/util/GregorianCalendar.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "../../../java/util/TimeZone.def.hpp"
#include "./Duration.def.hpp"
#include "../namespace/QName.def.hpp"
#include "./XMLGregorianCalendar.def.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// Constructors
	inline XMLGregorianCalendar::XMLGregorianCalendar()
		: JObject(
			"javax.xml.datatype.XMLGregorianCalendar",
			"()V"
		) {}
	
	// Methods
	inline void XMLGregorianCalendar::add(javax::xml::datatype::Duration arg0) const
	{
		callMethod<void>(
			"add",
			"(Ljavax/xml/datatype/Duration;)V",
			arg0.object()
		);
	}
	inline void XMLGregorianCalendar::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject XMLGregorianCalendar::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint XMLGregorianCalendar::compare(javax::xml::datatype::XMLGregorianCalendar arg0) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/XMLGregorianCalendar;)I",
			arg0.object()
		);
	}
	inline jboolean XMLGregorianCalendar::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint XMLGregorianCalendar::getDay() const
	{
		return callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	inline java::math::BigInteger XMLGregorianCalendar::getEon() const
	{
		return callObjectMethod(
			"getEon",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger XMLGregorianCalendar::getEonAndYear() const
	{
		return callObjectMethod(
			"getEonAndYear",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigDecimal XMLGregorianCalendar::getFractionalSecond() const
	{
		return callObjectMethod(
			"getFractionalSecond",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline jint XMLGregorianCalendar::getHour() const
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	inline jint XMLGregorianCalendar::getMillisecond() const
	{
		return callMethod<jint>(
			"getMillisecond",
			"()I"
		);
	}
	inline jint XMLGregorianCalendar::getMinute() const
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	inline jint XMLGregorianCalendar::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	inline jint XMLGregorianCalendar::getSecond() const
	{
		return callMethod<jint>(
			"getSecond",
			"()I"
		);
	}
	inline java::util::TimeZone XMLGregorianCalendar::getTimeZone(jint arg0) const
	{
		return callObjectMethod(
			"getTimeZone",
			"(I)Ljava/util/TimeZone;",
			arg0
		);
	}
	inline jint XMLGregorianCalendar::getTimezone() const
	{
		return callMethod<jint>(
			"getTimezone",
			"()I"
		);
	}
	inline javax::xml::namespace_::QName XMLGregorianCalendar::getXMLSchemaType() const
	{
		return callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	inline jint XMLGregorianCalendar::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	inline jint XMLGregorianCalendar::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean XMLGregorianCalendar::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline javax::xml::datatype::XMLGregorianCalendar XMLGregorianCalendar::normalize() const
	{
		return callObjectMethod(
			"normalize",
			"()Ljavax/xml/datatype/XMLGregorianCalendar;"
		);
	}
	inline void XMLGregorianCalendar::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void XMLGregorianCalendar::setDay(jint arg0) const
	{
		callMethod<void>(
			"setDay",
			"(I)V",
			arg0
		);
	}
	inline void XMLGregorianCalendar::setFractionalSecond(java::math::BigDecimal arg0) const
	{
		callMethod<void>(
			"setFractionalSecond",
			"(Ljava/math/BigDecimal;)V",
			arg0.object()
		);
	}
	inline void XMLGregorianCalendar::setHour(jint arg0) const
	{
		callMethod<void>(
			"setHour",
			"(I)V",
			arg0
		);
	}
	inline void XMLGregorianCalendar::setMillisecond(jint arg0) const
	{
		callMethod<void>(
			"setMillisecond",
			"(I)V",
			arg0
		);
	}
	inline void XMLGregorianCalendar::setMinute(jint arg0) const
	{
		callMethod<void>(
			"setMinute",
			"(I)V",
			arg0
		);
	}
	inline void XMLGregorianCalendar::setMonth(jint arg0) const
	{
		callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	inline void XMLGregorianCalendar::setSecond(jint arg0) const
	{
		callMethod<void>(
			"setSecond",
			"(I)V",
			arg0
		);
	}
	inline void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setTime",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void XMLGregorianCalendar::setTime(jint arg0, jint arg1, jint arg2, java::math::BigDecimal arg3) const
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
	inline void XMLGregorianCalendar::setTimezone(jint arg0) const
	{
		callMethod<void>(
			"setTimezone",
			"(I)V",
			arg0
		);
	}
	inline void XMLGregorianCalendar::setYear(jint arg0) const
	{
		callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	inline void XMLGregorianCalendar::setYear(java::math::BigInteger arg0) const
	{
		callMethod<void>(
			"setYear",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	inline java::util::GregorianCalendar XMLGregorianCalendar::toGregorianCalendar() const
	{
		return callObjectMethod(
			"toGregorianCalendar",
			"()Ljava/util/GregorianCalendar;"
		);
	}
	inline java::util::GregorianCalendar XMLGregorianCalendar::toGregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1, javax::xml::datatype::XMLGregorianCalendar arg2) const
	{
		return callObjectMethod(
			"toGregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JString XMLGregorianCalendar::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JString XMLGregorianCalendar::toXMLFormat() const
	{
		return callObjectMethod(
			"toXMLFormat",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::datatype

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::datatype;
#endif
