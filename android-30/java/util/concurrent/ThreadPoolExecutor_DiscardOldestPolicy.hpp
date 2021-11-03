#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor_DiscardOldestPolicy : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadPoolExecutor_DiscardOldestPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThreadPoolExecutor_DiscardOldestPolicy(QAndroidJniObject obj);
		
		// Constructors
		ThreadPoolExecutor_DiscardOldestPolicy();
		
		// Methods
		void rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace java::util::concurrent

