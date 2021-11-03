#include "../Service.hpp"
#include "./JobParameters.hpp"
#include "./JobServiceEngine.hpp"

namespace android::app::job
{
	// Fields
	
	// QAndroidJniObject forward
	JobServiceEngine::JobServiceEngine(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	JobServiceEngine::JobServiceEngine(android::app::Service arg0)
		: JObject(
			"android.app.job.JobServiceEngine",
			"(Landroid/app/Service;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject JobServiceEngine::getBinder() const
	{
		return callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void JobServiceEngine::jobFinished(android::app::job::JobParameters arg0, jboolean arg1) const
	{
		callMethod<void>(
			"jobFinished",
			"(Landroid/app/job/JobParameters;Z)V",
			arg0.object(),
			arg1
		);
	}
	jboolean JobServiceEngine::onStartJob(android::app::job::JobParameters arg0) const
	{
		return callMethod<jboolean>(
			"onStartJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.object()
		);
	}
	jboolean JobServiceEngine::onStopJob(android::app::job::JobParameters arg0) const
	{
		return callMethod<jboolean>(
			"onStopJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.object()
		);
	}
} // namespace android::app::job

