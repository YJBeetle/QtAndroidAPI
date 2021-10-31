#include "../lang/ref/ReferenceQueue.hpp"
#include "./WeakHashMap.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	WeakHashMap::WeakHashMap(QAndroidJniObject obj) : java::util::AbstractMap(obj) {}
	
	// Constructors
	WeakHashMap::WeakHashMap()
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"()V"
		) {}
	WeakHashMap::WeakHashMap(jint arg0)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(I)V",
			arg0
		) {}
	WeakHashMap::WeakHashMap(__JniBaseClass arg0)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	WeakHashMap::WeakHashMap(jint arg0, jfloat arg1)
		: java::util::AbstractMap(
			"java.util.WeakHashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void WeakHashMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean WeakHashMap::containsKey(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean WeakHashMap::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject WeakHashMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void WeakHashMap::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	jobject WeakHashMap::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean WeakHashMap::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject WeakHashMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject WeakHashMap::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void WeakHashMap::putAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	jobject WeakHashMap::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void WeakHashMap::replaceAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jint WeakHashMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject WeakHashMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

