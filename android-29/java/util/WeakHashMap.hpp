#pragma once

#include "../../__JniBaseClass.hpp"
#include "AbstractMap.hpp"

namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}

namespace __jni_impl::java::util
{
	class WeakHashMap : public __jni_impl::java::util::AbstractMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0, jfloat arg1);
		
		// Methods
		void clear();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject entrySet();
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject get(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__jni_impl::__JniBaseClass arg0);
		jobject remove(jobject arg0);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		QAndroidJniObject values();
	};
} // namespace __jni_impl::java::util

#include "../lang/ref/ReferenceQueue.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void WeakHashMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.WeakHashMap",
			"()V"
		);
	}
	void WeakHashMap::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.WeakHashMap",
			"(I)V",
			arg0
		);
	}
	void WeakHashMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.WeakHashMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void WeakHashMap::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.WeakHashMap",
			"(IF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void WeakHashMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean WeakHashMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean WeakHashMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject WeakHashMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void WeakHashMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject WeakHashMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean WeakHashMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject WeakHashMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject WeakHashMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void WeakHashMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jobject WeakHashMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void WeakHashMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	jint WeakHashMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject WeakHashMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class WeakHashMap : public __jni_impl::java::util::WeakHashMap
	{
	public:
		WeakHashMap(QAndroidJniObject obj) { __thiz = obj; }
		WeakHashMap()
		{
			__constructor();
		}
		WeakHashMap(jint arg0)
		{
			__constructor(
				arg0);
		}
		WeakHashMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		WeakHashMap(jint arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

