#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AbstractList.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractList::AbstractList(QAndroidJniObject obj) : java::util::AbstractCollection(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AbstractList::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void AbstractList::add(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jboolean AbstractList::addAll(jint arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	void AbstractList::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean AbstractList::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AbstractList::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jint AbstractList::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint AbstractList::indexOf(JObject arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JObject AbstractList::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint AbstractList::lastIndexOf(JObject arg0)
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JObject AbstractList::listIterator()
	{
		return callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	JObject AbstractList::listIterator(jint arg0)
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	JObject AbstractList::remove(jint arg0)
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject AbstractList::set(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	JObject AbstractList::subList(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
} // namespace java::util

