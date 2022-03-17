#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LruCache.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline LruCache::LruCache(jint arg0)
		: JObject(
			"android.util.LruCache",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint LruCache::createCount() const
	{
		return callMethod<jint>(
			"createCount",
			"()I"
		);
	}
	inline void LruCache::evictAll() const
	{
		callMethod<void>(
			"evictAll",
			"()V"
		);
	}
	inline jint LruCache::evictionCount() const
	{
		return callMethod<jint>(
			"evictionCount",
			"()I"
		);
	}
	inline JObject LruCache::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jint LruCache::hitCount() const
	{
		return callMethod<jint>(
			"hitCount",
			"()I"
		);
	}
	inline jint LruCache::maxSize() const
	{
		return callMethod<jint>(
			"maxSize",
			"()I"
		);
	}
	inline jint LruCache::missCount() const
	{
		return callMethod<jint>(
			"missCount",
			"()I"
		);
	}
	inline JObject LruCache::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jint LruCache::putCount() const
	{
		return callMethod<jint>(
			"putCount",
			"()I"
		);
	}
	inline JObject LruCache::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline void LruCache::resize(jint arg0) const
	{
		callMethod<void>(
			"resize",
			"(I)V",
			arg0
		);
	}
	inline jint LruCache::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject LruCache::snapshot() const
	{
		return callObjectMethod(
			"snapshot",
			"()Ljava/util/Map;"
		);
	}
	inline JString LruCache::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LruCache::trimToSize(jint arg0) const
	{
		callMethod<void>(
			"trimToSize",
			"(I)V",
			arg0
		);
	}
} // namespace android::util

// Base class headers

