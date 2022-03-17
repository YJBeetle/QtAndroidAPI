#pragma once

#include "../../os/Parcel.def.hpp"
#include "../Layout_Alignment.def.hpp"
#include "./AlignmentSpan_Standard.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline AlignmentSpan_Standard::AlignmentSpan_Standard(android::os::Parcel arg0)
		: JObject(
			"android.text.style.AlignmentSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline AlignmentSpan_Standard::AlignmentSpan_Standard(android::text::Layout_Alignment arg0)
		: JObject(
			"android.text.style.AlignmentSpan$Standard",
			"(Landroid/text/Layout$Alignment;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint AlignmentSpan_Standard::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::text::Layout_Alignment AlignmentSpan_Standard::getAlignment() const
	{
		return callObjectMethod(
			"getAlignment",
			"()Landroid/text/Layout$Alignment;"
		);
	}
	inline jint AlignmentSpan_Standard::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void AlignmentSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

