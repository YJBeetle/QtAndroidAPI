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
		
		// QJniObject forward
		template<typename ...Ts> explicit AsyncTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsyncTask(QJniObject obj);
		
		// Constructors
		AsyncTask();
		
		// Methods
		static void execute(JObject arg0);
		jboolean cancel(jboolean arg0);
		android::os::AsyncTask execute(JObjectArray arg0);
		android::os::AsyncTask executeOnExecutor(JObject arg0, JObjectArray arg1);
		JObject get();
		JObject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		android::os::AsyncTask_Status getStatus();
		jboolean isCancelled();
	};
} // namespace android::os

