#pragma once

#include "../../JFloatArray.hpp"
#include "./Bitmap.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./Gainmap.def.hpp"

namespace android::graphics
{
	// Fields
	inline JObject Gainmap::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Gainmap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Gainmap::Gainmap(android::graphics::Bitmap arg0)
		: JObject(
			"android.graphics.Gainmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Gainmap::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat Gainmap::getDisplayRatioForFullHdr() const
	{
		return callMethod<jfloat>(
			"getDisplayRatioForFullHdr",
			"()F"
		);
	}
	inline JFloatArray Gainmap::getEpsilonHdr() const
	{
		return callObjectMethod(
			"getEpsilonHdr",
			"()[F"
		);
	}
	inline JFloatArray Gainmap::getEpsilonSdr() const
	{
		return callObjectMethod(
			"getEpsilonSdr",
			"()[F"
		);
	}
	inline android::graphics::Bitmap Gainmap::getGainmapContents() const
	{
		return callObjectMethod(
			"getGainmapContents",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline JFloatArray Gainmap::getGamma() const
	{
		return callObjectMethod(
			"getGamma",
			"()[F"
		);
	}
	inline jfloat Gainmap::getMinDisplayRatioForHdrTransition() const
	{
		return callMethod<jfloat>(
			"getMinDisplayRatioForHdrTransition",
			"()F"
		);
	}
	inline JFloatArray Gainmap::getRatioMax() const
	{
		return callObjectMethod(
			"getRatioMax",
			"()[F"
		);
	}
	inline JFloatArray Gainmap::getRatioMin() const
	{
		return callObjectMethod(
			"getRatioMin",
			"()[F"
		);
	}
	inline void Gainmap::setDisplayRatioForFullHdr(jfloat arg0) const
	{
		callMethod<void>(
			"setDisplayRatioForFullHdr",
			"(F)V",
			arg0
		);
	}
	inline void Gainmap::setEpsilonHdr(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setEpsilonHdr",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Gainmap::setEpsilonSdr(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setEpsilonSdr",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Gainmap::setGainmapContents(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"setGainmapContents",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	inline void Gainmap::setGamma(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setGamma",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Gainmap::setMinDisplayRatioForHdrTransition(jfloat arg0) const
	{
		callMethod<void>(
			"setMinDisplayRatioForHdrTransition",
			"(F)V",
			arg0
		);
	}
	inline void Gainmap::setRatioMax(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setRatioMax",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Gainmap::setRatioMin(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setRatioMin",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Gainmap::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
