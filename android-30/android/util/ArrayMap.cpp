#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ArrayMap.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	ArrayMap::ArrayMap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ArrayMap::ArrayMap()
		: JObject(
			"android.util.ArrayMap",
			"()V"
		) {}
	ArrayMap::ArrayMap(android::util::ArrayMap &arg0)
		: JObject(
			"android.util.ArrayMap",
			"(Landroid/util/ArrayMap;)V",
			arg0.object()
		) {}
	ArrayMap::ArrayMap(jint arg0)
		: JObject(
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
	jboolean ArrayMap::containsAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean ArrayMap::containsKey(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayMap::containsValue(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	JObject ArrayMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean ArrayMap::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ArrayMap::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint ArrayMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ArrayMap::indexOfKey(JObject arg0)
	{
		return callMethod<jint>(
			"indexOfKey",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint ArrayMap::indexOfValue(JObject arg0)
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayMap::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ArrayMap::keyAt(jint arg0)
	{
		return callObjectMethod(
			"keyAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject ArrayMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject ArrayMap::put(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void ArrayMap::putAll(android::util::ArrayMap arg0)
	{
		callMethod<void>(
			"putAll",
			"(Landroid/util/ArrayMap;)V",
			arg0.object()
		);
	}
	void ArrayMap::putAll(JObject arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject ArrayMap::remove(JObject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayMap::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject ArrayMap::removeAt(jint arg0)
	{
		return callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jboolean ArrayMap::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject ArrayMap::setValueAt(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"setValueAt",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint ArrayMap::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString ArrayMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject ArrayMap::valueAt(jint arg0)
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject ArrayMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace android::util

