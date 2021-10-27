#include "./ColorSpace_Rgb_TransferParameters.hpp"
#include "./ColorSpace_Rgb.hpp"

namespace android::graphics
{
	// Fields
	
	ColorSpace_Rgb::ColorSpace_Rgb(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ColorSpace_Rgb::ColorSpace_Rgb(jstring &arg0, jfloatArray &arg1, android::graphics::ColorSpace_Rgb_TransferParameters &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(const QString &arg0, jfloatArray &arg1, android::graphics::ColorSpace_Rgb_TransferParameters &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(jstring &arg0, jfloatArray &arg1, jdouble &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FD)V",
			arg0,
			arg1,
			arg2
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(const QString &arg0, jfloatArray &arg1, jdouble &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FD)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(jstring &arg0, jfloatArray &arg1, jfloatArray &arg2, android::graphics::ColorSpace_Rgb_TransferParameters &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(const QString &arg0, jfloatArray &arg1, jfloatArray &arg2, android::graphics::ColorSpace_Rgb_TransferParameters &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(jstring &arg0, jfloatArray &arg1, jfloatArray &arg2, jdouble &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FD)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(const QString &arg0, jfloatArray &arg1, jfloatArray &arg2, jdouble &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FD)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(jstring &arg0, jfloatArray &arg1, __JniBaseClass &arg2, __JniBaseClass &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(const QString &arg0, jfloatArray &arg1, __JniBaseClass &arg2, __JniBaseClass &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(jstring &arg0, jfloatArray &arg1, jfloatArray &arg2, __JniBaseClass &arg3, __JniBaseClass &arg4, jfloat &arg5, jfloat &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;FF)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6
		);
	}
	ColorSpace_Rgb::ColorSpace_Rgb(const QString &arg0, jfloatArray &arg1, jfloatArray &arg2, __JniBaseClass &arg3, __JniBaseClass &arg4, jfloat &arg5, jfloat &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;FF)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6
		);
	}
	
	// Methods
	jboolean ColorSpace_Rgb::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloatArray ColorSpace_Rgb::fromLinear(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"fromLinear",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::fromLinear(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"fromLinear",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::fromXyz(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"fromXyz",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	QAndroidJniObject ColorSpace_Rgb::getEotf()
	{
		return __thiz.callObjectMethod(
			"getEotf",
			"()Ljava/util/function/DoubleUnaryOperator;"
		);
	}
	jfloatArray ColorSpace_Rgb::getInverseTransform()
	{
		return __thiz.callObjectMethod(
			"getInverseTransform",
			"()[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::getInverseTransform(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getInverseTransform",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloat ColorSpace_Rgb::getMaxValue(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getMaxValue",
			"(I)F",
			arg0
		);
	}
	jfloat ColorSpace_Rgb::getMinValue(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getMinValue",
			"(I)F",
			arg0
		);
	}
	QAndroidJniObject ColorSpace_Rgb::getOetf()
	{
		return __thiz.callObjectMethod(
			"getOetf",
			"()Ljava/util/function/DoubleUnaryOperator;"
		);
	}
	jfloatArray ColorSpace_Rgb::getPrimaries()
	{
		return __thiz.callObjectMethod(
			"getPrimaries",
			"()[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::getPrimaries(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getPrimaries",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	QAndroidJniObject ColorSpace_Rgb::getTransferParameters()
	{
		return __thiz.callObjectMethod(
			"getTransferParameters",
			"()Landroid/graphics/ColorSpace$Rgb$TransferParameters;"
		);
	}
	jfloatArray ColorSpace_Rgb::getTransform()
	{
		return __thiz.callObjectMethod(
			"getTransform",
			"()[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::getTransform(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getTransform",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::getWhitePoint()
	{
		return __thiz.callObjectMethod(
			"getWhitePoint",
			"()[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::getWhitePoint(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getWhitePoint",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jint ColorSpace_Rgb::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ColorSpace_Rgb::isSrgb()
	{
		return __thiz.callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	jboolean ColorSpace_Rgb::isWideGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	jfloatArray ColorSpace_Rgb::toLinear(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"toLinear",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::toLinear(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"toLinear",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Rgb::toXyz(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"toXyz",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
} // namespace android::graphics

