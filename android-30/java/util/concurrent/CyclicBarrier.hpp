#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CyclicBarrier : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CyclicBarrier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CyclicBarrier(QAndroidJniObject obj);
		
		// Constructors
		CyclicBarrier(jint arg0);
		CyclicBarrier(jint arg0, __JniBaseClass arg1);
		
		// Methods
		jint await();
		jint await(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jint getNumberWaiting();
		jint getParties();
		jboolean isBroken();
		void reset();
	};
} // namespace java::util::concurrent

