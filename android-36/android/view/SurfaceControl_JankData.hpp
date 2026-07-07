#pragma once

#include "../../JString.hpp"
#include "./SurfaceControl_JankData.def.hpp"

namespace android::view
{
	// Fields
	inline jint SurfaceControl_JankData::JANK_APPLICATION()
	{
		return getStaticField<jint>(
			"android.view.SurfaceControl$JankData",
			"JANK_APPLICATION"
		);
	}
	inline jint SurfaceControl_JankData::JANK_COMPOSER()
	{
		return getStaticField<jint>(
			"android.view.SurfaceControl$JankData",
			"JANK_COMPOSER"
		);
	}
	inline jint SurfaceControl_JankData::JANK_NONE()
	{
		return getStaticField<jint>(
			"android.view.SurfaceControl$JankData",
			"JANK_NONE"
		);
	}
	inline jint SurfaceControl_JankData::JANK_OTHER()
	{
		return getStaticField<jint>(
			"android.view.SurfaceControl$JankData",
			"JANK_OTHER"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong SurfaceControl_JankData::getActualAppFrameTimeNanos() const
	{
		return callMethod<jlong>(
			"getActualAppFrameTimeNanos",
			"()J"
		);
	}
	inline jint SurfaceControl_JankData::getJankType() const
	{
		return callMethod<jint>(
			"getJankType",
			"()I"
		);
	}
	inline jlong SurfaceControl_JankData::getScheduledAppFrameTimeNanos() const
	{
		return callMethod<jlong>(
			"getScheduledAppFrameTimeNanos",
			"()J"
		);
	}
	inline jlong SurfaceControl_JankData::getVsyncId() const
	{
		return callMethod<jlong>(
			"getVsyncId",
			"()J"
		);
	}
	inline JString SurfaceControl_JankData::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
