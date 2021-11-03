#include "../../JFloatArray.hpp"
#include "./Matrix.hpp"
#include "./Path.hpp"
#include "./PathMeasure.hpp"

namespace android::graphics
{
	// Fields
	jint PathMeasure::POSITION_MATRIX_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.PathMeasure",
			"POSITION_MATRIX_FLAG"
		);
	}
	jint PathMeasure::TANGENT_MATRIX_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.PathMeasure",
			"TANGENT_MATRIX_FLAG"
		);
	}
	
	// QJniObject forward
	PathMeasure::PathMeasure(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PathMeasure::PathMeasure()
		: JObject(
			"android.graphics.PathMeasure",
			"()V"
		) {}
	PathMeasure::PathMeasure(android::graphics::Path arg0, jboolean arg1)
		: JObject(
			"android.graphics.PathMeasure",
			"(Landroid/graphics/Path;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jfloat PathMeasure::getLength()
	{
		return callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	jboolean PathMeasure::getMatrix(jfloat arg0, android::graphics::Matrix arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"getMatrix",
			"(FLandroid/graphics/Matrix;I)Z",
			arg0,
			arg1.object(),
			arg2
		);
	}
	jboolean PathMeasure::getPosTan(jfloat arg0, JFloatArray arg1, JFloatArray arg2)
	{
		return callMethod<jboolean>(
			"getPosTan",
			"(F[F[F)Z",
			arg0,
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>()
		);
	}
	jboolean PathMeasure::getSegment(jfloat arg0, jfloat arg1, android::graphics::Path arg2, jboolean arg3)
	{
		return callMethod<jboolean>(
			"getSegment",
			"(FFLandroid/graphics/Path;Z)Z",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	jboolean PathMeasure::isClosed()
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean PathMeasure::nextContour()
	{
		return callMethod<jboolean>(
			"nextContour",
			"()Z"
		);
	}
	void PathMeasure::setPath(android::graphics::Path arg0, jboolean arg1)
	{
		callMethod<void>(
			"setPath",
			"(Landroid/graphics/Path;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

