#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./DataRemovalRequest.hpp"

namespace android::view::contentcapture
{
	// Fields
	JObject DataRemovalRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.DataRemovalRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint DataRemovalRequest::FLAG_IS_PREFIX()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.DataRemovalRequest",
			"FLAG_IS_PREFIX"
		);
	}
	
	// QJniObject forward
	DataRemovalRequest::DataRemovalRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DataRemovalRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject DataRemovalRequest::getLocusIdRequests() const
	{
		return callObjectMethod(
			"getLocusIdRequests",
			"()Ljava/util/List;"
		);
	}
	JString DataRemovalRequest::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jboolean DataRemovalRequest::isForEverything() const
	{
		return callMethod<jboolean>(
			"isForEverything",
			"()Z"
		);
	}
	void DataRemovalRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

