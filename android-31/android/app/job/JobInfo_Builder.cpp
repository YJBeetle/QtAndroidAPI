#include "./JobInfo.hpp"
#include "./JobInfo_TriggerContentUri.hpp"
#include "../../content/ClipData.hpp"
#include "../../content/ComponentName.hpp"
#include "../../net/NetworkRequest.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./JobInfo_Builder.hpp"

namespace android::app::job
{
	// Fields
	
	// QJniObject forward
	JobInfo_Builder::JobInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	JobInfo_Builder::JobInfo_Builder(jint arg0, android::content::ComponentName arg1)
		: JObject(
			"android.app.job.JobInfo$Builder",
			"(ILandroid/content/ComponentName;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	android::app::job::JobInfo_Builder JobInfo_Builder::addTriggerContentUri(android::app::job::JobInfo_TriggerContentUri arg0)
	{
		return callObjectMethod(
			"addTriggerContentUri",
			"(Landroid/app/job/JobInfo$TriggerContentUri;)Landroid/app/job/JobInfo$Builder;",
			arg0.object()
		);
	}
	android::app::job::JobInfo JobInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/job/JobInfo;"
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setBackoffCriteria(jlong arg0, jint arg1)
	{
		return callObjectMethod(
			"setBackoffCriteria",
			"(JI)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setClipData(android::content::ClipData arg0, jint arg1)
	{
		return callObjectMethod(
			"setClipData",
			"(Landroid/content/ClipData;I)Landroid/app/job/JobInfo$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setEstimatedNetworkBytes(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"setEstimatedNetworkBytes",
			"(JJ)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setExpedited(jboolean arg0)
	{
		return callObjectMethod(
			"setExpedited",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setExtras(android::os::PersistableBundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/PersistableBundle;)Landroid/app/job/JobInfo$Builder;",
			arg0.object()
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setImportantWhileForeground(jboolean arg0)
	{
		return callObjectMethod(
			"setImportantWhileForeground",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setMinimumLatency(jlong arg0)
	{
		return callObjectMethod(
			"setMinimumLatency",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setOverrideDeadline(jlong arg0)
	{
		return callObjectMethod(
			"setOverrideDeadline",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setPeriodic(jlong arg0)
	{
		return callObjectMethod(
			"setPeriodic",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setPeriodic(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"setPeriodic",
			"(JJ)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setPersisted(jboolean arg0)
	{
		return callObjectMethod(
			"setPersisted",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setPrefetch(jboolean arg0)
	{
		return callObjectMethod(
			"setPrefetch",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setRequiredNetwork(android::net::NetworkRequest arg0)
	{
		return callObjectMethod(
			"setRequiredNetwork",
			"(Landroid/net/NetworkRequest;)Landroid/app/job/JobInfo$Builder;",
			arg0.object()
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setRequiredNetworkType(jint arg0)
	{
		return callObjectMethod(
			"setRequiredNetworkType",
			"(I)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setRequiresBatteryNotLow(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresBatteryNotLow",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setRequiresCharging(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setRequiresDeviceIdle(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresDeviceIdle",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setRequiresStorageNotLow(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresStorageNotLow",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setTransientExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setTransientExtras",
			"(Landroid/os/Bundle;)Landroid/app/job/JobInfo$Builder;",
			arg0.object()
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setTriggerContentMaxDelay(jlong arg0)
	{
		return callObjectMethod(
			"setTriggerContentMaxDelay",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	android::app::job::JobInfo_Builder JobInfo_Builder::setTriggerContentUpdateDelay(jlong arg0)
	{
		return callObjectMethod(
			"setTriggerContentUpdateDelay",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
} // namespace android::app::job

