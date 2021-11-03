#include "../../../java/lang/Number.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/util/Calendar.hpp"
#include "../../../java/util/Date.hpp"
#include "./DatatypeConstants_Field.hpp"
#include "../namespace/QName.hpp"
#include "./Duration.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// QAndroidJniObject forward
	Duration::Duration(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Duration::Duration()
		: JObject(
			"javax.xml.datatype.Duration",
			"()V"
		) {}
	
	// Methods
	javax::xml::datatype::Duration Duration::add(javax::xml::datatype::Duration arg0) const
	{
		return callObjectMethod(
			"add",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	void Duration::addTo(java::util::Calendar arg0) const
	{
		callMethod<void>(
			"addTo",
			"(Ljava/util/Calendar;)V",
			arg0.object()
		);
	}
	void Duration::addTo(java::util::Date arg0) const
	{
		callMethod<void>(
			"addTo",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	jint Duration::compare(javax::xml::datatype::Duration arg0) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/Duration;)I",
			arg0.object()
		);
	}
	jboolean Duration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Duration::getDays() const
	{
		return callMethod<jint>(
			"getDays",
			"()I"
		);
	}
	java::lang::Number Duration::getField(javax::xml::datatype::DatatypeConstants_Field arg0) const
	{
		return callObjectMethod(
			"getField",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;",
			arg0.object()
		);
	}
	jint Duration::getHours() const
	{
		return callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	jint Duration::getMinutes() const
	{
		return callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	jint Duration::getMonths() const
	{
		return callMethod<jint>(
			"getMonths",
			"()I"
		);
	}
	jint Duration::getSeconds() const
	{
		return callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	jint Duration::getSign() const
	{
		return callMethod<jint>(
			"getSign",
			"()I"
		);
	}
	jlong Duration::getTimeInMillis(java::util::Calendar arg0) const
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Calendar;)J",
			arg0.object()
		);
	}
	jlong Duration::getTimeInMillis(java::util::Date arg0) const
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Date;)J",
			arg0.object()
		);
	}
	javax::xml::_namespace::QName Duration::getXMLSchemaType() const
	{
		return callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	jint Duration::getYears() const
	{
		return callMethod<jint>(
			"getYears",
			"()I"
		);
	}
	jint Duration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Duration::isLongerThan(javax::xml::datatype::Duration arg0) const
	{
		return callMethod<jboolean>(
			"isLongerThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.object()
		);
	}
	jboolean Duration::isSet(javax::xml::datatype::DatatypeConstants_Field arg0) const
	{
		return callMethod<jboolean>(
			"isSet",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Z",
			arg0.object()
		);
	}
	jboolean Duration::isShorterThan(javax::xml::datatype::Duration arg0) const
	{
		return callMethod<jboolean>(
			"isShorterThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.object()
		);
	}
	javax::xml::datatype::Duration Duration::multiply(jint arg0) const
	{
		return callObjectMethod(
			"multiply",
			"(I)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	javax::xml::datatype::Duration Duration::multiply(java::math::BigDecimal arg0) const
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	javax::xml::datatype::Duration Duration::negate() const
	{
		return callObjectMethod(
			"negate",
			"()Ljavax/xml/datatype/Duration;"
		);
	}
	javax::xml::datatype::Duration Duration::normalizeWith(java::util::Calendar arg0) const
	{
		return callObjectMethod(
			"normalizeWith",
			"(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	javax::xml::datatype::Duration Duration::subtract(javax::xml::datatype::Duration arg0) const
	{
		return callObjectMethod(
			"subtract",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	JString Duration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::datatype

