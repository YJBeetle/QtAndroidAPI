#include "./Reference.hpp"
#include "./ReferenceQueue.hpp"

namespace java::lang::ref
{
	// Fields
	
	ReferenceQueue::ReferenceQueue(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReferenceQueue::ReferenceQueue()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.ReferenceQueue",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ReferenceQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/ref/Reference;"
		);
	}
	QAndroidJniObject ReferenceQueue::remove()
	{
		return __thiz.callObjectMethod(
			"remove",
			"()Ljava/lang/ref/Reference;"
		);
	}
	QAndroidJniObject ReferenceQueue::remove(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(J)Ljava/lang/ref/Reference;",
			arg0
		);
	}
} // namespace java::lang::ref

