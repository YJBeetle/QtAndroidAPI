#include "./SurfaceHolder_BadSurfaceTypeException.hpp"

namespace android::view
{
	// Fields
	
	SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException()
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"()V"
		);
	}
	SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceHolder$BadSurfaceTypeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::view

