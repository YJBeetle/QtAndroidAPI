#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor_CallerRunsPolicy : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadPoolExecutor_CallerRunsPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThreadPoolExecutor_CallerRunsPolicy(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ThreadPoolExecutor_CallerRunsPolicy();
		
		// Methods
		void rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1) const;
	};
} // namespace java::util::concurrent

