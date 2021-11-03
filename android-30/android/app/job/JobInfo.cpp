#include "../../../JArray.hpp"
#include "../../content/ClipData.hpp"
#include "../../content/ComponentName.hpp"
#include "../../net/NetworkRequest.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	JObject JobInfo::CREATOR()
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
	JobInfo::JobInfo(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint JobInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean JobInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint JobInfo::getBackoffPolicy() const
	{
		return callMethod<jint>(
			"getBackoffPolicy",
			"()I"
		);
	}
	android::content::ClipData JobInfo::getClipData() const
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	jint JobInfo::getClipGrantFlags() const
	{
		return callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	jlong JobInfo::getEstimatedNetworkDownloadBytes() const
	{
		return callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	jlong JobInfo::getEstimatedNetworkUploadBytes() const
	{
		return callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	android::os::PersistableBundle JobInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jlong JobInfo::getFlexMillis() const
	{
		return callMethod<jlong>(
			"getFlexMillis",
			"()J"
		);
	}
	jint JobInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jlong JobInfo::getInitialBackoffMillis() const
	{
		return callMethod<jlong>(
			"getInitialBackoffMillis",
			"()J"
		);
	}
	jlong JobInfo::getIntervalMillis() const
	{
		return callMethod<jlong>(
			"getIntervalMillis",
			"()J"
		);
	}
	jlong JobInfo::getMaxExecutionDelayMillis() const
	{
		return callMethod<jlong>(
			"getMaxExecutionDelayMillis",
			"()J"
		);
	}
	jlong JobInfo::getMinLatencyMillis() const
	{
		return callMethod<jlong>(
			"getMinLatencyMillis",
			"()J"
		);
	}
	jint JobInfo::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	android::net::NetworkRequest JobInfo::getRequiredNetwork() const
	{
		return callObjectMethod(
			"getRequiredNetwork",
			"()Landroid/net/NetworkRequest;"
		);
	}
	android::content::ComponentName JobInfo::getService() const
	{
		return callObjectMethod(
			"getService",
			"()Landroid/content/ComponentName;"
		);
	}
	android::os::Bundle JobInfo::getTransientExtras() const
	{
		return callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jlong JobInfo::getTriggerContentMaxDelay() const
	{
		return callMethod<jlong>(
			"getTriggerContentMaxDelay",
			"()J"
		);
	}
	jlong JobInfo::getTriggerContentUpdateDelay() const
	{
		return callMethod<jlong>(
			"getTriggerContentUpdateDelay",
			"()J"
		);
	}
	JArray JobInfo::getTriggerContentUris() const
	{
		return callObjectMethod(
			"getTriggerContentUris",
			"()[Landroid/app/job/JobInfo$TriggerContentUri;"
		);
	}
	jint JobInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean JobInfo::isImportantWhileForeground() const
	{
		return callMethod<jboolean>(
			"isImportantWhileForeground",
			"()Z"
		);
	}
	jboolean JobInfo::isPeriodic() const
	{
		return callMethod<jboolean>(
			"isPeriodic",
			"()Z"
		);
	}
	jboolean JobInfo::isPersisted() const
	{
		return callMethod<jboolean>(
			"isPersisted",
			"()Z"
		);
	}
	jboolean JobInfo::isPrefetch() const
	{
		return callMethod<jboolean>(
			"isPrefetch",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireBatteryNotLow() const
	{
		return callMethod<jboolean>(
			"isRequireBatteryNotLow",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireCharging() const
	{
		return callMethod<jboolean>(
			"isRequireCharging",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireDeviceIdle() const
	{
		return callMethod<jboolean>(
			"isRequireDeviceIdle",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireStorageNotLow() const
	{
		return callMethod<jboolean>(
			"isRequireStorageNotLow",
			"()Z"
		);
	}
	JString JobInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void JobInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

