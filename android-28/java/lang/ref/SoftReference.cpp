#include "./ReferenceQueue.hpp"
#include "./SoftReference.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QJniObject forward
	SoftReference::SoftReference(QJniObject obj) : java::lang::ref::Reference(obj) {}
	
	// Constructors
	SoftReference::SoftReference(jobject arg0)
		: java::lang::ref::Reference(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	SoftReference::SoftReference(jobject arg0, java::lang::ref::ReferenceQueue arg1)
		: java::lang::ref::Reference(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jobject SoftReference::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::lang::ref

