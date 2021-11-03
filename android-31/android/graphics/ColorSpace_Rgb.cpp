#include "../../JFloatArray.hpp"
#include "./ColorSpace_Rgb_TransferParameters.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ColorSpace_Rgb.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	ColorSpace_Rgb::ColorSpace_Rgb(QAndroidJniObject obj) : android::graphics::ColorSpace(obj) {}
	
	// Constructors
	ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, android::graphics::ColorSpace_Rgb_TransferParameters arg2)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object()
		) {}
	ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, jdouble arg2)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FD)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2
		) {}
	ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, android::graphics::ColorSpace_Rgb_TransferParameters arg3)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>(),
			arg3.object()
		) {}
	ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, jdouble arg3)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FD)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>(),
			arg3
		) {}
	ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, JObject arg2, JObject arg3)
		: android::graphics::ColorSpace(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object(),
			arg3.object()
		) {}
	ColorSpace_Rgb::ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, JObject arg3, JObject arg4, jfloat arg5, jfloat arg6)
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
	jboolean ColorSpace_Rgb::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JFloatArray ColorSpace_Rgb::fromLinear(JFloatArray arg0)
	{
		return callObjectMethod(
			"fromLinear",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	JFloatArray ColorSpace_Rgb::fromLinear(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callObjectMethod(
			"fromLinear",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		);
	}
	JFloatArray ColorSpace_Rgb::fromXyz(JFloatArray arg0)
	{
		return callObjectMethod(
			"fromXyz",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	JObject ColorSpace_Rgb::getEotf()
	{
		return callObjectMethod(
			"getEotf",
			"()Ljava/util/function/DoubleUnaryOperator;"
		);
	}
	JFloatArray ColorSpace_Rgb::getInverseTransform()
	{
		return callObjectMethod(
			"getInverseTransform",
			"()[F"
		);
	}
	JFloatArray ColorSpace_Rgb::getInverseTransform(JFloatArray arg0)
	{
		return callObjectMethod(
			"getInverseTransform",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	jfloat ColorSpace_Rgb::getMaxValue(jint arg0)
	{
		return callMethod<jfloat>(
			"getMaxValue",
			"(I)F",
			arg0
		);
	}
	jfloat ColorSpace_Rgb::getMinValue(jint arg0)
	{
		return callMethod<jfloat>(
			"getMinValue",
			"(I)F",
			arg0
		);
	}
	JObject ColorSpace_Rgb::getOetf()
	{
		return callObjectMethod(
			"getOetf",
			"()Ljava/util/function/DoubleUnaryOperator;"
		);
	}
	JFloatArray ColorSpace_Rgb::getPrimaries()
	{
		return callObjectMethod(
			"getPrimaries",
			"()[F"
		);
	}
	JFloatArray ColorSpace_Rgb::getPrimaries(JFloatArray arg0)
	{
		return callObjectMethod(
			"getPrimaries",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	android::graphics::ColorSpace_Rgb_TransferParameters ColorSpace_Rgb::getTransferParameters()
	{
		return callObjectMethod(
			"getTransferParameters",
			"()Landroid/graphics/ColorSpace$Rgb$TransferParameters;"
		);
	}
	JFloatArray ColorSpace_Rgb::getTransform()
	{
		return callObjectMethod(
			"getTransform",
			"()[F"
		);
	}
	JFloatArray ColorSpace_Rgb::getTransform(JFloatArray arg0)
	{
		return callObjectMethod(
			"getTransform",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	JFloatArray ColorSpace_Rgb::getWhitePoint()
	{
		return callObjectMethod(
			"getWhitePoint",
			"()[F"
		);
	}
	JFloatArray ColorSpace_Rgb::getWhitePoint(JFloatArray arg0)
	{
		return callObjectMethod(
			"getWhitePoint",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	jint ColorSpace_Rgb::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ColorSpace_Rgb::isSrgb()
	{
		return callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	jboolean ColorSpace_Rgb::isWideGamut()
	{
		return callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	JFloatArray ColorSpace_Rgb::toLinear(JFloatArray arg0)
	{
		return callObjectMethod(
			"toLinear",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	JFloatArray ColorSpace_Rgb::toLinear(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callObjectMethod(
			"toLinear",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		);
	}
	JFloatArray ColorSpace_Rgb::toXyz(JFloatArray arg0)
	{
		return callObjectMethod(
			"toXyz",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
} // namespace android::graphics

