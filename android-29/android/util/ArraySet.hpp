#pragma once

#ifndef ANDROID_UTIL_ARRAYSET
#define ANDROID_UTIL_ARRAYSET

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class ArraySet : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::android::util::ArraySet arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jboolean add(jobject arg0);
		jboolean remove(jobject arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint indexOf(jobject arg0);
		void clear();
		jboolean isEmpty();
		jint size();
		QAndroidJniObject toArray();
		QAndroidJniObject toArray(jobjectArray arg0);
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		void addAll(__jni_impl::android::util::ArraySet arg0);
		void ensureCapacity(jint arg0);
		jboolean containsAll(__jni_impl::__JniBaseClass arg0);
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::android::util::ArraySet arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject removeAt(jint arg0);
		QAndroidJniObject valueAt(jint arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void ArraySet::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.ArraySet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void ArraySet::__constructor(__jni_impl::android::util::ArraySet arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.ArraySet",
			"(Landroid/util/ArraySet;)V",
			arg0.__jniObject().object());
	}
	void ArraySet::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.ArraySet",
			"(I)V",
			arg0);
	}
	void ArraySet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.ArraySet",
			"()V");
	}
	
	// Methods
	jboolean ArraySet::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean ArraySet::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean ArraySet::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ArraySet::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ArraySet::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint ArraySet::indexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	void ArraySet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean ArraySet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jint ArraySet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject ArraySet::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;");
	}
	QAndroidJniObject ArraySet::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject ArraySet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean ArraySet::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean ArraySet::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	void ArraySet::addAll(__jni_impl::android::util::ArraySet arg0)
	{
		__thiz.callMethod<void>(
			"addAll",
			"(Landroid/util/ArraySet;)V",
			arg0.__jniObject().object());
	}
	void ArraySet::ensureCapacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0);
	}
	jboolean ArraySet::containsAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean ArraySet::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean ArraySet::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean ArraySet::removeAll(__jni_impl::android::util::ArraySet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Landroid/util/ArraySet;)Z",
			arg0.__jniObject().object());
	}
	jboolean ArraySet::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ArraySet::removeAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject ArraySet::valueAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class ArraySet : public __jni_impl::android::util::ArraySet
	{
	public:
		ArraySet(QAndroidJniObject obj) { __thiz = obj; }
		ArraySet(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		ArraySet(__jni_impl::android::util::ArraySet arg0)
		{
			__constructor(
				arg0);
		}
		ArraySet(jint arg0)
		{
			__constructor(
				arg0);
		}
		ArraySet()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_ARRAYSET

