#pragma once

#include "../../JFloatArray.hpp"
#include "./Matrix.def.hpp"
#include "./Path.def.hpp"
#include "./PathMeasure.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint PathMeasure::POSITION_MATRIX_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.PathMeasure",
			"POSITION_MATRIX_FLAG"
		);
	}
	inline jint PathMeasure::TANGENT_MATRIX_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.PathMeasure",
			"TANGENT_MATRIX_FLAG"
		);
	}
	
	// Constructors
	inline PathMeasure::PathMeasure()
		: JObject(
			"android.graphics.PathMeasure",
			"()V"
		) {}
	inline PathMeasure::PathMeasure(android::graphics::Path arg0, jboolean arg1)
		: JObject(
			"android.graphics.PathMeasure",
			"(Landroid/graphics/Path;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jfloat PathMeasure::getLength() const
	{
		return callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	inline jboolean PathMeasure::getMatrix(jfloat arg0, android::graphics::Matrix arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"getMatrix",
			"(FLandroid/graphics/Matrix;I)Z",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline jboolean PathMeasure::getPosTan(jfloat arg0, JFloatArray arg1, JFloatArray arg2) const
	{
		return callMethod<jboolean>(
			"getPosTan",
			"(F[F[F)Z",
			arg0,
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>()
		);
	}
	inline jboolean PathMeasure::getSegment(jfloat arg0, jfloat arg1, android::graphics::Path arg2, jboolean arg3) const
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
	inline jboolean PathMeasure::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline jboolean PathMeasure::nextContour() const
	{
		return callMethod<jboolean>(
			"nextContour",
			"()Z"
		);
	}
	inline void PathMeasure::setPath(android::graphics::Path arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setPath",
			"(Landroid/graphics/Path;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
