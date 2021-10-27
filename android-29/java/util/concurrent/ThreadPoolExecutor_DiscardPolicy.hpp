#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor_DiscardPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		ThreadPoolExecutor_DiscardPolicy(QAndroidJniObject obj);
		// Constructors
		ThreadPoolExecutor_DiscardPolicy();
		
		// Methods
		void rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace java::util::concurrent

