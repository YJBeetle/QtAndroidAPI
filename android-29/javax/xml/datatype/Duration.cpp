#include "../../../java/lang/Number.hpp"
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
	Duration::Duration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Duration::Duration()
		: __JniBaseClass(
			"javax.xml.datatype.Duration",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject Duration::add(javax::xml::datatype::Duration arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	void Duration::addTo(java::util::Calendar arg0)
	{
		callMethod<void>(
			"addTo",
			"(Ljava/util/Calendar;)V",
			arg0.object()
		);
	}
	void Duration::addTo(java::util::Date arg0)
	{
		callMethod<void>(
			"addTo",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	jint Duration::compare(javax::xml::datatype::Duration arg0)
	{
		return callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/Duration;)I",
			arg0.object()
		);
	}
	jboolean Duration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Duration::getDays()
	{
		return callMethod<jint>(
			"getDays",
			"()I"
		);
	}
	QAndroidJniObject Duration::getField(javax::xml::datatype::DatatypeConstants_Field arg0)
	{
		return callObjectMethod(
			"getField",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;",
			arg0.object()
		);
	}
	jint Duration::getHours()
	{
		return callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	jint Duration::getMinutes()
	{
		return callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	jint Duration::getMonths()
	{
		return callMethod<jint>(
			"getMonths",
			"()I"
		);
	}
	jint Duration::getSeconds()
	{
		return callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	jint Duration::getSign()
	{
		return callMethod<jint>(
			"getSign",
			"()I"
		);
	}
	jlong Duration::getTimeInMillis(java::util::Calendar arg0)
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Calendar;)J",
			arg0.object()
		);
	}
	jlong Duration::getTimeInMillis(java::util::Date arg0)
	{
		return callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Date;)J",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::getXMLSchemaType()
	{
		return callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	jint Duration::getYears()
	{
		return callMethod<jint>(
			"getYears",
			"()I"
		);
	}
	jint Duration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Duration::isLongerThan(javax::xml::datatype::Duration arg0)
	{
		return callMethod<jboolean>(
			"isLongerThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.object()
		);
	}
	jboolean Duration::isSet(javax::xml::datatype::DatatypeConstants_Field arg0)
	{
		return callMethod<jboolean>(
			"isSet",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Z",
			arg0.object()
		);
	}
	jboolean Duration::isShorterThan(javax::xml::datatype::Duration arg0)
	{
		return callMethod<jboolean>(
			"isShorterThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::multiply(jint arg0)
	{
		return callObjectMethod(
			"multiply",
			"(I)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::multiply(java::math::BigDecimal arg0)
	{
		return callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::negate()
	{
		return callObjectMethod(
			"negate",
			"()Ljavax/xml/datatype/Duration;"
		);
	}
	QAndroidJniObject Duration::normalizeWith(java::util::Calendar arg0)
	{
		return callObjectMethod(
			"normalizeWith",
			"(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	QAndroidJniObject Duration::subtract(javax::xml::datatype::Duration arg0)
	{
		return callObjectMethod(
			"subtract",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.object()
		);
	}
	jstring Duration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::datatype

