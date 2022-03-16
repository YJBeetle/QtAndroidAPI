#pragma once

#include "../Service.def.hpp"
#include "./JobParameters.def.hpp"
#include "./JobServiceEngine.def.hpp"

namespace android::app::job
{
	// Fields
	
	// Constructors
	inline JobServiceEngine::JobServiceEngine(android::app::Service arg0)
		: JObject(
			"android.app.job.JobServiceEngine",
			"(Landroid/app/Service;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject JobServiceEngine::getBinder() const
	{
		return callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;"
		);
	}
	inline void JobServiceEngine::jobFinished(android::app::job::JobParameters arg0, jboolean arg1) const
	{
		callMethod<void>(
			"jobFinished",
			"(Landroid/app/job/JobParameters;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean JobServiceEngine::onStartJob(android::app::job::JobParameters arg0) const
	{
		return callMethod<jboolean>(
			"onStartJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.object()
		);
	}
	inline jboolean JobServiceEngine::onStopJob(android::app::job::JobParameters arg0) const
	{
		return callMethod<jboolean>(
			"onStopJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.object()
		);
	}
} // namespace android::app::job

// Base class headers

