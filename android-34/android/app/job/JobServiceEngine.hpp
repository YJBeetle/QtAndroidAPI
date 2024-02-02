#pragma once

#include "../Notification.def.hpp"
#include "../Service.def.hpp"
#include "./JobParameters.def.hpp"
#include "./JobWorkItem.def.hpp"
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
	inline void JobServiceEngine::onNetworkChanged(android::app::job::JobParameters arg0) const
	{
		callMethod<void>(
			"onNetworkChanged",
			"(Landroid/app/job/JobParameters;)V",
			arg0.object()
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
	inline void JobServiceEngine::setNotification(android::app::job::JobParameters arg0, jint arg1, android::app::Notification arg2, jint arg3) const
	{
		callMethod<void>(
			"setNotification",
			"(Landroid/app/job/JobParameters;ILandroid/app/Notification;I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline void JobServiceEngine::updateEstimatedNetworkBytes(android::app::job::JobParameters arg0, android::app::job::JobWorkItem arg1, jlong arg2, jlong arg3) const
	{
		callMethod<void>(
			"updateEstimatedNetworkBytes",
			"(Landroid/app/job/JobParameters;Landroid/app/job/JobWorkItem;JJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void JobServiceEngine::updateTransferredNetworkBytes(android::app::job::JobParameters arg0, android::app::job::JobWorkItem arg1, jlong arg2, jlong arg3) const
	{
		callMethod<void>(
			"updateTransferredNetworkBytes",
			"(Landroid/app/job/JobParameters;Landroid/app/job/JobWorkItem;JJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::app::job

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::job;
#endif
