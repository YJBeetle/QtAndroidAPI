#pragma once

#include "../../graphics/Paint_FontMetricsInt.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./LineHeightSpan_Standard.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline LineHeightSpan_Standard::LineHeightSpan_Standard(android::os::Parcel arg0)
		: JObject(
			"android.text.style.LineHeightSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline LineHeightSpan_Standard::LineHeightSpan_Standard(jint arg0)
		: JObject(
			"android.text.style.LineHeightSpan$Standard",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void LineHeightSpan_Standard::chooseHeight(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5) const
	{
		callMethod<void>(
			"chooseHeight",
			"(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline jint LineHeightSpan_Standard::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint LineHeightSpan_Standard::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint LineHeightSpan_Standard::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void LineHeightSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

