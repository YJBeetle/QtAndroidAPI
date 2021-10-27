#include "../../content/Intent.hpp"
#include "../../os/Parcel.hpp"
#include "./JobWorkItem.hpp"

namespace android::app::job
{
	// Fields
	QAndroidJniObject JobWorkItem::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.job.JobWorkItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	JobWorkItem::JobWorkItem(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JobWorkItem::JobWorkItem(android::content::Intent &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	JobWorkItem::JobWorkItem(android::content::Intent &arg0, jlong &arg1, jlong &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jint JobWorkItem::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint JobWorkItem::getDeliveryCount()
	{
		return __thiz.callMethod<jint>(
			"getDeliveryCount",
			"()I"
		);
	}
	jlong JobWorkItem::getEstimatedNetworkDownloadBytes()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	jlong JobWorkItem::getEstimatedNetworkUploadBytes()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	QAndroidJniObject JobWorkItem::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring JobWorkItem::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void JobWorkItem::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::job

