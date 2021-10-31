#include "../../content/LocusId.hpp"
#include "../../os/Parcel.hpp"
#include "./DataShareRequest.hpp"

namespace android::view::contentcapture
{
	// Fields
	__JniBaseClass DataShareRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.DataShareRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DataShareRequest::DataShareRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DataShareRequest::DataShareRequest(android::content::LocusId arg0, jstring arg1)
		: __JniBaseClass(
			"android.view.contentcapture.DataShareRequest",
			"(Landroid/content/LocusId;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint DataShareRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DataShareRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::content::LocusId DataShareRequest::getLocusId()
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jstring DataShareRequest::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DataShareRequest::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DataShareRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DataShareRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DataShareRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

