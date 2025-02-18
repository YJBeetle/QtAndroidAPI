#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./PdfPageTextContent.def.hpp"

namespace android::graphics::pdf::content
{
	// Fields
	inline JObject PdfPageTextContent::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.content.PdfPageTextContent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PdfPageTextContent::PdfPageTextContent(JString arg0)
		: JObject(
			"android.graphics.pdf.content.PdfPageTextContent",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline PdfPageTextContent::PdfPageTextContent(JString arg0, JObject arg1)
		: JObject(
			"android.graphics.pdf.content.PdfPageTextContent",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint PdfPageTextContent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject PdfPageTextContent::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Ljava/util/List;"
		);
	}
	inline JString PdfPageTextContent::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	inline void PdfPageTextContent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
