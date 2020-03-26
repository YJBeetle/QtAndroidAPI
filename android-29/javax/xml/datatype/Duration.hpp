#pragma once

#ifndef JAVAX_XML_DATATYPE_DURATION
#define JAVAX_XML_DATATYPE_DURATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigDecimal;
}
namespace __jni_impl::java::lang
{
	class Number;
}
namespace __jni_impl::javax::xml::datatype
{
	class DatatypeConstants_Field;
}
namespace __jni_impl::java::util
{
	class Calendar;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::javax::xml::namespace
{
	class QName;
}

namespace __jni_impl::javax::xml::datatype
{
	class Duration : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject add(__jni_impl::javax::xml::datatype::Duration arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compare(__jni_impl::javax::xml::datatype::Duration arg0);
		QAndroidJniObject getField(__jni_impl::javax::xml::datatype::DatatypeConstants_Field arg0);
		jboolean isSet(__jni_impl::javax::xml::datatype::DatatypeConstants_Field arg0);
		QAndroidJniObject multiply(jint arg0);
		QAndroidJniObject multiply(__jni_impl::java::math::BigDecimal arg0);
		jint getSeconds();
		void addTo(__jni_impl::java::util::Calendar arg0);
		void addTo(__jni_impl::java::util::Date arg0);
		QAndroidJniObject subtract(__jni_impl::javax::xml::datatype::Duration arg0);
		jlong getTimeInMillis(__jni_impl::java::util::Date arg0);
		jlong getTimeInMillis(__jni_impl::java::util::Calendar arg0);
		jint getYears();
		jint getMonths();
		jint getDays();
		jint getHours();
		jint getMinutes();
		QAndroidJniObject negate();
		QAndroidJniObject getXMLSchemaType();
		QAndroidJniObject normalizeWith(__jni_impl::java::util::Calendar arg0);
		jboolean isLongerThan(__jni_impl::javax::xml::datatype::Duration arg0);
		jboolean isShorterThan(__jni_impl::javax::xml::datatype::Duration arg0);
		jint getSign();
	};
} // namespace __jni_impl::javax::xml::datatype

#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/lang/Number.hpp"
#include "DatatypeConstants_Field.hpp"
#include "../../../java/util/Calendar.hpp"
#include "../../../java/util/Date.hpp"
#include "../namespace/QName.hpp"

namespace __jni_impl::javax::xml::datatype
{
	// Fields
	
	// Constructors
	void Duration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.Duration",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Duration::add(__jni_impl::javax::xml::datatype::Duration arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
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
	jstring Duration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Duration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Duration::compare(__jni_impl::javax::xml::datatype::Duration arg0)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljavax/xml/datatype/Duration;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::getField(__jni_impl::javax::xml::datatype::DatatypeConstants_Field arg0)
	{
		return __thiz.callObjectMethod(
			"getField",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Ljava/lang/Number;",
			arg0.__jniObject().object()
		);
	}
	jboolean Duration::isSet(__jni_impl::javax::xml::datatype::DatatypeConstants_Field arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSet",
			"(Ljavax/xml/datatype/DatatypeConstants$Field;)Z",
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
	QAndroidJniObject Duration::multiply(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"multiply",
			"(Ljava/math/BigDecimal;)Ljavax/xml/datatype/Duration;",
			arg0.__jniObject().object()
		);
	}
	jint Duration::getSeconds()
	{
		return __thiz.callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	void Duration::addTo(__jni_impl::java::util::Calendar arg0)
	{
		__thiz.callMethod<void>(
			"addTo",
			"(Ljava/util/Calendar;)V",
			arg0.__jniObject().object()
		);
	}
	void Duration::addTo(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"addTo",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Duration::subtract(__jni_impl::javax::xml::datatype::Duration arg0)
	{
		return __thiz.callObjectMethod(
			"subtract",
			"(Ljavax/xml/datatype/Duration;)Ljavax/xml/datatype/Duration;",
			arg0.__jniObject().object()
		);
	}
	jlong Duration::getTimeInMillis(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Date;)J",
			arg0.__jniObject().object()
		);
	}
	jlong Duration::getTimeInMillis(__jni_impl::java::util::Calendar arg0)
	{
		return __thiz.callMethod<jlong>(
			"getTimeInMillis",
			"(Ljava/util/Calendar;)J",
			arg0.__jniObject().object()
		);
	}
	jint Duration::getYears()
	{
		return __thiz.callMethod<jint>(
			"getYears",
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
	jint Duration::getDays()
	{
		return __thiz.callMethod<jint>(
			"getDays",
			"()I"
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
	QAndroidJniObject Duration::negate()
	{
		return __thiz.callObjectMethod(
			"negate",
			"()Ljavax/xml/datatype/Duration;"
		);
	}
	QAndroidJniObject Duration::getXMLSchemaType()
	{
		return __thiz.callObjectMethod(
			"getXMLSchemaType",
			"()Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject Duration::normalizeWith(__jni_impl::java::util::Calendar arg0)
	{
		return __thiz.callObjectMethod(
			"normalizeWith",
			"(Ljava/util/Calendar;)Ljavax/xml/datatype/Duration;",
			arg0.__jniObject().object()
		);
	}
	jboolean Duration::isLongerThan(__jni_impl::javax::xml::datatype::Duration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLongerThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Duration::isShorterThan(__jni_impl::javax::xml::datatype::Duration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isShorterThan",
			"(Ljavax/xml/datatype/Duration;)Z",
			arg0.__jniObject().object()
		);
	}
	jint Duration::getSign()
	{
		return __thiz.callMethod<jint>(
			"getSign",
			"()I"
		);
	}
} // namespace __jni_impl::javax::xml::datatype

namespace javax::xml::datatype
{
	class Duration : public __jni_impl::javax::xml::datatype::Duration
	{
	public:
		Duration(QAndroidJniObject obj) { __thiz = obj; }
		Duration()
		{
			__constructor();
		}
	};
} // namespace javax::xml::datatype

#endif // JAVAX_XML_DATATYPE_DURATION

