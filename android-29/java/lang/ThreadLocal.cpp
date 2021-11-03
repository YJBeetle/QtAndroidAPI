#include "./Thread.hpp"
#include "../util/concurrent/atomic/AtomicInteger.hpp"
#include "./ThreadLocal.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	ThreadLocal::ThreadLocal(QJniObject obj) : JObject(obj) {}
	
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
	jobject ThreadLocal::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ThreadLocal::remove()
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	void ThreadLocal::set(jobject arg0)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace java::lang

