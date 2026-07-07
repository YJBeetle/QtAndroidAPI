#pragma once

#include "./PdfPageGotoLinkContent_Destination.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "./PdfPageGotoLinkContent.def.hpp"

namespace android::graphics::pdf::content
{
	// Fields
	inline JObject PdfPageGotoLinkContent::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.content.PdfPageGotoLinkContent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PdfPageGotoLinkContent::PdfPageGotoLinkContent(JObject arg0, android::graphics::pdf::content::PdfPageGotoLinkContent_Destination arg1)
		: JObject(
			"android.graphics.pdf.content.PdfPageGotoLinkContent",
			"(Ljava/util/List;Landroid/graphics/pdf/content/PdfPageGotoLinkContent$Destination;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint PdfPageGotoLinkContent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject PdfPageGotoLinkContent::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Ljava/util/List;"
		);
	}
	inline android::graphics::pdf::content::PdfPageGotoLinkContent_Destination PdfPageGotoLinkContent::getDestination() const
	{
		return callObjectMethod(
			"getDestination",
			"()Landroid/graphics/pdf/content/PdfPageGotoLinkContent$Destination;"
		);
	}
	inline void PdfPageGotoLinkContent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
