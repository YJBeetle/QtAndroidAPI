#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor_CallerRunsPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		ThreadPoolExecutor_CallerRunsPolicy(QAndroidJniObject obj);
		// Constructors
		ThreadPoolExecutor_CallerRunsPolicy();
		
		// Methods
		void rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace java::util::concurrent

