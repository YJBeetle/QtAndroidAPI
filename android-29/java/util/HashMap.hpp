#pragma once

#ifndef JAVA_UTIL_HASHMAP
#define JAVA_UTIL_HASHMAP

#include "../../__JniBaseClass.hpp"
#include "AbstractMap.hpp"

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
	class HashMap : public __jni_impl::java::util::AbstractMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jfloat arg1);
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0);
		
		// Methods
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jobject get(jobject arg0);
		jobject put(jobject arg0, jobject arg1);
		QAndroidJniObject values();
		jobject clone();
		void clear();
		jboolean isEmpty();
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		jobject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jobject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		jobject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		jobject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void HashMap::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashMap",
			"(IF)V",
			arg0,
			arg1);
	}
	void HashMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.HashMap",
			"()V");
	}
	void HashMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	void HashMap::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashMap",
			"(I)V",
			arg0);
	}
	
	// Methods
	jboolean HashMap::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject HashMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject HashMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject HashMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	QAndroidJniObject HashMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
	jobject HashMap::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void HashMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean HashMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean HashMap::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject HashMap::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void HashMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	jint HashMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jobject HashMap::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject HashMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void HashMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jobject HashMap::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject HashMap::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void HashMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean HashMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject HashMap::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject HashMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean HashMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject HashMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject HashMap::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class HashMap : public __jni_impl::java::util::HashMap
	{
	public:
		HashMap(QAndroidJniObject obj) { __thiz = obj; }
		HashMap(jint arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		HashMap()
		{
			__constructor();
		}
		HashMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		HashMap(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_HASHMAP

