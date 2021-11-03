#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
namespace java::lang
{
	class Thread;
}
class JThrowable;
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class FutureTask : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FutureTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FutureTask(QJniObject obj);
		
		// Constructors
		FutureTask(JObject arg0);
		FutureTask(JObject arg0, JObject arg1);
		
		// Methods
		jboolean cancel(jboolean arg0);
		JObject get();
		JObject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jboolean isCancelled();
		jboolean isDone();
		void run();
		JString toString();
	};
} // namespace java::util::concurrent

