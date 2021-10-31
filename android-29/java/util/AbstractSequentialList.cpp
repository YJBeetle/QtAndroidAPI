#include "./AbstractSequentialList.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractSequentialList::AbstractSequentialList(QAndroidJniObject obj) : java::util::AbstractList(obj) {}
	
	// Constructors
	
	// Methods
	void AbstractSequentialList::add(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean AbstractSequentialList::addAll(jint arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	jobject AbstractSequentialList::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	__JniBaseClass AbstractSequentialList::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	__JniBaseClass AbstractSequentialList::listIterator(jint arg0)
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jobject AbstractSequentialList::remove(jint arg0)
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AbstractSequentialList::set(jint arg0, jobject arg1)
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
} // namespace java::util

