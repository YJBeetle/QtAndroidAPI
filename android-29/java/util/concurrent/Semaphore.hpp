#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class Semaphore : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Semaphore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Semaphore(QJniObject obj);
		
		// Constructors
		Semaphore(jint arg0);
		Semaphore(jint arg0, jboolean arg1);
		
		// Methods
		void acquire() const;
		void acquire(jint arg0) const;
		void acquireUninterruptibly() const;
		void acquireUninterruptibly(jint arg0) const;
		jint availablePermits() const;
		jint drainPermits() const;
		jint getQueueLength() const;
		jboolean hasQueuedThreads() const;
		jboolean isFair() const;
		void release() const;
		void release(jint arg0) const;
		JString toString() const;
		jboolean tryAcquire() const;
		jboolean tryAcquire(jint arg0) const;
		jboolean tryAcquire(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		jboolean tryAcquire(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
	};
} // namespace java::util::concurrent

