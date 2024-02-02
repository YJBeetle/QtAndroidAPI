#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::lang::invoke
{
	class VarHandle;
}
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
	class Phaser : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Phaser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Phaser(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Phaser();
		Phaser(jint arg0);
		Phaser(java::util::concurrent::Phaser &arg0);
		Phaser(java::util::concurrent::Phaser &arg0, jint arg1);
		
		// Methods
		jint arrive() const;
		jint arriveAndAwaitAdvance() const;
		jint arriveAndDeregister() const;
		jint awaitAdvance(jint arg0) const;
		jint awaitAdvanceInterruptibly(jint arg0) const;
		jint awaitAdvanceInterruptibly(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
		jint bulkRegister(jint arg0) const;
		void forceTermination() const;
		jint getArrivedParties() const;
		java::util::concurrent::Phaser getParent() const;
		jint getPhase() const;
		jint getRegisteredParties() const;
		java::util::concurrent::Phaser getRoot() const;
		jint getUnarrivedParties() const;
		jboolean isTerminated() const;
		jint register_() const;
		JString toString() const;
	};
} // namespace java::util::concurrent

