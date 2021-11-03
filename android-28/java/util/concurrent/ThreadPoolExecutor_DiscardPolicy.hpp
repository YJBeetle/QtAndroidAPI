#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace java::util::concurrent
{
	class ThreadPoolExecutor_DiscardPolicy : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ThreadPoolExecutor_DiscardPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThreadPoolExecutor_DiscardPolicy(QJniObject obj);
		
		// Constructors
		ThreadPoolExecutor_DiscardPolicy();
		
		// Methods
		void rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace java::util::concurrent

