#pragma once

#ifndef ANDROID_UTIL_ARRAYMAP
#define ANDROID_UTIL_ARRAYMAP

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class ArrayMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::util::ArrayMap arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jobject remove(jobject arg0);
		jobject get(jobject arg0);
		jobject put(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		jstring toString();
		QAndroidJniObject values();
		jint hashCode();
		void clear();
		jboolean isEmpty();
		jint size();
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::android::util::ArrayMap arg0);
		void putAll(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
		void ensureCapacity(jint arg0);
		jboolean containsAll(__jni_impl::__JniBaseClass arg0);
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jobject removeAt(jint arg0);
		jobject keyAt(jint arg0);
		jobject valueAt(jint arg0);
		jobject setValueAt(jint arg0, jobject arg1);
		jint indexOfKey(jobject arg0);
		jint indexOfValue(jobject arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void ArrayMap::__constructor(__jni_impl::android::util::ArrayMap arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.ArrayMap",
			"(Landroid/util/ArrayMap;)V",
			arg0.__jniObject().object()
		);
	}
	void ArrayMap::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.ArrayMap",
			"(I)V",
			arg0
		);
	}
	void ArrayMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.ArrayMap",
			"()V"
		);
	}
	
	// Methods
	jobject ArrayMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ArrayMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ArrayMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean ArrayMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ArrayMap::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ArrayMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
	jint ArrayMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ArrayMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ArrayMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint ArrayMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject ArrayMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void ArrayMap::putAll(__jni_impl::android::util::ArrayMap arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Landroid/util/ArrayMap;)V",
			arg0.__jniObject().object()
		);
	}
	void ArrayMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ArrayMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ArrayMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ArrayMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArrayMap::ensureCapacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	jboolean ArrayMap::containsAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ArrayMap::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ArrayMap::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject ArrayMap::removeAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ArrayMap::keyAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"keyAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ArrayMap::valueAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ArrayMap::setValueAt(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setValueAt",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint ArrayMap::indexOfKey(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfKey",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ArrayMap::indexOfValue(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class ArrayMap : public __jni_impl::android::util::ArrayMap
	{
	public:
		ArrayMap(QAndroidJniObject obj) { __thiz = obj; }
		ArrayMap(__jni_impl::android::util::ArrayMap arg0)
		{
			__constructor(
				arg0);
		}
		ArrayMap(jint arg0)
		{
			__constructor(
				arg0);
		}
		ArrayMap()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_ARRAYMAP

