#pragma once

#include "../../JFloatArray.hpp"
#include "./ColorSpace_Rgb_TransferParameters.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ColorSpace_Rgb.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, android::graphics::ColorSpace_Rgb_TransferParameters arg2)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object()
		) {}
	inline ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, jdouble arg2)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FD)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2
		) {}
	inline ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, android::graphics::ColorSpace_Rgb_TransferParameters arg3)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>(),
			arg3.object()
		) {}
	inline ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, jdouble arg3)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FD)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>(),
			arg3
		) {}
	inline ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, JObject arg2, JObject arg3)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object(),
			arg3.object()
		) {}
	inline ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, JObject arg3, JObject arg4, jfloat arg5, jfloat arg6)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;FF)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>(),
			arg3.object(),
			arg4.object(),
			arg5,
			arg6
		) {}
	
	// Methods
	inline jboolean ColorSpace_Rgb::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JFloatArray ColorSpace_Rgb::fromLinear(JFloatArray arg0) const
	{
		return callObjectMethod(
			"fromLinear",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline JFloatArray ColorSpace_Rgb::fromLinear(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"fromLinear",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		);
	}
	inline JFloatArray ColorSpace_Rgb::fromXyz(JFloatArray arg0) const
	{
		return callObjectMethod(
			"fromXyz",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline JObject ColorSpace_Rgb::getEotf() const
	{
		return callObjectMethod(
			"getEotf",
			"()Ljava/util/function/DoubleUnaryOperator;"
		);
	}
	inline JFloatArray ColorSpace_Rgb::getInverseTransform() const
	{
		return callObjectMethod(
			"getInverseTransform",
			"()[F"
		);
	}
	inline JFloatArray ColorSpace_Rgb::getInverseTransform(JFloatArray arg0) const
	{
		return callObjectMethod(
			"getInverseTransform",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline jfloat ColorSpace_Rgb::getMaxValue(jint arg0) const
	{
		return callMethod<jfloat>(
			"getMaxValue",
			"(I)F",
			arg0
		);
	}
	inline jfloat ColorSpace_Rgb::getMinValue(jint arg0) const
	{
		return callMethod<jfloat>(
			"getMinValue",
			"(I)F",
			arg0
		);
	}
	inline JObject ColorSpace_Rgb::getOetf() const
	{
		return callObjectMethod(
			"getOetf",
			"()Ljava/util/function/DoubleUnaryOperator;"
		);
	}
	inline JFloatArray ColorSpace_Rgb::getPrimaries() const
	{
		return callObjectMethod(
			"getPrimaries",
			"()[F"
		);
	}
	inline JFloatArray ColorSpace_Rgb::getPrimaries(JFloatArray arg0) const
	{
		return callObjectMethod(
			"getPrimaries",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline android::graphics::ColorSpace_Rgb_TransferParameters ColorSpace_Rgb::getTransferParameters() const
	{
		return callObjectMethod(
			"getTransferParameters",
			"()Landroid/graphics/ColorSpace$Rgb$TransferParameters;"
		);
	}
	inline JFloatArray ColorSpace_Rgb::getTransform() const
	{
		return callObjectMethod(
			"getTransform",
			"()[F"
		);
	}
	inline JFloatArray ColorSpace_Rgb::getTransform(JFloatArray arg0) const
	{
		return callObjectMethod(
			"getTransform",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline JFloatArray ColorSpace_Rgb::getWhitePoint() const
	{
		return callObjectMethod(
			"getWhitePoint",
			"()[F"
		);
	}
	inline JFloatArray ColorSpace_Rgb::getWhitePoint(JFloatArray arg0) const
	{
		return callObjectMethod(
			"getWhitePoint",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline jint ColorSpace_Rgb::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ColorSpace_Rgb::isSrgb() const
	{
		return callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	inline jboolean ColorSpace_Rgb::isWideGamut() const
	{
		return callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	inline JFloatArray ColorSpace_Rgb::toLinear(JFloatArray arg0) const
	{
		return callObjectMethod(
			"toLinear",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline JFloatArray ColorSpace_Rgb::toLinear(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"toLinear",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		);
	}
	inline JFloatArray ColorSpace_Rgb::toXyz(JFloatArray arg0) const
	{
		return callObjectMethod(
			"toXyz",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
} // namespace android::graphics

// Base class headers
#include "./ColorSpace.hpp"

