#include "./ReferenceQueue.hpp"
#include "./WeakReference.hpp"

namespace java::lang::ref
{
	// Fields
	
	WeakReference::WeakReference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WeakReference::WeakReference(jobject &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	WeakReference::WeakReference(jobject &arg0, java::lang::ref::ReferenceQueue &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace java::lang::ref

