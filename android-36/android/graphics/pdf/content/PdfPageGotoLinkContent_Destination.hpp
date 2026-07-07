#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./PdfPageGotoLinkContent_Destination.def.hpp"

namespace android::graphics::pdf::content
{
	// Fields
	inline JObject PdfPageGotoLinkContent_Destination::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.content.PdfPageGotoLinkContent$Destination",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PdfPageGotoLinkContent_Destination::PdfPageGotoLinkContent_Destination(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: JObject(
			"android.graphics.pdf.content.PdfPageGotoLinkContent$Destination",
			"(IFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint PdfPageGotoLinkContent_Destination::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint PdfPageGotoLinkContent_Destination::getPageNumber() const
	{
		return callMethod<jint>(
			"getPageNumber",
			"()I"
		);
	}
	inline jfloat PdfPageGotoLinkContent_Destination::getXCoordinate() const
	{
		return callMethod<jfloat>(
			"getXCoordinate",
			"()F"
		);
	}
	inline jfloat PdfPageGotoLinkContent_Destination::getYCoordinate() const
	{
		return callMethod<jfloat>(
			"getYCoordinate",
			"()F"
		);
	}
	inline jfloat PdfPageGotoLinkContent_Destination::getZoom() const
	{
		return callMethod<jfloat>(
			"getZoom",
			"()F"
		);
	}
	inline void PdfPageGotoLinkContent_Destination::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
