#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace java::util::concurrent
{
	class CyclicBarrier : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CyclicBarrier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CyclicBarrier(QAndroidJniObject obj);
		
		// Constructors
		CyclicBarrier(jint arg0);
		CyclicBarrier(jint arg0, JObject arg1);
		
		// Methods
		jint await();
		jint await(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jint getNumberWaiting();
		jint getParties();
		jboolean isBroken();
		void reset();
	};
} // namespace java::util::concurrent

