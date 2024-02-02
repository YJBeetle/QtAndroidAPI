#pragma once

#include "../../../JArray.hpp"
#include "../../content/ClipData.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../net/NetworkRequest.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./JobInfo.def.hpp"

namespace android::app::job
{
	// Fields
	inline jint JobInfo::BACKOFF_POLICY_EXPONENTIAL()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"BACKOFF_POLICY_EXPONENTIAL"
		);
	}
	inline jint JobInfo::BACKOFF_POLICY_LINEAR()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"BACKOFF_POLICY_LINEAR"
		);
	}
	inline JObject JobInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.JobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong JobInfo::DEFAULT_INITIAL_BACKOFF_MILLIS()
	{
		return getStaticField<jlong>(
			"android.app.job.JobInfo",
			"DEFAULT_INITIAL_BACKOFF_MILLIS"
		);
	}
	inline jlong JobInfo::MAX_BACKOFF_DELAY_MILLIS()
	{
		return getStaticField<jlong>(
			"android.app.job.JobInfo",
			"MAX_BACKOFF_DELAY_MILLIS"
		);
	}
	inline jint JobInfo::NETWORK_BYTES_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_BYTES_UNKNOWN"
		);
	}
	inline jint JobInfo::NETWORK_TYPE_ANY()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_ANY"
		);
	}
	inline jint JobInfo::NETWORK_TYPE_CELLULAR()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_CELLULAR"
		);
	}
	inline jint JobInfo::NETWORK_TYPE_METERED()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_METERED"
		);
	}
	inline jint JobInfo::NETWORK_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_NONE"
		);
	}
	inline jint JobInfo::NETWORK_TYPE_NOT_ROAMING()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_NOT_ROAMING"
		);
	}
	inline jint JobInfo::NETWORK_TYPE_UNMETERED()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_UNMETERED"
		);
	}
	inline jint JobInfo::PRIORITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"PRIORITY_DEFAULT"
		);
	}
	inline jint JobInfo::PRIORITY_HIGH()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"PRIORITY_HIGH"
		);
	}
	inline jint JobInfo::PRIORITY_LOW()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"PRIORITY_LOW"
		);
	}
	inline jint JobInfo::PRIORITY_MAX()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"PRIORITY_MAX"
		);
	}
	inline jint JobInfo::PRIORITY_MIN()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo",
			"PRIORITY_MIN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong JobInfo::getMinFlexMillis()
	{
		return callStaticMethod<jlong>(
			"android.app.job.JobInfo",
			"getMinFlexMillis",
			"()J"
		);
	}
	inline jlong JobInfo::getMinPeriodMillis()
	{
		return callStaticMethod<jlong>(
			"android.app.job.JobInfo",
			"getMinPeriodMillis",
			"()J"
		);
	}
	inline jint JobInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean JobInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint JobInfo::getBackoffPolicy() const
	{
		return callMethod<jint>(
			"getBackoffPolicy",
			"()I"
		);
	}
	inline android::content::ClipData JobInfo::getClipData() const
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	inline jint JobInfo::getClipGrantFlags() const
	{
		return callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	inline jlong JobInfo::getEstimatedNetworkDownloadBytes() const
	{
		return callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	inline jlong JobInfo::getEstimatedNetworkUploadBytes() const
	{
		return callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	inline android::os::PersistableBundle JobInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jlong JobInfo::getFlexMillis() const
	{
		return callMethod<jlong>(
			"getFlexMillis",
			"()J"
		);
	}
	inline jint JobInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jlong JobInfo::getInitialBackoffMillis() const
	{
		return callMethod<jlong>(
			"getInitialBackoffMillis",
			"()J"
		);
	}
	inline jlong JobInfo::getIntervalMillis() const
	{
		return callMethod<jlong>(
			"getIntervalMillis",
			"()J"
		);
	}
	inline jlong JobInfo::getMaxExecutionDelayMillis() const
	{
		return callMethod<jlong>(
			"getMaxExecutionDelayMillis",
			"()J"
		);
	}
	inline jlong JobInfo::getMinLatencyMillis() const
	{
		return callMethod<jlong>(
			"getMinLatencyMillis",
			"()J"
		);
	}
	inline jlong JobInfo::getMinimumNetworkChunkBytes() const
	{
		return callMethod<jlong>(
			"getMinimumNetworkChunkBytes",
			"()J"
		);
	}
	inline jint JobInfo::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	inline jint JobInfo::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	inline android::net::NetworkRequest JobInfo::getRequiredNetwork() const
	{
		return callObjectMethod(
			"getRequiredNetwork",
			"()Landroid/net/NetworkRequest;"
		);
	}
	inline android::content::ComponentName JobInfo::getService() const
	{
		return callObjectMethod(
			"getService",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::os::Bundle JobInfo::getTransientExtras() const
	{
		return callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jlong JobInfo::getTriggerContentMaxDelay() const
	{
		return callMethod<jlong>(
			"getTriggerContentMaxDelay",
			"()J"
		);
	}
	inline jlong JobInfo::getTriggerContentUpdateDelay() const
	{
		return callMethod<jlong>(
			"getTriggerContentUpdateDelay",
			"()J"
		);
	}
	inline JArray JobInfo::getTriggerContentUris() const
	{
		return callObjectMethod(
			"getTriggerContentUris",
			"()[Landroid/app/job/JobInfo$TriggerContentUri;"
		);
	}
	inline jint JobInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean JobInfo::isExpedited() const
	{
		return callMethod<jboolean>(
			"isExpedited",
			"()Z"
		);
	}
	inline jboolean JobInfo::isImportantWhileForeground() const
	{
		return callMethod<jboolean>(
			"isImportantWhileForeground",
			"()Z"
		);
	}
	inline jboolean JobInfo::isPeriodic() const
	{
		return callMethod<jboolean>(
			"isPeriodic",
			"()Z"
		);
	}
	inline jboolean JobInfo::isPersisted() const
	{
		return callMethod<jboolean>(
			"isPersisted",
			"()Z"
		);
	}
	inline jboolean JobInfo::isPrefetch() const
	{
		return callMethod<jboolean>(
			"isPrefetch",
			"()Z"
		);
	}
	inline jboolean JobInfo::isRequireBatteryNotLow() const
	{
		return callMethod<jboolean>(
			"isRequireBatteryNotLow",
			"()Z"
		);
	}
	inline jboolean JobInfo::isRequireCharging() const
	{
		return callMethod<jboolean>(
			"isRequireCharging",
			"()Z"
		);
	}
	inline jboolean JobInfo::isRequireDeviceIdle() const
	{
		return callMethod<jboolean>(
			"isRequireDeviceIdle",
			"()Z"
		);
	}
	inline jboolean JobInfo::isRequireStorageNotLow() const
	{
		return callMethod<jboolean>(
			"isRequireStorageNotLow",
			"()Z"
		);
	}
	inline jboolean JobInfo::isUserInitiated() const
	{
		return callMethod<jboolean>(
			"isUserInitiated",
			"()Z"
		);
	}
	inline JString JobInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void JobInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::job;
#endif
