#include "../Service.hpp"
#include "./JobParameters.hpp"
#include "./JobServiceEngine.hpp"

namespace android::app::job
{
	// Fields
	
	JobServiceEngine::JobServiceEngine(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JobServiceEngine::JobServiceEngine(android::app::Service arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobServiceEngine",
			"(Landroid/app/Service;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject JobServiceEngine::getBinder()
	{
		return __thiz.callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void JobServiceEngine::jobFinished(android::app::job::JobParameters arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"jobFinished",
			"(Landroid/app/job/JobParameters;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean JobServiceEngine::onStartJob(android::app::job::JobParameters arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onStartJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean JobServiceEngine::onStopJob(android::app::job::JobParameters arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onStopJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app::job

