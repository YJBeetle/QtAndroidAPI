#include "./JobParameters.hpp"
#include "../../content/Intent.hpp"
#include "./JobService.hpp"

namespace android::app::job
{
	// Fields
	jstring JobService::PERMISSION_BIND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.job.JobService",
			"PERMISSION_BIND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	JobService::JobService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JobService::JobService()
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobService",
			"()V"
		);
	}
	
	// Methods
	void JobService::jobFinished(android::app::job::JobParameters arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"jobFinished",
			"(Landroid/app/job/JobParameters;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject JobService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	jboolean JobService::onStartJob(android::app::job::JobParameters arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onStartJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean JobService::onStopJob(android::app::job::JobParameters arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onStopJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app::job

