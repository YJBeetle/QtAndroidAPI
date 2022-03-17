#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../view/View.def.hpp"
#include "../../../JString.hpp"
#include "./URLSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline URLSpan::URLSpan(android::os::Parcel arg0)
		: android::text::style::ClickableSpan(
			"android.text.style.URLSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline URLSpan::URLSpan(JString arg0)
		: android::text::style::ClickableSpan(
			"android.text.style.URLSpan",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint URLSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint URLSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline JString URLSpan::getURL() const
	{
		return callObjectMethod(
			"getURL",
			"()Ljava/lang/String;"
		);
	}
	inline void URLSpan::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void URLSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

// Base class headers
#include "./CharacterStyle.hpp"
#include "./ClickableSpan.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
