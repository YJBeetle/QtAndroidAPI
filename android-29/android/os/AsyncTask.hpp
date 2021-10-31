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
		static QAndroidJniObject SERIAL_EXECUTOR();
		static QAndroidJniObject THREAD_POOL_EXECUTOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsyncTask(QAndroidJniObject obj);
		
		// Constructors
		AsyncTask();
		
		// Methods
		static void execute(__JniBaseClass arg0);
		jboolean cancel(jboolean arg0);
		QAndroidJniObject execute(jobjectArray arg0);
		QAndroidJniObject executeOnExecutor(__JniBaseClass arg0, jobjectArray arg1);
		jobject get();
		jobject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject getStatus();
		jboolean isCancelled();
	};
} // namespace android::os

