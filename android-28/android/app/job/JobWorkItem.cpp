#include "../../content/Intent.hpp"
#include "../../os/Parcel.hpp"
#include "./JobWorkItem.hpp"

namespace android::app::job
{
	// Fields
	JObject JobWorkItem::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.JobWorkItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	JobWorkItem::JobWorkItem(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	JobWorkItem::JobWorkItem(android::content::Intent arg0)
		: JObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	JobWorkItem::JobWorkItem(android::content::Intent arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jint JobWorkItem::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint JobWorkItem::getDeliveryCount()
	{
		return callMethod<jint>(
			"getDeliveryCount",
			"()I"
		);
	}
	jlong JobWorkItem::getEstimatedNetworkDownloadBytes()
	{
		return callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	jlong JobWorkItem::getEstimatedNetworkUploadBytes()
	{
		return callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	android::content::Intent JobWorkItem::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring JobWorkItem::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void JobWorkItem::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

