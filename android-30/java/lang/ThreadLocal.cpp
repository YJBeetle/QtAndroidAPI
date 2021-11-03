#include "../../JObject.hpp"
#include "./Thread.hpp"
#include "../util/concurrent/atomic/AtomicInteger.hpp"
#include "./ThreadLocal.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ThreadLocal::ThreadLocal(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ThreadLocal::ThreadLocal()
		: JObject(
			"java.lang.ThreadLocal",
			"()V"
		) {}
	
	// Methods
	java::lang::ThreadLocal ThreadLocal::withInitial(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ThreadLocal",
			"withInitial",
			"(Ljava/util/function/Supplier;)Ljava/lang/ThreadLocal;",
			arg0.object()
		);
	}
	JObject ThreadLocal::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	void ThreadLocal::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	void ThreadLocal::set(JObject arg0) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace java::lang

