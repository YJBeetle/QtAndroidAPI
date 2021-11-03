#include "../../../JObject.hpp"
#include "./ReferenceQueue.hpp"
#include "./Reference.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QJniObject forward
	Reference::Reference(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Reference::reachabilityFence(JObject arg0)
	{
		callStaticMethod<void>(
			"java.lang.ref.Reference",
			"reachabilityFence",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
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
	JObject Reference::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	jboolean Reference::isEnqueued()
	{
		return callMethod<jboolean>(
			"isEnqueued",
			"()Z"
		);
	}
	jboolean Reference::refersTo(JObject arg0)
	{
		return callMethod<jboolean>(
			"refersTo",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace java::lang::ref

