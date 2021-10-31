#include "../../content/ClipData.hpp"
#include "../../content/ComponentName.hpp"
#include "../../net/NetworkRequest.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./JobInfo.hpp"

namespace android::app::job
{
	// Fields
	jint JobInfo::BACKOFF_POLICY_EXPONENTIAL()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"BACKOFF_POLICY_EXPONENTIAL"
		);
	}
	jint JobInfo::BACKOFF_POLICY_LINEAR()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"BACKOFF_POLICY_LINEAR"
		);
	}
	__JniBaseClass JobInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.JobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong JobInfo::DEFAULT_INITIAL_BACKOFF_MILLIS()
	{
		return getStaticField<jlong>(
			"android.app.job.JobInfo",
			"DEFAULT_INITIAL_BACKOFF_MILLIS"
		);
	}
	jlong JobInfo::MAX_BACKOFF_DELAY_MILLIS()
	{
		return getStaticField<jlong>(
			"android.app.job.JobInfo",
			"MAX_BACKOFF_DELAY_MILLIS"
		);
	}
	jint JobInfo::NETWORK_BYTES_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_BYTES_UNKNOWN"
		);
	}
	jint JobInfo::NETWORK_TYPE_ANY()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_ANY"
		);
	}
	jint JobInfo::NETWORK_TYPE_CELLULAR()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_CELLULAR"
		);
	}
	jint JobInfo::NETWORK_TYPE_METERED()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_METERED"
		);
	}
	jint JobInfo::NETWORK_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_NONE"
		);
	}
	jint JobInfo::NETWORK_TYPE_NOT_ROAMING()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_NOT_ROAMING"
		);
	}
	jint JobInfo::NETWORK_TYPE_UNMETERED()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_UNMETERED"
		);
	}
	
	// QAndroidJniObject forward
	JobInfo::JobInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jlong JobInfo::getMinFlexMillis()
	{
		return callStaticMethod<jlong>(
			"android.app.job.JobInfo",
			"getMinFlexMillis",
			"()J"
		);
	}
	jlong JobInfo::getMinPeriodMillis()
	{
		return callStaticMethod<jlong>(
			"android.app.job.JobInfo",
			"getMinPeriodMillis",
			"()J"
		);
	}
	jint JobInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean JobInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint JobInfo::getBackoffPolicy()
	{
		return callMethod<jint>(
			"getBackoffPolicy",
			"()I"
		);
	}
	android::content::ClipData JobInfo::getClipData()
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	jint JobInfo::getClipGrantFlags()
	{
		return callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	jlong JobInfo::getEstimatedNetworkDownloadBytes()
	{
		return callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	jlong JobInfo::getEstimatedNetworkUploadBytes()
	{
		return callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	android::os::PersistableBundle JobInfo::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jlong JobInfo::getFlexMillis()
	{
		return callMethod<jlong>(
			"getFlexMillis",
			"()J"
		);
	}
	jint JobInfo::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jlong JobInfo::getInitialBackoffMillis()
	{
		return callMethod<jlong>(
			"getInitialBackoffMillis",
			"()J"
		);
	}
	jlong JobInfo::getIntervalMillis()
	{
		return callMethod<jlong>(
			"getIntervalMillis",
			"()J"
		);
	}
	jlong JobInfo::getMaxExecutionDelayMillis()
	{
		return callMethod<jlong>(
			"getMaxExecutionDelayMillis",
			"()J"
		);
	}
	jlong JobInfo::getMinLatencyMillis()
	{
		return callMethod<jlong>(
			"getMinLatencyMillis",
			"()J"
		);
	}
	jint JobInfo::getNetworkType()
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	android::net::NetworkRequest JobInfo::getRequiredNetwork()
	{
		return callObjectMethod(
			"getRequiredNetwork",
			"()Landroid/net/NetworkRequest;"
		);
	}
	android::content::ComponentName JobInfo::getService()
	{
		return callObjectMethod(
			"getService",
			"()Landroid/content/ComponentName;"
		);
	}
	android::os::Bundle JobInfo::getTransientExtras()
	{
		return callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jlong JobInfo::getTriggerContentMaxDelay()
	{
		return callMethod<jlong>(
			"getTriggerContentMaxDelay",
			"()J"
		);
	}
	jlong JobInfo::getTriggerContentUpdateDelay()
	{
		return callMethod<jlong>(
			"getTriggerContentUpdateDelay",
			"()J"
		);
	}
	jarray JobInfo::getTriggerContentUris()
	{
		return callObjectMethod(
			"getTriggerContentUris",
			"()[Landroid/app/job/JobInfo$TriggerContentUri;"
		).object<jarray>();
	}
	jint JobInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean JobInfo::isImportantWhileForeground()
	{
		return callMethod<jboolean>(
			"isImportantWhileForeground",
			"()Z"
		);
	}
	jboolean JobInfo::isPeriodic()
	{
		return callMethod<jboolean>(
			"isPeriodic",
			"()Z"
		);
	}
	jboolean JobInfo::isPersisted()
	{
		return callMethod<jboolean>(
			"isPersisted",
			"()Z"
		);
	}
	jboolean JobInfo::isPrefetch()
	{
		return callMethod<jboolean>(
			"isPrefetch",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireBatteryNotLow()
	{
		return callMethod<jboolean>(
			"isRequireBatteryNotLow",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireCharging()
	{
		return callMethod<jboolean>(
			"isRequireCharging",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireDeviceIdle()
	{
		return callMethod<jboolean>(
			"isRequireDeviceIdle",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireStorageNotLow()
	{
		return callMethod<jboolean>(
			"isRequireStorageNotLow",
			"()Z"
		);
	}
	jstring JobInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void JobInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

