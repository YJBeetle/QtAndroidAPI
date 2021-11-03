#include "./JobParameters.hpp"
#include "../../content/Intent.hpp"
#include "../../../JString.hpp"
#include "./JobService.hpp"

namespace android::app::job
{
	// Fields
	JString JobService::PERMISSION_BIND()
	{
		return getStaticObjectField(
			"android.app.job.JobService",
			"PERMISSION_BIND",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	JobService::JobService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	JobService::JobService()
		: android::app::Service(
			"android.app.job.JobService",
			"()V"
		) {}
	
	// Methods
	void JobService::jobFinished(android::app::job::JobParameters arg0, jboolean arg1)
	{
		callMethod<void>(
			"jobFinished",
			"(Landroid/app/job/JobParameters;Z)V",
			arg0.object(),
			arg1
		);
	}
	JObject JobService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	jboolean JobService::onStartJob(android::app::job::JobParameters arg0)
	{
		return callMethod<jboolean>(
			"onStartJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.object()
		);
	}
	jboolean JobService::onStopJob(android::app::job::JobParameters arg0)
	{
		return callMethod<jboolean>(
			"onStopJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.object()
		);
	}
} // namespace android::app::job

