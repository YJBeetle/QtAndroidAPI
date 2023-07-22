#pragma once

#include "../../../java/lang/Number.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.def.hpp"
#include "../../../java/util/Calendar.def.hpp"
#include "../../../java/util/Date.def.hpp"
#include "./DatatypeConstants_Field.def.hpp"
#include "../namespace/QName.def.hpp"
#include "./Duration.def.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// Constructors
	inline Duration::Duration()
		: JObject(
			"javax.xml.datatype.Duration",
			"()V"
		) {}
	
	// Methods
	inline javax::xml::datatype::Duration Duration::add(javax::xml::datatype::Duration arg0) const
	{
		return callObjectMethod(
			"add",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	inline void Duration::addTo(java::util::Calendar arg0) const
	{
		callMethod<void>(
			"addTo",
			"(Ljava/util/Calendar;)V",
			arg0.object()
		);
	}
	inline void Duration::addTo(java::util::Date arg0) const
	{
		callMethod<void>(
			"addTo",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	inline jint Duration::compare(javax::xml::datatype::Duration arg0) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/Duration;)I",
			arg0.object()
		);
	}
	inline jboolean Duration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Duration::getDays() const
	{
		return callMethod<jint>(
			"getDays",
			"()I"
		);
	}
	inline java::lang::Number Duration::getField(javax::xml::datatype::DatatypeConstants_Field arg0) const
	{
		return callObjectMethod(
			"getField",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;",
			arg0.object()
		);
	}
	inline jint Duration::getHours() const
	{
		return callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	inline jint Duration::getMinutes() const
	{
		return callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	inline jint Duration::getMonths() const
	{
		return callMethod<jint>(
			"getMonths",
			"()I"
		);
	}
	inline jint Duration::getSeconds() const
	{
		return callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	inline jint Duration::getSign() const
	{
		return callMethod<jint>(
			"getSign",
			"()I"
		);
	}
	inline jlong Duration::getTimeInMillis(java::util::Calendar arg0) const
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Calendar;)J",
			arg0.object()
		);
	}
	inline jlong Duration::getTimeInMillis(java::util::Date arg0) const
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Date;)J",
			arg0.object()
		);
	}
	inline javax::xml::namespace_::QName Duration::getXMLSchemaType() const
	{
		return callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	inline jint Duration::getYears() const
	{
		return callMethod<jint>(
			"getYears",
			"()I"
		);
	}
	inline jint Duration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Duration::isLongerThan(javax::xml::datatype::Duration arg0) const
	{
		return callMethod<jboolean>(
			"isLongerThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.object()
		);
	}
	inline jboolean Duration::isSet(javax::xml::datatype::DatatypeConstants_Field arg0) const
	{
		return callMethod<jboolean>(
			"isSet",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Z",
			arg0.object()
		);
	}
	inline jboolean Duration::isShorterThan(javax::xml::datatype::Duration arg0) const
	{
		return callMethod<jboolean>(
			"isShorterThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.object()
		);
	}
	inline javax::xml::datatype::Duration Duration::multiply(jint arg0) const
	{
		return callObjectMethod(
			"multiply",
			"(I)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	inline javax::xml::datatype::Duration Duration::multiply(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	inline javax::xml::datatype::Duration Duration::negate() const
	{
		return callObjectMethod(
			"negate",
			"()Ljavax/xml/datatype/Duration;"
		);
	}
	inline javax::xml::datatype::Duration Duration::normalizeWith(java::util::Calendar arg0) const
	{
		return callObjectMethod(
			"normalizeWith",
			"(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	inline javax::xml::datatype::Duration Duration::subtract(javax::xml::datatype::Duration arg0) const
	{
		return callObjectMethod(
			"subtract",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	inline JString Duration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::datatype

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::datatype;
#endif
