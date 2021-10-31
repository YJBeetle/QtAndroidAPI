#include "./ReferenceQueue.hpp"
#include "./Reference.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QAndroidJniObject forward
	Reference::Reference(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean Reference::enqueue()
	{
		return callMethod<jboolean>(
			"enqueue",
			"()Z"
		);
	}
	jobject Reference::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Reference::isEnqueued()
	{
		return callMethod<jboolean>(
			"isEnqueued",
			"()Z"
		);
	}
	jboolean Reference::refersTo(jobject arg0)
	{
		return callMethod<jboolean>(
			"refersTo",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace java::lang::ref

