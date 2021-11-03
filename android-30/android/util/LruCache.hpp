#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

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
		JObject get(JObject arg0);
		jint hitCount();
		jint maxSize();
		jint missCount();
		JObject put(JObject arg0, JObject arg1);
		jint putCount();
		JObject remove(JObject arg0);
		void resize(jint arg0);
		jint size();
		JObject snapshot();
		JString toString();
		void trimToSize(jint arg0);
	};
} // namespace android::util

