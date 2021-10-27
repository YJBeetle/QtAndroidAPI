#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor_DiscardOldestPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		ThreadPoolExecutor_DiscardOldestPolicy(QAndroidJniObject obj);
		// Constructors
		ThreadPoolExecutor_DiscardOldestPolicy();
		
		// Methods
		void rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace java::util::concurrent

