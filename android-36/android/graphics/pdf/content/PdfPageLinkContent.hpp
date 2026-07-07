#pragma once

#include "../../../net/Uri.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "./PdfPageLinkContent.def.hpp"

namespace android::graphics::pdf::content
{
	// Fields
	inline JObject PdfPageLinkContent::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.content.PdfPageLinkContent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PdfPageLinkContent::PdfPageLinkContent(JObject arg0, android::net::Uri arg1)
		: JObject(
			"android.graphics.pdf.content.PdfPageLinkContent",
			"(Ljava/util/List;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint PdfPageLinkContent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject PdfPageLinkContent::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri PdfPageLinkContent::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline void PdfPageLinkContent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::pdf::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf::content;
#endif
