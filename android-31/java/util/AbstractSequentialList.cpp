#include "../../JObject.hpp"
#include "./AbstractSequentialList.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	AbstractSequentialList::AbstractSequentialList(QJniObject obj) : java::util::AbstractList(obj) {}
	
	// Constructors
	
	// Methods
	void AbstractSequentialList::add(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jboolean AbstractSequentialList::addAll(jint arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	JObject AbstractSequentialList::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject AbstractSequentialList::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject AbstractSequentialList::listIterator(jint arg0)
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	JObject AbstractSequentialList::remove(jint arg0)
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject AbstractSequentialList::set(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
} // namespace java::util

