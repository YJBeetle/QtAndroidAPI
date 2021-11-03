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
	ArraySet::ArraySet(JObject arg0)
		: JObject(
			"android.util.ArraySet",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ArraySet::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArraySet::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void ArraySet::addAll(android::util::ArraySet arg0) const
	{
		callMethod<void>(
			"addAll",
			"(Landroid/util/ArraySet;)V",
			arg0.object()
		);
	}
	void ArraySet::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ArraySet::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArraySet::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void ArraySet::ensureCapacity(jint arg0) const
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	jboolean ArraySet::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ArraySet::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ArraySet::indexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean ArraySet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ArraySet::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ArraySet::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArraySet::removeAll(android::util::ArraySet arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Landroid/util/ArraySet;)Z",
			arg0.object()
		);
	}
	jboolean ArraySet::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject ArraySet::removeAt(jint arg0) const
	{
		return callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jboolean ArraySet::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean ArraySet::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint ArraySet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObjectArray ArraySet::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray ArraySet::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString ArraySet::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject ArraySet::valueAt(jint arg0) const
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

