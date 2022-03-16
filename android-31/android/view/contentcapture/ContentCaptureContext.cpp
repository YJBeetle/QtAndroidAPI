#include "../../content/LocusId.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./ContentCaptureContext.hpp"

namespace android::view::contentcapture
{
	// Fields
	JObject ContentCaptureContext::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.ContentCaptureContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	android::view::contentcapture::ContentCaptureContext ContentCaptureContext::forLocusId(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.contentcapture.ContentCaptureContext",
			"forLocusId",
			"(Ljava/lang/String;)Landroid/view/contentcapture/ContentCaptureContext;",
			arg0.object<jstring>()
		);
	}
	jint ContentCaptureContext::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle ContentCaptureContext::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::content::LocusId ContentCaptureContext::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	JString ContentCaptureContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ContentCaptureContext::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

