#pragma once

#ifndef ANDROID_APP_JOB_JOBPARAMETERS
#define ANDROID_APP_JOB_JOBPARAMETERS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::net
{
	class Network;
}
namespace __jni_impl::android::app::job
{
	class JobWorkItem;
}
namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}

namespace __jni_impl::android::app::job
{
	class JobParameters : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getTransientExtras();
		jint getClipGrantFlags();
		jarray getTriggeredContentUris();
		jarray getTriggeredContentAuthorities();
		QAndroidJniObject getNetwork();
		QAndroidJniObject dequeueWork();
		jint getJobId();
		jboolean isOverrideDeadlineExpired();
		void completeWork(__jni_impl::android::app::job::JobWorkItem arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getClipData();
		QAndroidJniObject getExtras();
	};
} // namespace __jni_impl::android::app::job

#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"
#include "../../net/Network.hpp"
#include "JobWorkItem.hpp"
#include "../../content/ClipData.hpp"
#include "../../os/PersistableBundle.hpp"

namespace __jni_impl::android::app::job
{
	// Fields
	QAndroidJniObject JobParameters::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.job.JobParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void JobParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobParameters",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject JobParameters::getTransientExtras()
	{
		return __thiz.callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint JobParameters::getClipGrantFlags()
	{
		return __thiz.callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	jarray JobParameters::getTriggeredContentUris()
	{
		return __thiz.callObjectMethod(
			"getTriggeredContentUris",
			"()[Landroid/net/Uri;"
		).object<jarray>();
	}
	jarray JobParameters::getTriggeredContentAuthorities()
	{
		return __thiz.callObjectMethod(
			"getTriggeredContentAuthorities",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject JobParameters::getNetwork()
	{
		return __thiz.callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	QAndroidJniObject JobParameters::dequeueWork()
	{
		return __thiz.callObjectMethod(
			"dequeueWork",
			"()Landroid/app/job/JobWorkItem;"
		);
	}
	jint JobParameters::getJobId()
	{
		return __thiz.callMethod<jint>(
			"getJobId",
			"()I"
		);
	}
	jboolean JobParameters::isOverrideDeadlineExpired()
	{
		return __thiz.callMethod<jboolean>(
			"isOverrideDeadlineExpired",
			"()Z"
		);
	}
	void JobParameters::completeWork(__jni_impl::android::app::job::JobWorkItem arg0)
	{
		__thiz.callMethod<void>(
			"completeWork",
			"(Landroid/app/job/JobWorkItem;)V",
			arg0.__jniObject().object()
		);
	}
	jint JobParameters::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void JobParameters::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject JobParameters::getClipData()
	{
		return __thiz.callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	QAndroidJniObject JobParameters::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
} // namespace __jni_impl::android::app::job

namespace android::app::job
{
	class JobParameters : public __jni_impl::android::app::job::JobParameters
	{
	public:
		JobParameters(QAndroidJniObject obj) { __thiz = obj; }
		JobParameters()
		{
			__constructor();
		}
	};
} // namespace android::app::job

#endif // ANDROID_APP_JOB_JOBPARAMETERS

