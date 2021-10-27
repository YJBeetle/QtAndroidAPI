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
	
	Duration::Duration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Duration::Duration()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.Duration",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Duration::add(javax::xml::datatype::Duration arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.__jniObject().object()
		);
	}
	void Duration::addTo(java::util::Calendar arg0)
	{
		__thiz.callMethod<void>(
			"addTo",
			"(Ljava/util/Calendar;)V",
			arg0.__jniObject().object()
		);
	}
	void Duration::addTo(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"addTo",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	jint Duration::compare(javax::xml::datatype::Duration arg0)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/Duration;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean Duration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Duration::getDays()
	{
		return __thiz.callMethod<jint>(
			"getDays",
			"()I"
		);
	}
	QAndroidJniObject Duration::getField(javax::xml::datatype::DatatypeConstants_Field arg0)
	{
		return __thiz.callObjectMethod(
			"getField",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;",
			arg0.__jniObject().object()
		);
	}
	jint Duration::getHours()
	{
		return __thiz.callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	jint Duration::getMinutes()
	{
		return __thiz.callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	jint Duration::getMonths()
	{
		return __thiz.callMethod<jint>(
			"getMonths",
			"()I"
		);
	}
	jint Duration::getSeconds()
	{
		return __thiz.callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	jint Duration::getSign()
	{
		return __thiz.callMethod<jint>(
			"getSign",
			"()I"
		);
	}
	jlong Duration::getTimeInMillis(java::util::Calendar arg0)
	{
		return __thiz.callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Calendar;)J",
			arg0.__jniObject().object()
		);
	}
	jlong Duration::getTimeInMillis(java::util::Date arg0)
	{
		return __thiz.callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Date;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::getXMLSchemaType()
	{
		return __thiz.callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	jint Duration::getYears()
	{
		return __thiz.callMethod<jint>(
			"getYears",
			"()I"
		);
	}
	jint Duration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Duration::isLongerThan(javax::xml::datatype::Duration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLongerThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Duration::isSet(javax::xml::datatype::DatatypeConstants_Field arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSet",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Duration::isShorterThan(javax::xml::datatype::Duration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isShorterThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::multiply(jint arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(I)Ljavax/xml/datatype/Duration;",
			arg0
		);
	}
	QAndroidJniObject Duration::multiply(java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::negate()
	{
		return __thiz.callObjectMethod(
			"negate",
			"()Ljavax/xml/datatype/Duration;"
		);
	}
	QAndroidJniObject Duration::normalizeWith(java::util::Calendar arg0)
	{
		return __thiz.callObjectMethod(
			"normalizeWith",
			"(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::subtract(javax::xml::datatype::Duration arg0)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.__jniObject().object()
		);
	}
	jstring Duration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::datatype

