#pragma once

#ifndef ANDROID_APP_JOB_JOBINFO
#define ANDROID_APP_JOB_JOBINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::net
{
	class NetworkRequest;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
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
		static jlong getMinFlexMillis();
		static jlong getMinPeriodMillis();
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getBackoffPolicy();
		QAndroidJniObject getClipData();
		jint getClipGrantFlags();
		jlong getEstimatedNetworkDownloadBytes();
		jlong getEstimatedNetworkUploadBytes();
		QAndroidJniObject getExtras();
		jlong getFlexMillis();
		jint getId();
		jlong getInitialBackoffMillis();
		jlong getIntervalMillis();
		jlong getMaxExecutionDelayMillis();
		jlong getMinLatencyMillis();
		jint getNetworkType();
		QAndroidJniObject getRequiredNetwork();
		QAndroidJniObject getService();
		QAndroidJniObject getTransientExtras();
		jlong getTriggerContentMaxDelay();
		jlong getTriggerContentUpdateDelay();
		jarray getTriggerContentUris();
		jint hashCode();
		jboolean isImportantWhileForeground();
		jboolean isPeriodic();
		jboolean isPersisted();
		jboolean isPrefetch();
		jboolean isRequireBatteryNotLow();
		jboolean isRequireCharging();
		jboolean isRequireDeviceIdle();
		jboolean isRequireStorageNotLow();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::job

#include "../../content/ClipData.hpp"
#include "../../content/ComponentName.hpp"
#include "../../net/NetworkRequest.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"

namespace __jni_impl::android::app::job
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
	
	// Constructors
	void JobInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobInfo",
			"(V)V");
	}
	
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
	void JobInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

