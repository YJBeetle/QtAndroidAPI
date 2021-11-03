#pragma once

#include "../../../JObject.hpp"

namespace java::util
{
	class ArrayList;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class AbstractExecutorService : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractExecutorService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractExecutorService(QJniObject obj);
		
		// Constructors
		AbstractExecutorService();
		
		// Methods
		JObject invokeAll(JObject arg0);
		JObject invokeAll(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jobject invokeAny(JObject arg0);
		jobject invokeAny(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		JObject submit(JObject arg0);
		JObject submit(JObject arg0, jobject arg1);
	};
} // namespace java::util::concurrent

