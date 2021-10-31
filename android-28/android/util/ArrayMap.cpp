#include "./ArrayMap.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	ArrayMap::ArrayMap(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ArrayMap::ArrayMap()
		: __JniBaseClass(
			"android.util.ArrayMap",
			"()V"
		) {}
	ArrayMap::ArrayMap(android::util::ArrayMap &arg0)
		: __JniBaseClass(
			"android.util.ArrayMap",
			"(Landroid/util/ArrayMap;)V",
			arg0.object()
		) {}
	ArrayMap::ArrayMap(jint arg0)
		: __JniBaseClass(
			"android.util.ArrayMap",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void ArrayMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ArrayMap::containsAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean ArrayMap::containsKey(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArrayMap::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArrayMap::ensureCapacity(jint arg0)
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	__JniBaseClass ArrayMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ArrayMap::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ArrayMap::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint ArrayMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ArrayMap::indexOfKey(jobject arg0)
	{
		return callMethod<jint>(
			"indexOfKey",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean ArrayMap::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jobject ArrayMap::keyAt(jint arg0)
	{
		return callObjectMethod(
			"keyAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	__JniBaseClass ArrayMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject ArrayMap::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void ArrayMap::putAll(android::util::ArrayMap arg0)
	{
		callMethod<void>(
			"putAll",
			"(Landroid/util/ArrayMap;)V",
			arg0.object()
		);
	}
	void ArrayMap::putAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	jobject ArrayMap::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ArrayMap::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jobject ArrayMap::removeAt(jint arg0)
	{
		return callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ArrayMap::retainAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jobject ArrayMap::setValueAt(jint arg0, jobject arg1)
	{
		return callObjectMethod(
			"setValueAt",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint ArrayMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring ArrayMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject ArrayMap::valueAt(jint arg0)
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	__JniBaseClass ArrayMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace android::util

