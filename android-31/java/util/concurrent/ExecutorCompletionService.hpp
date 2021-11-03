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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExecutorCompletionService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecutorCompletionService(QAndroidJniObject obj);
		
		// Constructors
		ExecutorCompletionService(JObject arg0);
		ExecutorCompletionService(JObject arg0, JObject arg1);
		
		// Methods
		JObject poll() const;
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		JObject submit(JObject arg0) const;
		JObject submit(JObject arg0, JObject arg1) const;
		JObject take() const;
	};
} // namespace java::util::concurrent

