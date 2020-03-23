#pragma once

#ifndef ANDROID_GRAPHICS_MATRIX
#define ANDROID_GRAPHICS_MATRIX

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics
{
	class Matrix_ScaleToFit;
}

namespace __jni_impl::android::graphics
{
	class Matrix : public __JniBaseClass
	{
	public:
		// Fields
		static jint MPERSP_0();
		static jint MPERSP_1();
		static jint MPERSP_2();
		static jint MSCALE_X();
		static jint MSCALE_Y();
		static jint MSKEW_X();
		static jint MSKEW_Y();
		static jint MTRANS_X();
		static jint MTRANS_Y();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Matrix arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void set(__jni_impl::android::graphics::Matrix arg0);
		QAndroidJniObject toShortString();
		jboolean isIdentity();
		void reset();
		void setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setScale(jfloat arg0, jfloat arg1);
		jboolean rectStaysRect();
		jboolean isAffine();
		void setTranslate(jfloat arg0, jfloat arg1);
		void setRotate(jfloat arg0, jfloat arg1, jfloat arg2);
		void setRotate(jfloat arg0);
		void setSinCos(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setSinCos(jfloat arg0, jfloat arg1);
		void setSkew(jfloat arg0, jfloat arg1);
		void setSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean setConcat(__jni_impl::android::graphics::Matrix arg0, __jni_impl::android::graphics::Matrix arg1);
		jboolean preTranslate(jfloat arg0, jfloat arg1);
		jboolean preScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean preScale(jfloat arg0, jfloat arg1);
		jboolean preRotate(jfloat arg0);
		jboolean preRotate(jfloat arg0, jfloat arg1, jfloat arg2);
		jboolean preSkew(jfloat arg0, jfloat arg1);
		jboolean preSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean preConcat(__jni_impl::android::graphics::Matrix arg0);
		jboolean postTranslate(jfloat arg0, jfloat arg1);
		jboolean postScale(jfloat arg0, jfloat arg1);
		jboolean postScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean postRotate(jfloat arg0, jfloat arg1, jfloat arg2);
		jboolean postRotate(jfloat arg0);
		jboolean postSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean postSkew(jfloat arg0, jfloat arg1);
		jboolean postConcat(__jni_impl::android::graphics::Matrix arg0);
		jboolean setRectToRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::RectF arg1, __jni_impl::android::graphics::Matrix_ScaleToFit arg2);
		jboolean setPolyToPoly(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4);
		jboolean invert(__jni_impl::android::graphics::Matrix arg0);
		void mapPoints(jfloatArray arg0, jfloatArray arg1);
		void mapPoints(jfloatArray arg0);
		void mapPoints(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4);
		void mapVectors(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4);
		void mapVectors(jfloatArray arg0, jfloatArray arg1);
		void mapVectors(jfloatArray arg0);
		jboolean mapRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::RectF arg1);
		jboolean mapRect(__jni_impl::android::graphics::RectF arg0);
		jfloat mapRadius(jfloat arg0);
		void getValues(jfloatArray arg0);
		void setValues(jfloatArray arg0);
	};
} // namespace __jni_impl::android::graphics

#include "RectF.hpp"
#include "Matrix_ScaleToFit.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jint Matrix::MPERSP_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_0");
	}
	jint Matrix::MPERSP_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_1");
	}
	jint Matrix::MPERSP_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_2");
	}
	jint Matrix::MSCALE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MSCALE_X");
	}
	jint Matrix::MSCALE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MSCALE_Y");
	}
	jint Matrix::MSKEW_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MSKEW_X");
	}
	jint Matrix::MSKEW_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MSKEW_Y");
	}
	jint Matrix::MTRANS_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MTRANS_X");
	}
	jint Matrix::MTRANS_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Matrix",
			"MTRANS_Y");
	}
	
	// Constructors
	void Matrix::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Matrix",
			"()V");
	}
	void Matrix::__constructor(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Matrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean Matrix::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Matrix::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Matrix::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void Matrix::set(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Matrix::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;");
	}
	jboolean Matrix::isIdentity()
	{
		return __thiz.callMethod<jboolean>(
			"isIdentity",
			"()Z");
	}
	void Matrix::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	void Matrix::setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setScale",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Matrix::setScale(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setScale",
			"(FF)V",
			arg0,
			arg1);
	}
	jboolean Matrix::rectStaysRect()
	{
		return __thiz.callMethod<jboolean>(
			"rectStaysRect",
			"()Z");
	}
	jboolean Matrix::isAffine()
	{
		return __thiz.callMethod<jboolean>(
			"isAffine",
			"()Z");
	}
	void Matrix::setTranslate(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setTranslate",
			"(FF)V",
			arg0,
			arg1);
	}
	void Matrix::setRotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setRotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2);
	}
	void Matrix::setRotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRotate",
			"(F)V",
			arg0);
	}
	void Matrix::setSinCos(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setSinCos",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Matrix::setSinCos(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setSinCos",
			"(FF)V",
			arg0,
			arg1);
	}
	void Matrix::setSkew(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setSkew",
			"(FF)V",
			arg0,
			arg1);
	}
	void Matrix::setSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setSkew",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean Matrix::setConcat(__jni_impl::android::graphics::Matrix arg0, __jni_impl::android::graphics::Matrix arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setConcat",
			"(Landroid/graphics/Matrix;Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean Matrix::preTranslate(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"preTranslate",
			"(FF)Z",
			arg0,
			arg1);
	}
	jboolean Matrix::preScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"preScale",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean Matrix::preScale(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"preScale",
			"(FF)Z",
			arg0,
			arg1);
	}
	jboolean Matrix::preRotate(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"preRotate",
			"(F)Z",
			arg0);
	}
	jboolean Matrix::preRotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"preRotate",
			"(FFF)Z",
			arg0,
			arg1,
			arg2);
	}
	jboolean Matrix::preSkew(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"preSkew",
			"(FF)Z",
			arg0,
			arg1);
	}
	jboolean Matrix::preSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"preSkew",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean Matrix::preConcat(__jni_impl::android::graphics::Matrix arg0)
	{
		return __thiz.callMethod<jboolean>(
			"preConcat",
			"(Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object());
	}
	jboolean Matrix::postTranslate(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postTranslate",
			"(FF)Z",
			arg0,
			arg1);
	}
	jboolean Matrix::postScale(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postScale",
			"(FF)Z",
			arg0,
			arg1);
	}
	jboolean Matrix::postScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"postScale",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean Matrix::postRotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"postRotate",
			"(FFF)Z",
			arg0,
			arg1,
			arg2);
	}
	jboolean Matrix::postRotate(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"postRotate",
			"(F)Z",
			arg0);
	}
	jboolean Matrix::postSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"postSkew",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean Matrix::postSkew(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postSkew",
			"(FF)Z",
			arg0,
			arg1);
	}
	jboolean Matrix::postConcat(__jni_impl::android::graphics::Matrix arg0)
	{
		return __thiz.callMethod<jboolean>(
			"postConcat",
			"(Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object());
	}
	jboolean Matrix::setRectToRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::RectF arg1, __jni_impl::android::graphics::Matrix_ScaleToFit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setRectToRect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;Landroid/graphics/Matrix$ScaleToFit;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
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
			arg4);
	}
	jboolean Matrix::invert(__jni_impl::android::graphics::Matrix arg0)
	{
		return __thiz.callMethod<jboolean>(
			"invert",
			"(Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object());
	}
	void Matrix::mapPoints(jfloatArray arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"mapPoints",
			"([F[F)V",
			arg0,
			arg1);
	}
	void Matrix::mapPoints(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"mapPoints",
			"([F)V",
			arg0);
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
			arg4);
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
			arg4);
	}
	void Matrix::mapVectors(jfloatArray arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"mapVectors",
			"([F[F)V",
			arg0,
			arg1);
	}
	void Matrix::mapVectors(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"mapVectors",
			"([F)V",
			arg0);
	}
	jboolean Matrix::mapRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::RectF arg1)
	{
		return __thiz.callMethod<jboolean>(
			"mapRect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean Matrix::mapRect(__jni_impl::android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"mapRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object());
	}
	jfloat Matrix::mapRadius(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"mapRadius",
			"(F)F",
			arg0);
	}
	void Matrix::getValues(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"getValues",
			"([F)V",
			arg0);
	}
	void Matrix::setValues(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setValues",
			"([F)V",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Matrix : public __jni_impl::android::graphics::Matrix
	{
	public:
		Matrix(QAndroidJniObject obj) { __thiz = obj; }
		Matrix()
		{
			__constructor();
		}
		Matrix(__jni_impl::android::graphics::Matrix arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_MATRIX

