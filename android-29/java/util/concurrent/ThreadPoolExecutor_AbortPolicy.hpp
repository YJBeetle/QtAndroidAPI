#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor_AbortPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		ThreadPoolExecutor_AbortPolicy(QAndroidJniObject obj);
		// Constructors
		ThreadPoolExecutor_AbortPolicy();
		
		// Methods
		void rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace java::util::concurrent

