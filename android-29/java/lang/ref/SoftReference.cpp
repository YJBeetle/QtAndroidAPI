#include "../../../JObject.hpp"
#include "./ReferenceQueue.hpp"
#include "./SoftReference.hpp"

namespace java::lang::ref
{
	// Fields
	
	// Constructors
	SoftReference::SoftReference(JObject arg0)
		: java::lang::ref::Reference(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	SoftReference::SoftReference(JObject arg0, java::lang::ref::ReferenceQueue arg1)
		: java::lang::ref::Reference(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
	JObject SoftReference::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::lang::ref

