#pragma once

#ifndef JAVA_UTIL_IDENTITYHASHMAP
#define JAVA_UTIL_IDENTITYHASHMAP

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
	class IdentityHashMap : public __jni_impl::java::util::AbstractMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jobject remove(jobject arg0);
		jobject get(jobject arg0);
		jobject put(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject values();
		jint hashCode();
		jobject clone();
		void clear();
		jboolean isEmpty();
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void IdentityHashMap::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IdentityHashMap",
			"(I)V",
			arg0);
	}
	void IdentityHashMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.IdentityHashMap",
			"()V");
	}
	void IdentityHashMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IdentityHashMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jobject IdentityHashMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject IdentityHashMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject IdentityHashMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean IdentityHashMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject IdentityHashMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
	jint IdentityHashMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject IdentityHashMap::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void IdentityHashMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean IdentityHashMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void IdentityHashMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	jint IdentityHashMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject IdentityHashMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void IdentityHashMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void IdentityHashMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean IdentityHashMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject IdentityHashMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean IdentityHashMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class IdentityHashMap : public __jni_impl::java::util::IdentityHashMap
	{
	public:
		IdentityHashMap(QAndroidJniObject obj) { __thiz = obj; }
		IdentityHashMap(jint arg0)
		{
			__constructor(
				arg0);
		}
		IdentityHashMap()
		{
			__constructor();
		}
		IdentityHashMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_IDENTITYHASHMAP

