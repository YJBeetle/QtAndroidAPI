#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./JobInfo_TriggerContentUri.hpp"

namespace android::app::job
{
	// Fields
	QAndroidJniObject JobInfo_TriggerContentUri::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.job.JobInfo$TriggerContentUri",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint JobInfo_TriggerContentUri::FLAG_NOTIFY_FOR_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.job.JobInfo$TriggerContentUri",
			"FLAG_NOTIFY_FOR_DESCENDANTS"
		);
	}
	
	// QAndroidJniObject forward
	JobInfo_TriggerContentUri::JobInfo_TriggerContentUri(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	JobInfo_TriggerContentUri::JobInfo_TriggerContentUri(android::net::Uri arg0, jint arg1)
		: __JniBaseClass(
			"android.app.job.JobInfo$TriggerContentUri",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint JobInfo_TriggerContentUri::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean JobInfo_TriggerContentUri::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint JobInfo_TriggerContentUri::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	QAndroidJniObject JobInfo_TriggerContentUri::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint JobInfo_TriggerContentUri::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void JobInfo_TriggerContentUri::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

