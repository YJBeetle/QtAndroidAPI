#pragma once

#ifndef JAVA_UTIL_SIMPLETIMEZONE
#define JAVA_UTIL_SIMPLETIMEZONE

#include "../../__JniBaseClass.hpp"
#include "TimeZone.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::util
{
	class TimeZone;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::util
{
	class SimpleTimeZone : public __jni_impl::java::util::TimeZone
	{
	public:
		// Fields
		static jint WALL_TIME();
		static jint STANDARD_TIME();
		static jint UTC_TIME();
		
		// Constructors
		void __constructor(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12);
		void __constructor(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10);
		void __constructor(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		void __constructor(jint arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jobject clone();
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jint getOffset(jlong arg0);
		jint getDSTSavings();
		jboolean hasSameRules(__jni_impl::java::util::TimeZone arg0);
		jint getRawOffset();
		jboolean inDaylightTime(__jni_impl::java::util::Date arg0);
		jboolean useDaylightTime();
		void setRawOffset(jint arg0);
		jboolean observesDaylightTime();
		void setStartRule(jint arg0, jint arg1, jint arg2, jint arg3);
		void setStartRule(jint arg0, jint arg1, jint arg2);
		void setStartRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4);
		void setEndRule(jint arg0, jint arg1, jint arg2, jint arg3);
		void setEndRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4);
		void setEndRule(jint arg0, jint arg1, jint arg2);
		void setStartYear(jint arg0);
		void setDSTSavings(jint arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "TimeZone.hpp"
#include "Date.hpp"

namespace __jni_impl::java::util
{
	// Fields
	jint SimpleTimeZone::WALL_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"WALL_TIME"
		);
	}
	jint SimpleTimeZone::STANDARD_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"STANDARD_TIME"
		);
	}
	jint SimpleTimeZone::UTC_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"UTC_TIME"
		);
	}
	
	// Constructors
	void SimpleTimeZone::__constructor(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12)
	{
		__thiz = QAndroidJniObject(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11,
			arg12);
	}
	void SimpleTimeZone::__constructor(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10)
	{
		__thiz = QAndroidJniObject(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10);
	}
	void SimpleTimeZone::__constructor(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
	{
		__thiz = QAndroidJniObject(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9);
	}
	void SimpleTimeZone::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean SimpleTimeZone::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SimpleTimeZone::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SimpleTimeZone::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject SimpleTimeZone::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint SimpleTimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"(IIIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint SimpleTimeZone::getOffset(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
	}
	jint SimpleTimeZone::getDSTSavings()
	{
		return __thiz.callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	jboolean SimpleTimeZone::hasSameRules(__jni_impl::java::util::TimeZone arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasSameRules",
			"(Ljava/util/TimeZone;)Z",
			arg0.__jniObject().object()
		);
	}
	jint SimpleTimeZone::getRawOffset()
	{
		return __thiz.callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	jboolean SimpleTimeZone::inDaylightTime(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean SimpleTimeZone::useDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
	void SimpleTimeZone::setRawOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	jboolean SimpleTimeZone::observesDaylightTime()
	{
		return __thiz.callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
	void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setStartRule",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setStartRule",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
	{
		__thiz.callMethod<void>(
			"setStartRule",
			"(IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setEndRule",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
	{
		__thiz.callMethod<void>(
			"setEndRule",
			"(IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setEndRule",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SimpleTimeZone::setStartYear(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStartYear",
			"(I)V",
			arg0
		);
	}
	void SimpleTimeZone::setDSTSavings(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDSTSavings",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class SimpleTimeZone : public __jni_impl::java::util::SimpleTimeZone
	{
	public:
		SimpleTimeZone(QAndroidJniObject obj) { __thiz = obj; }
		SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9,
				arg10,
				arg11,
				arg12);
		}
		SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9,
				arg10);
		}
		SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9);
		}
		SimpleTimeZone(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_SIMPLETIMEZONE

