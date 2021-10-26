#pragma once

#ifndef ANDROID_UTIL_LRUCACHE
#define ANDROID_UTIL_LRUCACHE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class LruCache : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jobject remove(jobject arg0);
		jobject get(jobject arg0);
		jobject put(jobject arg0, jobject arg1);
		jstring toString();
		jint size();
		void trimToSize(jint arg0);
		void resize(jint arg0);
		QAndroidJniObject snapshot();
		jint maxSize();
		void evictAll();
		jint hitCount();
		jint missCount();
		jint createCount();
		jint putCount();
		jint evictionCount();
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void LruCache::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.LruCache",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jobject LruCache::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject LruCache::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject LruCache::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jstring LruCache::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LruCache::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void LruCache::trimToSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"trimToSize",
			"(I)V",
			arg0
		);
	}
	void LruCache::resize(jint arg0)
	{
		__thiz.callMethod<void>(
			"resize",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject LruCache::snapshot()
	{
		return __thiz.callObjectMethod(
			"snapshot",
			"()Ljava/util/Map;"
		);
	}
	jint LruCache::maxSize()
	{
		return __thiz.callMethod<jint>(
			"maxSize",
			"()I"
		);
	}
	void LruCache::evictAll()
	{
		__thiz.callMethod<void>(
			"evictAll",
			"()V"
		);
	}
	jint LruCache::hitCount()
	{
		return __thiz.callMethod<jint>(
			"hitCount",
			"()I"
		);
	}
	jint LruCache::missCount()
	{
		return __thiz.callMethod<jint>(
			"missCount",
			"()I"
		);
	}
	jint LruCache::createCount()
	{
		return __thiz.callMethod<jint>(
			"createCount",
			"()I"
		);
	}
	jint LruCache::putCount()
	{
		return __thiz.callMethod<jint>(
			"putCount",
			"()I"
		);
	}
	jint LruCache::evictionCount()
	{
		return __thiz.callMethod<jint>(
			"evictionCount",
			"()I"
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class LruCache : public __jni_impl::android::util::LruCache
	{
	public:
		LruCache(QAndroidJniObject obj) { __thiz = obj; }
		LruCache(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_LRUCACHE

