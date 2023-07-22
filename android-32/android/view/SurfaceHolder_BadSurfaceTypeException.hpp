#pragma once

#include "../../JString.hpp"
#include "./SurfaceHolder_BadSurfaceTypeException.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException()
		: java::lang::RuntimeException(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"()V"
		) {}
	inline SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
