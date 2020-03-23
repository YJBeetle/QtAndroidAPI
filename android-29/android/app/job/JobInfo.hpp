#pragma once

#ifndef ANDROID_APP_JOB_JOBINFO
#define ANDROID_APP_JOB_JOBINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::net
{
	class NetworkRequest;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}

namespace __jni_impl::android::app::job
{
	class JobInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint BACKOFF_POLICY_EXPONENTIAL();
		static jint BACKOFF_POLICY_LINEAR();
		static QAndroidJniObject CREATOR();
		static jlong DEFAULT_INITIAL_BACKOFF_MILLIS();
		static jlong MAX_BACKOFF_DELAY_MILLIS();
		static jint NETWORK_BYTES_UNKNOWN();
		static jint NETWORK_TYPE_ANY();
		static jint NETWORK_TYPE_CELLULAR();
		static jint NETWORK_TYPE_METERED();
		static jint NETWORK_TYPE_NONE();
		static jint NETWORK_TYPE_NOT_ROAMING();
		static jint NETWORK_TYPE_UNMETERED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getId();
		QAndroidJniObject getClipData();
		QAndroidJniObject getExtras();
		static jlong getMinPeriodMillis();
		static jlong getMinFlexMillis();
		QAndroidJniObject getTransientExtras();
		jint getClipGrantFlags();
		jboolean isRequireCharging();
		jboolean isRequireBatteryNotLow();
		jboolean isRequireDeviceIdle();
		jboolean isRequireStorageNotLow();
		QAndroidJniObject getTriggerContentUris();
		jlong getTriggerContentUpdateDelay();
		jlong getTriggerContentMaxDelay();
		jint getNetworkType();
		QAndroidJniObject getRequiredNetwork();
		jlong getEstimatedNetworkDownloadBytes();
		jlong getEstimatedNetworkUploadBytes();
		jlong getMinLatencyMillis();
		jlong getMaxExecutionDelayMillis();
		jboolean isPeriodic();
		jboolean isPersisted();
		jlong getIntervalMillis();
		jlong getFlexMillis();
		jlong getInitialBackoffMillis();
		jint getBackoffPolicy();
		jboolean isImportantWhileForeground();
		jboolean isPrefetch();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getService();
	};
} // namespace __jni_impl::android::app::job

#include "../../os/Parcel.hpp"
#include "../../content/ClipData.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../os/Bundle.hpp"
#include "../../net/NetworkRequest.hpp"
#include "../../content/ComponentName.hpp"

namespace __jni_impl::android::app::job
{
	// Fields
	jint JobInfo::BACKOFF_POLICY_EXPONENTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"BACKOFF_POLICY_EXPONENTIAL");
	}
	jint JobInfo::BACKOFF_POLICY_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"BACKOFF_POLICY_LINEAR");
	}
	QAndroidJniObject JobInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.job.JobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jlong JobInfo::DEFAULT_INITIAL_BACKOFF_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.job.JobInfo",
			"DEFAULT_INITIAL_BACKOFF_MILLIS");
	}
	jlong JobInfo::MAX_BACKOFF_DELAY_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.app.job.JobInfo",
			"MAX_BACKOFF_DELAY_MILLIS");
	}
	jint JobInfo::NETWORK_BYTES_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_BYTES_UNKNOWN");
	}
	jint JobInfo::NETWORK_TYPE_ANY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_ANY");
	}
	jint JobInfo::NETWORK_TYPE_CELLULAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_CELLULAR");
	}
	jint JobInfo::NETWORK_TYPE_METERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_METERED");
	}
	jint JobInfo::NETWORK_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_NONE");
	}
	jint JobInfo::NETWORK_TYPE_NOT_ROAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_NOT_ROAMING");
	}
	jint JobInfo::NETWORK_TYPE_UNMETERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo",
			"NETWORK_TYPE_UNMETERED");
	}
	
	// Constructors
	void JobInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobInfo",
			"(V)V");
	}
	
	// Methods
	jboolean JobInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject JobInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint JobInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint JobInfo::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
	QAndroidJniObject JobInfo::getClipData()
	{
		return __thiz.callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;");
	}
	QAndroidJniObject JobInfo::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;");
	}
	jlong JobInfo::getMinPeriodMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.app.job.JobInfo",
			"getMinPeriodMillis",
			"()J");
	}
	jlong JobInfo::getMinFlexMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.app.job.JobInfo",
			"getMinFlexMillis",
			"()J");
	}
	QAndroidJniObject JobInfo::getTransientExtras()
	{
		return __thiz.callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;");
	}
	jint JobInfo::getClipGrantFlags()
	{
		return __thiz.callMethod<jint>(
			"getClipGrantFlags",
			"()I");
	}
	jboolean JobInfo::isRequireCharging()
	{
		return __thiz.callMethod<jboolean>(
			"isRequireCharging",
			"()Z");
	}
	jboolean JobInfo::isRequireBatteryNotLow()
	{
		return __thiz.callMethod<jboolean>(
			"isRequireBatteryNotLow",
			"()Z");
	}
	jboolean JobInfo::isRequireDeviceIdle()
	{
		return __thiz.callMethod<jboolean>(
			"isRequireDeviceIdle",
			"()Z");
	}
	jboolean JobInfo::isRequireStorageNotLow()
	{
		return __thiz.callMethod<jboolean>(
			"isRequireStorageNotLow",
			"()Z");
	}
	QAndroidJniObject JobInfo::getTriggerContentUris()
	{
		return __thiz.callObjectMethod(
			"getTriggerContentUris",
			"()[Landroid/app/job/JobInfo$TriggerContentUri;");
	}
	jlong JobInfo::getTriggerContentUpdateDelay()
	{
		return __thiz.callMethod<jlong>(
			"getTriggerContentUpdateDelay",
			"()J");
	}
	jlong JobInfo::getTriggerContentMaxDelay()
	{
		return __thiz.callMethod<jlong>(
			"getTriggerContentMaxDelay",
			"()J");
	}
	jint JobInfo::getNetworkType()
	{
		return __thiz.callMethod<jint>(
			"getNetworkType",
			"()I");
	}
	QAndroidJniObject JobInfo::getRequiredNetwork()
	{
		return __thiz.callObjectMethod(
			"getRequiredNetwork",
			"()Landroid/net/NetworkRequest;");
	}
	jlong JobInfo::getEstimatedNetworkDownloadBytes()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J");
	}
	jlong JobInfo::getEstimatedNetworkUploadBytes()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J");
	}
	jlong JobInfo::getMinLatencyMillis()
	{
		return __thiz.callMethod<jlong>(
			"getMinLatencyMillis",
			"()J");
	}
	jlong JobInfo::getMaxExecutionDelayMillis()
	{
		return __thiz.callMethod<jlong>(
			"getMaxExecutionDelayMillis",
			"()J");
	}
	jboolean JobInfo::isPeriodic()
	{
		return __thiz.callMethod<jboolean>(
			"isPeriodic",
			"()Z");
	}
	jboolean JobInfo::isPersisted()
	{
		return __thiz.callMethod<jboolean>(
			"isPersisted",
			"()Z");
	}
	jlong JobInfo::getIntervalMillis()
	{
		return __thiz.callMethod<jlong>(
			"getIntervalMillis",
			"()J");
	}
	jlong JobInfo::getFlexMillis()
	{
		return __thiz.callMethod<jlong>(
			"getFlexMillis",
			"()J");
	}
	jlong JobInfo::getInitialBackoffMillis()
	{
		return __thiz.callMethod<jlong>(
			"getInitialBackoffMillis",
			"()J");
	}
	jint JobInfo::getBackoffPolicy()
	{
		return __thiz.callMethod<jint>(
			"getBackoffPolicy",
			"()I");
	}
	jboolean JobInfo::isImportantWhileForeground()
	{
		return __thiz.callMethod<jboolean>(
			"isImportantWhileForeground",
			"()Z");
	}
	jboolean JobInfo::isPrefetch()
	{
		return __thiz.callMethod<jboolean>(
			"isPrefetch",
			"()Z");
	}
	jint JobInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void JobInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject JobInfo::getService()
	{
		return __thiz.callObjectMethod(
			"getService",
			"()Landroid/content/ComponentName;");
	}
} // namespace __jni_impl::android::app::job

namespace android::app::job
{
	class JobInfo : public __jni_impl::android::app::job::JobInfo
	{
	public:
		JobInfo(QAndroidJniObject obj) { __thiz = obj; }
		JobInfo()
		{
			__constructor();
		}
	};
} // namespace android::app::job

#endif // ANDROID_APP_JOB_JOBINFO

