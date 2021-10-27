#include "./SurfaceTexture_OutOfResourcesException.hpp"

namespace android::graphics
{
	// Fields
	
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"()V"
		);
	}
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::graphics

