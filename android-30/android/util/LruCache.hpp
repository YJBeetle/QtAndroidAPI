#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class LruCache : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LruCache(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LruCache(QJniObject obj);
		
		// Constructors
		LruCache(jint arg0);
		
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
		JObject snapshot();
		jstring toString();
		void trimToSize(jint arg0);
	};
} // namespace android::util

