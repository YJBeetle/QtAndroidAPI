#pragma once

#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Paint.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../Layout.def.hpp"
#include "../../../JString.hpp"
#include "./BulletSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline jint BulletSpan::STANDARD_GAP_WIDTH()
	{
		return getStaticField<jint>(
			"android.text.style.BulletSpan",
			"STANDARD_GAP_WIDTH"
		);
	}
	
	// Constructors
	inline BulletSpan::BulletSpan()
		: JObject(
			"android.text.style.BulletSpan",
			"()V"
		) {}
	inline BulletSpan::BulletSpan(android::os::Parcel arg0)
		: JObject(
			"android.text.style.BulletSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline BulletSpan::BulletSpan(jint arg0)
		: JObject(
			"android.text.style.BulletSpan",
			"(I)V",
			arg0
		) {}
	inline BulletSpan::BulletSpan(jint arg0, jint arg1)
		: JObject(
			"android.text.style.BulletSpan",
			"(II)V",
			arg0,
			arg1
		) {}
	inline BulletSpan::BulletSpan(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.text.style.BulletSpan",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint BulletSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void BulletSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11) const
	{
		callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
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
			arg10,
			arg11.object()
		);
	}
	inline jint BulletSpan::getBulletRadius() const
	{
		return callMethod<jint>(
			"getBulletRadius",
			"()I"
		);
	}
	inline jint BulletSpan::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline jint BulletSpan::getGapWidth() const
	{
		return callMethod<jint>(
			"getGapWidth",
			"()I"
		);
	}
	inline jint BulletSpan::getLeadingMargin(jboolean arg0) const
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	inline jint BulletSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void BulletSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
