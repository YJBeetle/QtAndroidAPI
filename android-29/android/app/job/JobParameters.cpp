#include "./JobWorkItem.hpp"
#include "../../content/ClipData.hpp"
#include "../../net/Network.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./JobParameters.hpp"

namespace android::app::job
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
	
	JobParameters::JobParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void JobParameters::completeWork(android::app::job::JobWorkItem arg0)
	{
		__thiz.callMethod<void>(
			"completeWork",
			"(Landroid/app/job/JobWorkItem;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JobParameters::dequeueWork()
	{
		return __thiz.callObjectMethod(
			"dequeueWork",
			"()Landroid/app/job/JobWorkItem;"
		);
	}
	jint JobParameters::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject JobParameters::getClipData()
	{
		return __thiz.callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	jint JobParameters::getClipGrantFlags()
	{
		return __thiz.callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	QAndroidJniObject JobParameters::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint JobParameters::getJobId()
	{
		return __thiz.callMethod<jint>(
			"getJobId",
			"()I"
		);
	}
	QAndroidJniObject JobParameters::getNetwork()
	{
		return __thiz.callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	QAndroidJniObject JobParameters::getTransientExtras()
	{
		return __thiz.callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jarray JobParameters::getTriggeredContentAuthorities()
	{
		return __thiz.callObjectMethod(
			"getTriggeredContentAuthorities",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray JobParameters::getTriggeredContentUris()
	{
		return __thiz.callObjectMethod(
			"getTriggeredContentUris",
			"()[Landroid/net/Uri;"
		).object<jarray>();
	}
	jboolean JobParameters::isOverrideDeadlineExpired()
	{
		return __thiz.callMethod<jboolean>(
			"isOverrideDeadlineExpired",
			"()Z"
		);
	}
	void JobParameters::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::job

