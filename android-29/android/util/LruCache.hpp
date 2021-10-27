#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class LruCache : public __JniBaseClass
	{
	public:
		// Fields
		
		LruCache(QAndroidJniObject obj);
		// Constructors
		LruCache(jint &arg0);
		LruCache() = default;
		
		// Methods
		jint createCount();
		void evictAll();
		jint evictionCount();
		jobject get(jobject arg0);
		jint hitCount();
		jint maxSize();
		jint missCount();
		jobject put(jobject arg0, jobject arg1);
		jint putCount();
		jobject remove(jobject arg0);
		void resize(jint arg0);
		jint size();
		QAndroidJniObject snapshot();
		jstring toString();
		void trimToSize(jint arg0);
	};
} // namespace android::util

