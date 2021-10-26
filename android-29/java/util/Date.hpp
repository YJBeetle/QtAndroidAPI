#pragma once

#ifndef JAVA_UTIL_DATE
#define JAVA_UTIL_DATE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::util
{
	class Date : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void __constructor();
		void __constructor(jlong arg0);
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jobject clone();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::util::Date arg0);
		static QAndroidJniObject from(__jni_impl::java::time::Instant arg0);
		jboolean before(__jni_impl::java::util::Date arg0);
		jboolean after(__jni_impl::java::util::Date arg0);
		static jlong parse(jstring arg0);
		static jlong parse(const QString &arg0);
		jint getSeconds();
		QAndroidJniObject toInstant();
		static jlong UTC(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jint getYear();
		jlong getTime();
		void setTime(jlong arg0);
		jint getDate();
		jint getDay();
		jstring toLocaleString();
		jstring toGMTString();
		jint getTimezoneOffset();
		jint getMonth();
		void setDate(jint arg0);
		void setHours(jint arg0);
		jint getHours();
		jint getMinutes();
		void setMonth(jint arg0);
		void setMinutes(jint arg0);
		void setSeconds(jint arg0);
		void setYear(jint arg0);
	};
} // namespace __jni_impl::java::util

#include "../time/Instant.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/StringBuilder.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Date::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Date::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Date::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	void Date::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void Date::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"()V"
		);
	}
	void Date::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(J)V",
			arg0
		);
	}
	void Date::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Date",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean Date::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Date::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Date::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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
	jint Date::compareTo(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/util/Date;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Date::from(__jni_impl::java::time::Instant arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Date",
			"from",
			"(Ljava/time/Instant;)Ljava/util/Date;",
			arg0.__jniObject().object()
		);
	}
	jboolean Date::before(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"before",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Date::after(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"after",
			"(Ljava/util/Date;)Z",
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
	jlong Date::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.util.Date",
			"parse",
			"(Ljava/lang/String;)J",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Date::getSeconds()
	{
		return __thiz.callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	QAndroidJniObject Date::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
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
	jint Date::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
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
	void Date::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
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
	jstring Date::toLocaleString()
	{
		return __thiz.callObjectMethod(
			"toLocaleString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Date::toGMTString()
	{
		return __thiz.callObjectMethod(
			"toGMTString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Date::getTimezoneOffset()
	{
		return __thiz.callMethod<jint>(
			"getTimezoneOffset",
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
	void Date::setMonth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMonth",
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
	void Date::setSeconds(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSeconds",
			"(I)V",
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
} // namespace __jni_impl::java::util

namespace java::util
{
	class Date : public __jni_impl::java::util::Date
	{
	public:
		Date(QAndroidJniObject obj) { __thiz = obj; }
		Date(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		Date()
		{
			__constructor();
		}
		Date(jlong arg0)
		{
			__constructor(
				arg0);
		}
		Date(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_DATE

