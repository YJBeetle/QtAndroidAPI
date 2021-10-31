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
	
	// QAndroidJniObject forward
	JobParameters::JobParameters(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void JobParameters::completeWork(android::app::job::JobWorkItem arg0)
	{
		callMethod<void>(
			"completeWork",
			"(Landroid/app/job/JobWorkItem;)V",
			arg0.object()
		);
	}
	QAndroidJniObject JobParameters::dequeueWork()
	{
		return callObjectMethod(
			"dequeueWork",
			"()Landroid/app/job/JobWorkItem;"
		);
	}
	jint JobParameters::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject JobParameters::getClipData()
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	jint JobParameters::getClipGrantFlags()
	{
		return callMethod<jint>(
			"getClipGrantFlags",
			"()I"
		);
	}
	QAndroidJniObject JobParameters::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint JobParameters::getJobId()
	{
		return callMethod<jint>(
			"getJobId",
			"()I"
		);
	}
	QAndroidJniObject JobParameters::getNetwork()
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	QAndroidJniObject JobParameters::getTransientExtras()
	{
		return callObjectMethod(
			"getTransientExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jarray JobParameters::getTriggeredContentAuthorities()
	{
		return callObjectMethod(
			"getTriggeredContentAuthorities",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray JobParameters::getTriggeredContentUris()
	{
		return callObjectMethod(
			"getTriggeredContentUris",
			"()[Landroid/net/Uri;"
		).object<jarray>();
	}
	jboolean JobParameters::isOverrideDeadlineExpired()
	{
		return callMethod<jboolean>(
			"isOverrideDeadlineExpired",
			"()Z"
		);
	}
	void JobParameters::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job
