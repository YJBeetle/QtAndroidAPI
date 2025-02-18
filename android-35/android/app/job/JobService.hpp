#pragma once

#include "../Notification.def.hpp"
#include "./JobParameters.def.hpp"
#include "./JobWorkItem.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../../JString.hpp"
#include "./JobService.def.hpp"

namespace android::app::job
{
	// Fields
	inline jint JobService::JOB_END_NOTIFICATION_POLICY_DETACH()
	{
		return getStaticField<jint>(
			"android.app.job.JobService",
			"JOB_END_NOTIFICATION_POLICY_DETACH"
		);
	}
	inline jint JobService::JOB_END_NOTIFICATION_POLICY_REMOVE()
	{
		return getStaticField<jint>(
			"android.app.job.JobService",
			"JOB_END_NOTIFICATION_POLICY_REMOVE"
		);
	}
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
	inline void JobService::onNetworkChanged(android::app::job::JobParameters arg0) const
	{
		callMethod<void>(
			"onNetworkChanged",
			"(Landroid/app/job/JobParameters;)V",
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
	inline void JobService::setNotification(android::app::job::JobParameters arg0, jint arg1, android::app::Notification arg2, jint arg3) const
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
	inline void JobService::updateEstimatedNetworkBytes(android::app::job::JobParameters arg0, jlong arg1, jlong arg2) const
	{
		callMethod<void>(
			"updateEstimatedNetworkBytes",
			"(Landroid/app/job/JobParameters;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void JobService::updateEstimatedNetworkBytes(android::app::job::JobParameters arg0, android::app::job::JobWorkItem arg1, jlong arg2, jlong arg3) const
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
	inline void JobService::updateTransferredNetworkBytes(android::app::job::JobParameters arg0, jlong arg1, jlong arg2) const
	{
		callMethod<void>(
			"updateTransferredNetworkBytes",
			"(Landroid/app/job/JobParameters;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void JobService::updateTransferredNetworkBytes(android::app::job::JobParameters arg0, android::app::job::JobWorkItem arg1, jlong arg2, jlong arg3) const
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
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::job;
#endif
