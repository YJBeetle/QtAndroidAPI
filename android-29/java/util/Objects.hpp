#pragma once

#ifndef JAVA_UTIL_OBJECTS
#define JAVA_UTIL_OBJECTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Objects : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean equals(jobject arg0, jobject arg1);
		static jstring toString(jobject arg0);
		static jstring toString(jobject arg0, jstring arg1);
		static jint hashCode(jobject arg0);
		static jint checkIndex(jint arg0, jint arg1);
		static jint hash(jobjectArray arg0);
		static jobject requireNonNull(jobject arg0, __jni_impl::__JniBaseClass arg1);
		static jobject requireNonNull(jobject arg0, jstring arg1);
		static jobject requireNonNull(jobject arg0);
		static jint compare(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		static jint checkFromIndexSize(jint arg0, jint arg1, jint arg2);
		static jint checkFromToIndex(jint arg0, jint arg1, jint arg2);
		static jboolean deepEquals(jobject arg0, jobject arg1);
		static jboolean isNull(jobject arg0);
		static jboolean nonNull(jobject arg0);
		static jobject requireNonNullElse(jobject arg0, jobject arg1);
		static jobject requireNonNullElseGet(jobject arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Objects::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Objects",
			"(V)V");
	}
	
	// Methods
	jboolean Objects::equals(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Objects",
			"equals",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jstring Objects::toString(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"toString",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Objects::toString(jobject arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"toString",
			"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint Objects::hashCode(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"hashCode",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Objects::checkIndex(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"checkIndex",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Objects::hash(jobjectArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"hash",
			"([Ljava/lang/Object;)I",
			arg0
		);
	}
	jobject Objects::requireNonNull(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject Objects::requireNonNull(jobject arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Objects::requireNonNull(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Objects::compare(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint Objects::checkFromIndexSize(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"checkFromIndexSize",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Objects::checkFromToIndex(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.Objects",
			"checkFromToIndex",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Objects::deepEquals(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Objects",
			"deepEquals",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean Objects::isNull(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Objects",
			"isNull",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Objects::nonNull(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.Objects",
			"nonNull",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject Objects::requireNonNullElse(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNullElse",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Objects::requireNonNullElseGet(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNullElseGet",
			"(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Objects : public __jni_impl::java::util::Objects
	{
	public:
		Objects(QAndroidJniObject obj) { __thiz = obj; }
		Objects()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_OBJECTS

