#include "../../JObjectArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ArraySet.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	ArraySet::ArraySet(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ArraySet::ArraySet()
		: JObject(
			"android.util.ArraySet",
			"()V"
		) {}
	ArraySet::ArraySet(android::util::ArraySet &arg0)
		: JObject(
			"android.util.ArraySet",
			"(Landroid/util/ArraySet;)V",
			arg0.object()
		) {}
	ArraySet::ArraySet(jint arg0)
		: JObject(
			"android.util.ArraySet",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jboolean ArraySet::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArraySet::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void ArraySet::addAll(android::util::ArraySet arg0)
	{
		callMethod<void>(
			"addAll",
			"(Landroid/util/ArraySet;)V",
			arg0.object()
		);
	}
	void ArraySet::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ArraySet::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArraySet::containsAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void ArraySet::ensureCapacity(jint arg0)
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	jboolean ArraySet::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ArraySet::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ArraySet::indexOf(JObject arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean ArraySet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ArraySet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ArraySet::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArraySet::removeAll(android::util::ArraySet arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Landroid/util/ArraySet;)Z",
			arg0.object()
		);
	}
	jboolean ArraySet::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject ArraySet::removeAt(jint arg0)
	{
		return callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jboolean ArraySet::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint ArraySet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObjectArray ArraySet::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray ArraySet::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString ArraySet::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject ArraySet::valueAt(jint arg0)
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

