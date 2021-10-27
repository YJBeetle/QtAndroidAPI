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
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"BACKOFF_POLICY_EXPONENTIAL"
		);
	}
	jint JobInfo::BACKOFF_POLICY_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"BACKOFF_POLICY_LINEAR"
		);
	}
	QAndroidJniObject JobInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.job.JobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong JobInfo::DEFAULT_INITIAL_BACKOFF_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.job.JobInfo",
			"DEFAULT_INITIAL_BACKOFF_MILLIS"
		);
	}
	jlong JobInfo::MAX_BACKOFF_DELAY_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.job.JobInfo",
			"MAX_BACKOFF_DELAY_MILLIS"
		);
	}
	jint JobInfo::NETWORK_BYTES_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_BYTES_UNKNOWN"
		);
	}
	jint JobInfo::NETWORK_TYPE_ANY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_ANY"
		);
	}
	jint JobInfo::NETWORK_TYPE_CELLULAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_CELLULAR"
		);
	}
	jint JobInfo::NETWORK_TYPE_METERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_METERED"
		);
	}
	jint JobInfo::NETWORK_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_NONE"
		);
	}
	jint JobInfo::NETWORK_TYPE_NOT_ROAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_NOT_ROAMING"
		);
	}
	jint JobInfo::NETWORK_TYPE_UNMETERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_UNMETERED"
		);
	}
	
	JobInfo::JobInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong JobInfo::getMinFlexMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.app.job.JobInfo",
			"getMinFlexMillis",
			"()J"
		);
	}
	jlong JobInfo::getMinPeriodMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.app.job.JobInfo",
			"getMinPeriodMillis",
			"()J"
		);
	}
	jint JobInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean JobInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint JobInfo::getBackoffPolicy()
	{
		return __thiz.callMethod<jint>(
			"getBackoffPolicy",
			"()I"
		);
	}
	QAndroidJniObject JobInfo::getClipData()
	{
		return __thiz.callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	jint JobInfo::getClipGrantFlags()
	{
		return __thiz.callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	jlong JobInfo::getEstimatedNetworkDownloadBytes()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	jlong JobInfo::getEstimatedNetworkUploadBytes()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	QAndroidJniObject JobInfo::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jlong JobInfo::getFlexMillis()
	{
		return __thiz.callMethod<jlong>(
			"getFlexMillis",
			"()J"
		);
	}
	jint JobInfo::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jlong JobInfo::getInitialBackoffMillis()
	{
		return __thiz.callMethod<jlong>(
			"getInitialBackoffMillis",
			"()J"
		);
	}
	jlong JobInfo::getIntervalMillis()
	{
		return __thiz.callMethod<jlong>(
			"getIntervalMillis",
			"()J"
		);
	}
	jlong JobInfo::getMaxExecutionDelayMillis()
	{
		return __thiz.callMethod<jlong>(
			"getMaxExecutionDelayMillis",
			"()J"
		);
	}
	jlong JobInfo::getMinLatencyMillis()
	{
		return __thiz.callMethod<jlong>(
			"getMinLatencyMillis",
			"()J"
		);
	}
	jint JobInfo::getNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	QAndroidJniObject JobInfo::getRequiredNetwork()
	{
		return __thiz.callObjectMethod(
			"getRequiredNetwork",
			"()Landroid/net/NetworkRequest;"
		);
	}
	QAndroidJniObject JobInfo::getService()
	{
		return __thiz.callObjectMethod(
			"getService",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject JobInfo::getTransientExtras()
	{
		return __thiz.callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jlong JobInfo::getTriggerContentMaxDelay()
	{
		return __thiz.callMethod<jlong>(
			"getTriggerContentMaxDelay",
			"()J"
		);
	}
	jlong JobInfo::getTriggerContentUpdateDelay()
	{
		return __thiz.callMethod<jlong>(
			"getTriggerContentUpdateDelay",
			"()J"
		);
	}
	jarray JobInfo::getTriggerContentUris()
	{
		return __thiz.callObjectMethod(
			"getTriggerContentUris",
			"()[Landroid/app/job/JobInfo$TriggerContentUri;"
		).object<jarray>();
	}
	jint JobInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean JobInfo::isImportantWhileForeground()
	{
		return __thiz.callMethod<jboolean>(
			"isImportantWhileForeground",
			"()Z"
		);
	}
	jboolean JobInfo::isPeriodic()
	{
		return __thiz.callMethod<jboolean>(
			"isPeriodic",
			"()Z"
		);
	}
	jboolean JobInfo::isPersisted()
	{
		return __thiz.callMethod<jboolean>(
			"isPersisted",
			"()Z"
		);
	}
	jboolean JobInfo::isPrefetch()
	{
		return __thiz.callMethod<jboolean>(
			"isPrefetch",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireBatteryNotLow()
	{
		return __thiz.callMethod<jboolean>(
			"isRequireBatteryNotLow",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireCharging()
	{
		return __thiz.callMethod<jboolean>(
			"isRequireCharging",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireDeviceIdle()
	{
		return __thiz.callMethod<jboolean>(
			"isRequireDeviceIdle",
			"()Z"
		);
	}
	jboolean JobInfo::isRequireStorageNotLow()
	{
		return __thiz.callMethod<jboolean>(
			"isRequireStorageNotLow",
			"()Z"
		);
	}
	jstring JobInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void JobInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::job

