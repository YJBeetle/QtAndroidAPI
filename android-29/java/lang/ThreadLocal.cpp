#include "./Thread.hpp"
#include "../util/concurrent/atomic/AtomicInteger.hpp"
#include "./ThreadLocal.hpp"

namespace java::lang
{
	// Fields
	
	ThreadLocal::ThreadLocal(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThreadLocal::ThreadLocal()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadLocal",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ThreadLocal::withInitial(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ThreadLocal",
			"withInitial",
			"(Ljava/util/function/Supplier;)Ljava/lang/ThreadLocal;",
			arg0.__jniObject().object()
		);
	}
	jobject ThreadLocal::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ThreadLocal::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V"
		);
	}
	void ThreadLocal::set(jobject arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace java::lang

