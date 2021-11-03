#include "../../../JObject.hpp"
#include "./ReferenceQueue.hpp"
#include "./WeakReference.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QJniObject forward
	WeakReference::WeakReference(QJniObject obj) : java::lang::ref::Reference(obj) {}
	
	// Constructors
	WeakReference::WeakReference(JObject arg0)
		: java::lang::ref::Reference(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	WeakReference::WeakReference(JObject arg0, java::lang::ref::ReferenceQueue arg1)
		: java::lang::ref::Reference(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
} // namespace java::lang::ref

