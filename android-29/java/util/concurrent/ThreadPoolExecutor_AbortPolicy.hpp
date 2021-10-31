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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadPoolExecutor_AbortPolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ThreadPoolExecutor_AbortPolicy(QAndroidJniObject obj);
		
		// Constructors
		ThreadPoolExecutor_AbortPolicy();
		
		// Methods
		void rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace java::util::concurrent

