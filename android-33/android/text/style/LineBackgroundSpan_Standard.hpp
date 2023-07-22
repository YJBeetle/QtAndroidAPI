#pragma once

#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Paint.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./LineBackgroundSpan_Standard.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline LineBackgroundSpan_Standard::LineBackgroundSpan_Standard(android::os::Parcel arg0)
		: JObject(
			"android.text.style.LineBackgroundSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline LineBackgroundSpan_Standard::LineBackgroundSpan_Standard(jint arg0)
		: JObject(
			"android.text.style.LineBackgroundSpan$Standard",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint LineBackgroundSpan_Standard::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void LineBackgroundSpan_Standard::drawBackground(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jint arg10) const
	{
		callMethod<void>(
			"drawBackground",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object<jstring>(),
			arg8,
			arg9,
			arg10
		);
	}
	inline jint LineBackgroundSpan_Standard::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline jint LineBackgroundSpan_Standard::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void LineBackgroundSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
