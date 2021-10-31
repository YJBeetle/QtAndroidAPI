#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class AsyncTask_Status;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace android::os
{
	class AsyncTask : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass SERIAL_EXECUTOR();
		static __JniBaseClass THREAD_POOL_EXECUTOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsyncTask(QAndroidJniObject obj);
		
		// Constructors
		AsyncTask();
		
		// Methods
		static void execute(__JniBaseClass arg0);
		jboolean cancel(jboolean arg0);
		android::os::AsyncTask execute(jobjectArray arg0);
		android::os::AsyncTask executeOnExecutor(__JniBaseClass arg0, jobjectArray arg1);
		jobject get();
		jobject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		android::os::AsyncTask_Status getStatus();
		jboolean isCancelled();
	};
} // namespace android::os

