#pragma once

#include "../../lang/Thread.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class ThreadGroup;
}
class JThrowable;
namespace java::security
{
	class AccessControlContext;
}
namespace java::util::concurrent
{
	class ForkJoinPool;
}

namespace java::util::concurrent
{
	class ForkJoinWorkerThread : public java::lang::Thread
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ForkJoinWorkerThread(const char *className, const char *sig, Ts...agv) : java::lang::Thread(className, sig, std::forward<Ts>(agv)...) {}
		ForkJoinWorkerThread(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::util::concurrent::ForkJoinPool getPool() const;
		jint getPoolIndex() const;
		void run() const;
	};
} // namespace java::util::concurrent

