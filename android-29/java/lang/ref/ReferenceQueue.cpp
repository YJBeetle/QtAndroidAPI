#include "./Reference.hpp"
#include "./ReferenceQueue.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QAndroidJniObject forward
	ReferenceQueue::ReferenceQueue(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ReferenceQueue::ReferenceQueue()
		: __JniBaseClass(
			"java.lang.ref.ReferenceQueue",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ReferenceQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/ref/Reference;"
		);
	}
	QAndroidJniObject ReferenceQueue::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/ref/Reference;"
		);
	}
	QAndroidJniObject ReferenceQueue::remove(jlong arg0)
	{
		return callObjectMethod(
			"remove",
			"(J)Ljava/lang/ref/Reference;",
			arg0
		);
	}
} // namespace java::lang::ref

