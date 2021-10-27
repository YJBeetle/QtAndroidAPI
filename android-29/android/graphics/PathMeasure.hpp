#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Path;
}

namespace __jni_impl::android::graphics
{
	class PathMeasure : public __JniBaseClass
	{
	public:
		// Fields
		static jint POSITION_MATRIX_FLAG();
		static jint TANGENT_MATRIX_FLAG();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Path arg0, jboolean arg1);
		
		// Methods
		jfloat getLength();
		jboolean getMatrix(jfloat arg0, __jni_impl::android::graphics::Matrix arg1, jint arg2);
		jboolean getPosTan(jfloat arg0, jfloatArray arg1, jfloatArray arg2);
		jboolean getSegment(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Path arg2, jboolean arg3);
		jboolean isClosed();
		jboolean nextContour();
		void setPath(__jni_impl::android::graphics::Path arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::graphics

#include "./Matrix.hpp"
#include "./Path.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jint PathMeasure::POSITION_MATRIX_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PathMeasure",
			"POSITION_MATRIX_FLAG"
		);
	}
	jint PathMeasure::TANGENT_MATRIX_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PathMeasure",
			"TANGENT_MATRIX_FLAG"
		);
	}
	
	// Constructors
	void PathMeasure::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PathMeasure",
			"()V"
		);
	}
	void PathMeasure::__constructor(__jni_impl::android::graphics::Path arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PathMeasure",
			"(Landroid/graphics/Path;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jfloat PathMeasure::getLength()
	{
		return __thiz.callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	jboolean PathMeasure::getMatrix(jfloat arg0, __jni_impl::android::graphics::Matrix arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"getMatrix",
			"(FLandroid/graphics/Matrix;I)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean PathMeasure::getPosTan(jfloat arg0, jfloatArray arg1, jfloatArray arg2)
	{
		return __thiz.callMethod<jboolean>(
			"getPosTan",
			"(F[F[F)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PathMeasure::getSegment(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Path arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"getSegment",
			"(FFLandroid/graphics/Path;Z)Z",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	jboolean PathMeasure::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean PathMeasure::nextContour()
	{
		return __thiz.callMethod<jboolean>(
			"nextContour",
			"()Z"
		);
	}
	void PathMeasure::setPath(__jni_impl::android::graphics::Path arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setPath",
			"(Landroid/graphics/Path;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PathMeasure : public __jni_impl::android::graphics::PathMeasure
	{
	public:
		PathMeasure(QAndroidJniObject obj) { __thiz = obj; }
		PathMeasure()
		{
			__constructor();
		}
		PathMeasure(__jni_impl::android::graphics::Path arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

