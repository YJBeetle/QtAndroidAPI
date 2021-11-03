#include "../../content/LocusId.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DataShareRequest.hpp"

namespace android::view::contentcapture
{
	// Fields
	JObject DataShareRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.DataShareRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DataShareRequest::DataShareRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DataShareRequest::DataShareRequest(android::content::LocusId arg0, JString arg1)
		: JObject(
			"android.view.contentcapture.DataShareRequest",
			"(Landroid/content/LocusId;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint DataShareRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DataShareRequest::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::content::LocusId DataShareRequest::getLocusId()
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	JString DataShareRequest::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	JString DataShareRequest::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint DataShareRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString DataShareRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

