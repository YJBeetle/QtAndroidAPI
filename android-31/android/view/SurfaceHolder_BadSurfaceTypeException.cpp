#include "./SurfaceHolder_BadSurfaceTypeException.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException()
		: java::lang::RuntimeException(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"()V"
		) {}
	SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException(jstring arg0)
		: java::lang::RuntimeException(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::view

