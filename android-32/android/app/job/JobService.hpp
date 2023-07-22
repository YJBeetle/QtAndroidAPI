#pragma once

#include "./JobParameters.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../../JString.hpp"
#include "./JobService.def.hpp"

namespace android::app::job
{
	// Fields
	inline JString JobService::PERMISSION_BIND()
	{
		return getStaticObjectField(
			"android.app.job.JobService",
			"PERMISSION_BIND",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline JobService::JobService()
		: android::app::Service(
			"android.app.job.JobService",
			"()V"
		) {}
	
	// Methods
	inline void JobService::jobFinished(android::app::job::JobParameters arg0, jboolean arg1) const
	{
		callMethod<void>(
			"jobFinished",
			"(Landroid/app/job/JobParameters;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline JObject JobService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline jboolean JobService::onStartJob(android::app::job::JobParameters arg0) const
	{
		return callMethod<jboolean>(
			"onStartJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.object()
		);
	}
	inline jboolean JobService::onStopJob(android::app::job::JobParameters arg0) const
	{
		return callMethod<jboolean>(
			"onStopJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.object()
		);
	}
} // namespace android::app::job

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::job;
#endif
