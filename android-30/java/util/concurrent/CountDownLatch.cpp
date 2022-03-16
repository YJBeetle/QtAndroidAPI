#include "../../../JString.hpp"
#include "./TimeUnit.hpp"
#include "./CountDownLatch.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	CountDownLatch::CountDownLatch(jint arg0)
		: JObject(
			"java.util.concurrent.CountDownLatch",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jboolean CountDownLatch::await(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void CountDownLatch::await() const
	{
		callMethod<void>(
			"await",
			"()V"
		);
	}
	void CountDownLatch::countDown() const
	{
		callMethod<void>(
			"countDown",
			"()V"
		);
	}
	jlong CountDownLatch::getCount() const
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	JString CountDownLatch::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

