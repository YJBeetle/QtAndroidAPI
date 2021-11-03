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
		
		// QJniObject forward
		template<typename ...Ts> explicit ThreadPoolExecutor_DiscardOldestPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThreadPoolExecutor_DiscardOldestPolicy(QJniObject obj);
		
		// Constructors
		ThreadPoolExecutor_DiscardOldestPolicy();
		
		// Methods
		void rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1) const;
	};
} // namespace java::util::concurrent

