#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "./JobInfo_TriggerContentUri.hpp"

namespace android::app::job
{
	// Fields
	JObject JobInfo_TriggerContentUri::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.JobInfo$TriggerContentUri",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint JobInfo_TriggerContentUri::FLAG_NOTIFY_FOR_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.app.job.JobInfo$TriggerContentUri",
			"FLAG_NOTIFY_FOR_DESCENDANTS"
		);
	}
	
	// Constructors
	JobInfo_TriggerContentUri::JobInfo_TriggerContentUri(android::net::Uri arg0, jint arg1)
		: JObject(
			"android.app.job.JobInfo$TriggerContentUri",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint JobInfo_TriggerContentUri::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean JobInfo_TriggerContentUri::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint JobInfo_TriggerContentUri::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::net::Uri JobInfo_TriggerContentUri::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint JobInfo_TriggerContentUri::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void JobInfo_TriggerContentUri::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

