#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Thread.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class ThreadGroup;
}
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
		
		ForkJoinWorkerThread(QAndroidJniObject obj);
		// Constructors
		ForkJoinWorkerThread() = default;
		
		// Methods
		QAndroidJniObject getPool();
		jint getPoolIndex();
		void run();
	};
} // namespace java::util::concurrent

