#include "./ReferenceQueue.hpp"
#include "./PhantomReference.hpp"

namespace java::lang::ref
{
	// Fields
	
	PhantomReference::PhantomReference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PhantomReference::PhantomReference(jobject arg0, java::lang::ref::ReferenceQueue arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.PhantomReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jobject PhantomReference::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::lang::ref

