#include "./Matrix.hpp"
#include "./Path.hpp"
#include "./PathMeasure.hpp"

namespace android::graphics
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
	
	PathMeasure::PathMeasure(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PathMeasure::PathMeasure()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PathMeasure",
			"()V"
		);
	}
	PathMeasure::PathMeasure(android::graphics::Path arg0, jboolean arg1)
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
	jboolean PathMeasure::getMatrix(jfloat arg0, android::graphics::Matrix arg1, jint arg2)
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
	jboolean PathMeasure::getSegment(jfloat arg0, jfloat arg1, android::graphics::Path arg2, jboolean arg3)
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
	void PathMeasure::setPath(android::graphics::Path arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setPath",
			"(Landroid/graphics/Path;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::graphics

