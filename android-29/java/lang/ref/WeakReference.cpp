#include "./ReferenceQueue.hpp"
#include "./WeakReference.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QAndroidJniObject forward
	WeakReference::WeakReference(QAndroidJniObject obj) : java::lang::ref::Reference(obj) {}
	
	// Constructors
	WeakReference::WeakReference(jobject arg0)
		: java::lang::ref::Reference(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	WeakReference::WeakReference(jobject arg0, java::lang::ref::ReferenceQueue arg1)
		: java::lang::ref::Reference(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
} // namespace java::lang::ref

