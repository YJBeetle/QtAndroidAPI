#include "./ReferenceQueue.hpp"
#include "./Reference.hpp"

namespace java::lang::ref
{
	// Fields
	
	Reference::Reference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Reference::reachabilityFence(jobject arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.ref.Reference",
			"reachabilityFence",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Reference::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean Reference::enqueue()
	{
		return __thiz.callMethod<jboolean>(
			"enqueue",
			"()Z"
		);
	}
	jobject Reference::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Reference::isEnqueued()
	{
		return __thiz.callMethod<jboolean>(
			"isEnqueued",
			"()Z"
		);
	}
	jboolean Reference::refersTo(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"refersTo",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace java::lang::ref

