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
	
	JobInfo_Builder::JobInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JobInfo_Builder::JobInfo_Builder(jint &arg0, android::content::ComponentName &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobInfo$Builder",
			"(ILandroid/content/ComponentName;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject JobInfo_Builder::addTriggerContentUri(android::app::job::JobInfo_TriggerContentUri arg0)
	{
		return __thiz.callObjectMethod(
			"addTriggerContentUri",
			"(Landroid/app/job/JobInfo$TriggerContentUri;)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JobInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/job/JobInfo;"
		);
	}
	QAndroidJniObject JobInfo_Builder::setBackoffCriteria(jlong arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setBackoffCriteria",
			"(JI)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JobInfo_Builder::setClipData(android::content::ClipData arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setClipData",
			"(Landroid/content/ClipData;I)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject JobInfo_Builder::setEstimatedNetworkBytes(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"setEstimatedNetworkBytes",
			"(JJ)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JobInfo_Builder::setExtras(android::os::PersistableBundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/PersistableBundle;)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JobInfo_Builder::setImportantWhileForeground(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setImportantWhileForeground",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setMinimumLatency(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setMinimumLatency",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setOverrideDeadline(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setOverrideDeadline",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setPeriodic(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setPeriodic",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setPeriodic(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"setPeriodic",
			"(JJ)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JobInfo_Builder::setPersisted(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setPersisted",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setPrefetch(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setPrefetch",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setRequiredNetwork(android::net::NetworkRequest arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiredNetwork",
			"(Landroid/net/NetworkRequest;)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JobInfo_Builder::setRequiredNetworkType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiredNetworkType",
			"(I)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setRequiresBatteryNotLow(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresBatteryNotLow",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setRequiresCharging(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setRequiresDeviceIdle(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresDeviceIdle",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setRequiresStorageNotLow(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresStorageNotLow",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setTransientExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setTransientExtras",
			"(Landroid/os/Bundle;)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JobInfo_Builder::setTriggerContentMaxDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setTriggerContentMaxDelay",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject JobInfo_Builder::setTriggerContentUpdateDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setTriggerContentUpdateDelay",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0
		);
	}
} // namespace android::app::job

