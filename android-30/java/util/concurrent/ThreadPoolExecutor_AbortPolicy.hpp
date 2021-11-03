#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor_AbortPolicy : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadPoolExecutor_AbortPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThreadPoolExecutor_AbortPolicy(QAndroidJniObject obj);
		
		// Constructors
		ThreadPoolExecutor_AbortPolicy();
		
		// Methods
		void rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1) const;
	};
} // namespace java::util::concurrent

