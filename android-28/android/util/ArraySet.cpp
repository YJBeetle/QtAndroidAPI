#include "./ArraySet.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	ArraySet::ArraySet(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ArraySet::ArraySet()
		: __JniBaseClass(
			"android.util.ArraySet",
			"()V"
		) {}
	ArraySet::ArraySet(android::util::ArraySet &arg0)
		: __JniBaseClass(
			"android.util.ArraySet",
			"(Landroid/util/ArraySet;)V",
			arg0.object()
		) {}
	ArraySet::ArraySet(jint arg0)
		: __JniBaseClass(
			"android.util.ArraySet",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jboolean ArraySet::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArraySet::addAll(__JniBaseClass arg0)
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
	jboolean ArraySet::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArraySet::containsAll(__JniBaseClass arg0)
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
	jboolean ArraySet::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ArraySet::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ArraySet::indexOf(jobject arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean ArraySet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	__JniBaseClass ArraySet::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ArraySet::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jboolean ArraySet::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jobject ArraySet::removeAt(jint arg0)
	{
		return callObjectMethod(
			"removeAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ArraySet::retainAll(__JniBaseClass arg0)
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
	jobjectArray ArraySet::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray ArraySet::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring ArraySet::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject ArraySet::valueAt(jint arg0)
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace android::util

