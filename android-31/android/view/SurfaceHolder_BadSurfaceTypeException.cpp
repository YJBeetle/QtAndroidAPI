#include "../../JString.hpp"
#include "./SurfaceHolder_BadSurfaceTypeException.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException()
		: java::lang::RuntimeException(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"()V"
		) {}
	SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view

