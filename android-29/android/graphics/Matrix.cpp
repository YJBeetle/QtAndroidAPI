#include "./Matrix_ScaleToFit.hpp"
#include "./RectF.hpp"
#include "./Matrix.hpp"

namespace android::graphics
{
	// Fields
	jint Matrix::MPERSP_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_0"
		);
	}
	jint Matrix::MPERSP_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_1"
		);
	}
	jint Matrix::MPERSP_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_2"
		);
	}
	jint Matrix::MSCALE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MSCALE_X"
		);
	}
	jint Matrix::MSCALE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MSCALE_Y"
		);
	}
	jint Matrix::MSKEW_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MSKEW_X"
		);
	}
	jint Matrix::MSKEW_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MSKEW_Y"
		);
	}
	jint Matrix::MTRANS_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MTRANS_X"
		);
	}
	jint Matrix::MTRANS_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MTRANS_Y"
		);
	}
	
	Matrix::Matrix(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Matrix::Matrix()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Matrix",
			"()V"
		);
	}
	Matrix::Matrix(android::graphics::Matrix &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Matrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Matrix::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Matrix::getValues(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"getValues",
			"([F)V",
			arg0
		);
	}
	jint Matrix::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Matrix::invert(android::graphics::Matrix arg0)
	{
		return __thiz.callMethod<jboolean>(
			"invert",
			"(Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Matrix::isAffine()
	{
		return __thiz.callMethod<jboolean>(
			"isAffine",
			"()Z"
		);
	}
	jboolean Matrix::isIdentity()
	{
		return __thiz.callMethod<jboolean>(
			"isIdentity",
			"()Z"
		);
	}
	void Matrix::mapPoints(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"mapPoints",
			"([F)V",
			arg0
		);
	}
	void Matrix::mapPoints(jfloatArray arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"mapPoints",
			"([F[F)V",
			arg0,
			arg1
		);
	}
	void Matrix::mapPoints(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"mapPoints",
			"([FI[FII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jfloat Matrix::mapRadius(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"mapRadius",
			"(F)F",
			arg0
		);
	}
	jboolean Matrix::mapRect(android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"mapRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Matrix::mapRect(android::graphics::RectF arg0, android::graphics::RectF arg1)
	{
		return __thiz.callMethod<jboolean>(
			"mapRect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Matrix::mapVectors(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"mapVectors",
			"([F)V",
			arg0
		);
	}
	void Matrix::mapVectors(jfloatArray arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"mapVectors",
			"([F[F)V",
			arg0,
			arg1
		);
	}
	void Matrix::mapVectors(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"mapVectors",
			"([FI[FII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean Matrix::postConcat(android::graphics::Matrix arg0)
	{
		return __thiz.callMethod<jboolean>(
			"postConcat",
			"(Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Matrix::postRotate(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"postRotate",
			"(F)Z",
			arg0
		);
	}
	jboolean Matrix::postRotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"postRotate",
			"(FFF)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Matrix::postScale(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postScale",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::postScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"postScale",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Matrix::postSkew(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postSkew",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::postSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"postSkew",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Matrix::postTranslate(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postTranslate",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::preConcat(android::graphics::Matrix arg0)
	{
		return __thiz.callMethod<jboolean>(
			"preConcat",
			"(Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Matrix::preRotate(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"preRotate",
			"(F)Z",
			arg0
		);
	}
	jboolean Matrix::preRotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"preRotate",
			"(FFF)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Matrix::preScale(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"preScale",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::preScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"preScale",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Matrix::preSkew(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"preSkew",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::preSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"preSkew",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Matrix::preTranslate(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"preTranslate",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::rectStaysRect()
	{
		return __thiz.callMethod<jboolean>(
			"rectStaysRect",
			"()Z"
		);
	}
	void Matrix::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Matrix::set(android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Matrix::setConcat(android::graphics::Matrix arg0, android::graphics::Matrix arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setConcat",
			"(Landroid/graphics/Matrix;Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Matrix::setPolyToPoly(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4)
	{
		return __thiz.callMethod<jboolean>(
			"setPolyToPoly",
			"([FI[FII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean Matrix::setRectToRect(android::graphics::RectF arg0, android::graphics::RectF arg1, android::graphics::Matrix_ScaleToFit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setRectToRect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;Landroid/graphics/Matrix$ScaleToFit;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Matrix::setRotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRotate",
			"(F)V",
			arg0
		);
	}
	void Matrix::setRotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setRotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix::setScale(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix::setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setScale",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix::setSinCos(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setSinCos",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix::setSinCos(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setSinCos",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix::setSkew(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setSkew",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix::setSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setSkew",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix::setTranslate(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setTranslate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix::setValues(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setValues",
			"([F)V",
			arg0
		);
	}
	jstring Matrix::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Matrix::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::graphics

