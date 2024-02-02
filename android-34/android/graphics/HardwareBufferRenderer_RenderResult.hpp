#pragma once

#include "../hardware/SyncFence.def.hpp"
#include "./HardwareBufferRenderer_RenderResult.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint HardwareBufferRenderer_RenderResult::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareBufferRenderer$RenderResult",
			"ERROR_UNKNOWN"
		);
	}
	inline jint HardwareBufferRenderer_RenderResult::SUCCESS()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareBufferRenderer$RenderResult",
			"SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::hardware::SyncFence HardwareBufferRenderer_RenderResult::getFence() const
	{
		return callObjectMethod(
			"getFence",
			"()Landroid/hardware/SyncFence;"
		);
	}
	inline jint HardwareBufferRenderer_RenderResult::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
