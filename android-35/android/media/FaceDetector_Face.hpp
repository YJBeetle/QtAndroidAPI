#pragma once

#include "../graphics/PointF.def.hpp"
#include "./FaceDetector.def.hpp"
#include "./FaceDetector_Face.def.hpp"

namespace android::media
{
	// Fields
	inline jfloat FaceDetector_Face::CONFIDENCE_THRESHOLD()
	{
		return getStaticField<jfloat>(
			"android.media.FaceDetector$Face",
			"CONFIDENCE_THRESHOLD"
		);
	}
	inline jint FaceDetector_Face::EULER_X()
	{
		return getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_X"
		);
	}
	inline jint FaceDetector_Face::EULER_Y()
	{
		return getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_Y"
		);
	}
	inline jint FaceDetector_Face::EULER_Z()
	{
		return getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_Z"
		);
	}
	
	// Constructors
	
	// Methods
	inline jfloat FaceDetector_Face::confidence() const
	{
		return callMethod<jfloat>(
			"confidence",
			"()F"
		);
	}
	inline jfloat FaceDetector_Face::eyesDistance() const
	{
		return callMethod<jfloat>(
			"eyesDistance",
			"()F"
		);
	}
	inline void FaceDetector_Face::getMidPoint(android::graphics::PointF arg0) const
	{
		callMethod<void>(
			"getMidPoint",
			"(Landroid/graphics/PointF;)V",
			arg0.object()
		);
	}
	inline jfloat FaceDetector_Face::pose(jint arg0) const
	{
		return callMethod<jfloat>(
			"pose",
			"(I)F",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
