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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ForkJoinWorkerThread(const char *className, const char *sig, Ts...agv) : java::lang::Thread(className, sig, std::forward<Ts>(agv)...) {}
		ForkJoinWorkerThread(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getPool();
		jint getPoolIndex();
		void run();
	};
} // namespace java::util::concurrent

