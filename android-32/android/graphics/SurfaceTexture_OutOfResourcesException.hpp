#pragma once

#include "../../JString.hpp"
#include "./SurfaceTexture_OutOfResourcesException.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException()
		: java::lang::Exception(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"()V"
		) {}
	inline SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(JString arg0)
		: java::lang::Exception(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
