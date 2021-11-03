#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LruCache.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	LruCache::LruCache(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LruCache::LruCache(jint arg0)
		: JObject(
			"android.util.LruCache",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint LruCache::createCount()
	{
		return callMethod<jint>(
			"createCount",
			"()I"
		);
	}
	void LruCache::evictAll()
	{
		callMethod<void>(
			"evictAll",
			"()V"
		);
	}
	jint LruCache::evictionCount()
	{
		return callMethod<jint>(
			"evictionCount",
			"()I"
		);
	}
	JObject LruCache::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint LruCache::hitCount()
	{
		return callMethod<jint>(
			"hitCount",
			"()I"
		);
	}
	jint LruCache::maxSize()
	{
		return callMethod<jint>(
			"maxSize",
			"()I"
		);
	}
	jint LruCache::missCount()
	{
		return callMethod<jint>(
			"missCount",
			"()I"
		);
	}
	JObject LruCache::put(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jint LruCache::putCount()
	{
		return callMethod<jint>(
			"putCount",
			"()I"
		);
	}
	JObject LruCache::remove(JObject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	void LruCache::resize(jint arg0)
	{
		callMethod<void>(
			"resize",
			"(I)V",
			arg0
		);
	}
	jint LruCache::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject LruCache::snapshot()
	{
		return callObjectMethod(
			"snapshot",
			"()Ljava/util/Map;"
		);
	}
	JString LruCache::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LruCache::trimToSize(jint arg0)
	{
		callMethod<void>(
			"trimToSize",
			"(I)V",
			arg0
		);
	}
} // namespace android::util

