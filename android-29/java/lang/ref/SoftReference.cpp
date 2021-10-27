#include "./ReferenceQueue.hpp"
#include "./SoftReference.hpp"

namespace java::lang::ref
{
	// Fields
	
	SoftReference::SoftReference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SoftReference::SoftReference(jobject &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	SoftReference::SoftReference(jobject &arg0, java::lang::ref::ReferenceQueue &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jobject SoftReference::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::lang::ref

