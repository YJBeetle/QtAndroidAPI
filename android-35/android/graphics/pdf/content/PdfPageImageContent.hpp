#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./PdfPageImageContent.def.hpp"

namespace android::graphics::pdf::content
{
	// Fields
	inline JObject PdfPageImageContent::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.content.PdfPageImageContent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PdfPageImageContent::PdfPageImageContent(JString arg0)
		: JObject(
			"android.graphics.pdf.content.PdfPageImageContent",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint PdfPageImageContent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PdfPageImageContent::getAltText() const
	{
		return callObjectMethod(
			"getAltText",
			"()Ljava/lang/String;"
		);
	}
	inline void PdfPageImageContent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
