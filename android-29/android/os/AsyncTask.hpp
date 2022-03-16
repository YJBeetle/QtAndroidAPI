#pragma once

#include "../../JObject.hpp"

class JObjectArray;
namespace android::os
{
	class AsyncTask_Status;
}
class JObject;
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace android::os
{
	class AsyncTask : public JObject
	{
	public:
		// Fields
		static JObject SERIAL_EXECUTOR();
		static JObject THREAD_POOL_EXECUTOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsyncTask(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AsyncTask();
		
		// Methods
		static void execute(JObject arg0);
		jboolean cancel(jboolean arg0) const;
		android::os::AsyncTask execute(JObjectArray arg0) const;
		android::os::AsyncTask executeOnExecutor(JObject arg0, JObjectArray arg1) const;
		JObject get() const;
		JObject get(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		android::os::AsyncTask_Status getStatus() const;
		jboolean isCancelled() const;
	};
} // namespace android::os

