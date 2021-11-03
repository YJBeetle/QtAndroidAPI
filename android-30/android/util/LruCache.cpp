#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LruCache.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	LruCache::LruCache(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LruCache::LruCache(jint arg0)
		: JObject(
			"android.util.LruCache",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint LruCache::createCount() const
	{
		return callMethod<jint>(
			"createCount",
			"()I"
		);
	}
	void LruCache::evictAll() const
	{
		callMethod<void>(
			"evictAll",
			"()V"
		);
	}
	jint LruCache::evictionCount() const
	{
		return callMethod<jint>(
			"evictionCount",
			"()I"
		);
	}
	JObject LruCache::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint LruCache::hitCount() const
	{
		return callMethod<jint>(
			"hitCount",
			"()I"
		);
	}
	jint LruCache::maxSize() const
	{
		return callMethod<jint>(
			"maxSize",
			"()I"
		);
	}
	jint LruCache::missCount() const
	{
		return callMethod<jint>(
			"missCount",
			"()I"
		);
	}
	JObject LruCache::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jint LruCache::putCount() const
	{
		return callMethod<jint>(
			"putCount",
			"()I"
		);
	}
	JObject LruCache::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void LruCache::resize(jint arg0) const
	{
		callMethod<void>(
			"resize",
			"(I)V",
			arg0
		);
	}
	jint LruCache::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject LruCache::snapshot() const
	{
		return callObjectMethod(
			"snapshot",
			"()Ljava/util/Map;"
		);
	}
	JString LruCache::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LruCache::trimToSize(jint arg0) const
	{
		callMethod<void>(
			"trimToSize",
			"(I)V",
			arg0
		);
	}
} // namespace android::util

