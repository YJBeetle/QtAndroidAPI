#include "./Reference.hpp"
#include "./ReferenceQueue.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QAndroidJniObject forward
	ReferenceQueue::ReferenceQueue(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ReferenceQueue::ReferenceQueue()
		: JObject(
			"java.lang.ref.ReferenceQueue",
			"()V"
		) {}
	
	// Methods
	java::lang::ref::Reference ReferenceQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/ref/Reference;"
		);
	}
	java::lang::ref::Reference ReferenceQueue::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/ref/Reference;"
		);
	}
	java::lang::ref::Reference ReferenceQueue::remove(jlong arg0)
	{
		return callObjectMethod(
			"remove",
			"(J)Ljava/lang/ref/Reference;",
			arg0
		);
	}
} // namespace java::lang::ref

