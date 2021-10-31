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
		
		// QJniObject forward
		template<typename ...Ts> explicit ThreadPoolExecutor_CallerRunsPolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ThreadPoolExecutor_CallerRunsPolicy(QJniObject obj);
		
		// Constructors
		ThreadPoolExecutor_CallerRunsPolicy();
		
		// Methods
		void rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace java::util::concurrent

