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
		jint createCount() const;
		void evictAll() const;
		jint evictionCount() const;
		JObject get(JObject arg0) const;
		jint hitCount() const;
		jint maxSize() const;
		jint missCount() const;
		JObject put(JObject arg0, JObject arg1) const;
		jint putCount() const;
		JObject remove(JObject arg0) const;
		void resize(jint arg0) const;
		jint size() const;
		JObject snapshot() const;
		JString toString() const;
		void trimToSize(jint arg0) const;
	};
} // namespace android::util

