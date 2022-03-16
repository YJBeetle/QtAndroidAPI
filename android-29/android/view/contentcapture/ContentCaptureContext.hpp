#pragma once

#include "../../content/LocusId.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./ContentCaptureContext_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./ContentCaptureContext.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	inline JObject ContentCaptureContext::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.ContentCaptureContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::contentcapture::ContentCaptureContext ContentCaptureContext::forLocusId(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.contentcapture.ContentCaptureContext",
			"forLocusId",
			"(Ljava/lang/String;)Landroid/view/contentcapture/ContentCaptureContext;",
			arg0.object<jstring>()
		);
	}
	inline jint ContentCaptureContext::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle ContentCaptureContext::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::content::LocusId ContentCaptureContext::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	inline JString ContentCaptureContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ContentCaptureContext::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

// Base class headers

