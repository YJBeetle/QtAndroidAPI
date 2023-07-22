#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
namespace java::lang
{
	class Thread;
}
class JThrowable;
namespace java::lang::invoke
{
	class VarHandle;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FutureTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FutureTask(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		FutureTask(JObject arg0);
		FutureTask(JObject arg0, JObject arg1);
		
		// Methods
		jboolean cancel(jboolean arg0) const;
		JThrowable exceptionNow() const;
		JObject get() const;
		JObject get(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		jboolean isCancelled() const;
		jboolean isDone() const;
		JObject resultNow() const;
		void run() const;
		JObject state() const;
		JString toString() const;
	};
} // namespace java::util::concurrent

