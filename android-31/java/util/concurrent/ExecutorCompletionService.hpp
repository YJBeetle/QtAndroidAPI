#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::util::concurrent
{
	class AbstractExecutorService;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class ExecutorCompletionService : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecutorCompletionService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecutorCompletionService(QJniObject obj);
		
		// Constructors
		ExecutorCompletionService(JObject arg0);
		ExecutorCompletionService(JObject arg0, JObject arg1);
		
		// Methods
		JObject poll();
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		JObject submit(JObject arg0);
		JObject submit(JObject arg0, JObject arg1);
		JObject take();
	};
} // namespace java::util::concurrent

