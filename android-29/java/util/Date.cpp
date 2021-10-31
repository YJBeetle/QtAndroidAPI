#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/StringBuilder.hpp"
#include "../time/Instant.hpp"
#include "./Date.hpp"

namespace java::util
{
	// Fields
	
	Date::Date(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Date::Date()
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"()V"
		);
	}
	Date::Date(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Date::Date(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(J)V",
			arg0
		);
	}
	Date::Date(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	Date::Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	Date::Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	jlong Date::UTC(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.util.Date",
			"UTC",
			"(IIIIII)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject Date::from(java::time::Instant arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Date",
			"from",
			"(Ljava/time/Instant;)Ljava/util/Date;",
			arg0.__jniObject().object()
		);
	}
	jlong Date::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.util.Date",
			"parse",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jboolean Date::after(java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"after",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Date::before(java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"before",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject Date::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Date::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Date::compareTo(java::util::Date arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/util/Date;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean Date::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Date::getDate()
	{
		return __thiz.callMethod<jint>(
			"getDate",
			"()I"
		);
	}
	jint Date::getDay()
	{
		return __thiz.callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	jint Date::getHours()
	{
		return __thiz.callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	jint Date::getMinutes()
	{
		return __thiz.callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	jint Date::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint Date::getSeconds()
	{
		return __thiz.callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	jlong Date::getTime()
	{
		return __thiz.callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jint Date::getTimezoneOffset()
	{
		return __thiz.callMethod<jint>(
			"getTimezoneOffset",
			"()I"
		);
	}
	jint Date::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint Date::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Date::setDate(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDate",
			"(I)V",
			arg0
		);
	}
	void Date::setHours(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHours",
			"(I)V",
			arg0
		);
	}
	void Date::setMinutes(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinutes",
			"(I)V",
			arg0
		);
	}
	void Date::setMonth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	void Date::setSeconds(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSeconds",
			"(I)V",
			arg0
		);
	}
	void Date::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void Date::setYear(jint arg0)
	{
		__thiz.callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	jstring Date::toGMTString()
	{
		return __thiz.callObjectMethod(
			"toGMTString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Date::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	jstring Date::toLocaleString()
	{
		return __thiz.callObjectMethod(
			"toLocaleString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Date::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

