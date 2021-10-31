#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::atomic
{
	class AtomicReference;
}

namespace java::util::concurrent
{
	class Phaser : public __JniBaseClass
	{
	public:
		// Fields
		
		Phaser(QAndroidJniObject obj);
		// Constructors
		Phaser();
		Phaser(jint arg0);
		Phaser(java::util::concurrent::Phaser &arg0);
		Phaser(java::util::concurrent::Phaser &arg0, jint arg1);
		
		// Methods
		jint arrive();
		jint arriveAndAwaitAdvance();
		jint arriveAndDeregister();
		jint awaitAdvance(jint arg0);
		jint awaitAdvanceInterruptibly(jint arg0);
		jint awaitAdvanceInterruptibly(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jint bulkRegister(jint arg0);
		void forceTermination();
		jint getArrivedParties();
		QAndroidJniObject getParent();
		jint getPhase();
		jint getRegisteredParties();
		QAndroidJniObject getRoot();
		jint getUnarrivedParties();
		jboolean isTerminated();
		jint _register();
		jstring toString();
	};
} // namespace java::util::concurrent

