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
		
		// QJniObject forward
		template<typename ...Ts> explicit CyclicBarrier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CyclicBarrier(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CyclicBarrier(jint arg0);
		CyclicBarrier(jint arg0, JObject arg1);
		
		// Methods
		jint await() const;
		jint await(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		jint getNumberWaiting() const;
		jint getParties() const;
		jboolean isBroken() const;
		void reset() const;
	};
} // namespace java::util::concurrent

