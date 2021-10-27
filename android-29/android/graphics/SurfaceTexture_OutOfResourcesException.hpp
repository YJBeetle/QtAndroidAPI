#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::graphics
{
	class SurfaceTexture_OutOfResourcesException : public java::lang::Exception
	{
	public:
		// Fields
		
		SurfaceTexture_OutOfResourcesException(QAndroidJniObject obj);
		// Constructors
		SurfaceTexture_OutOfResourcesException();
		SurfaceTexture_OutOfResourcesException(jstring &arg0);
		SurfaceTexture_OutOfResourcesException(const QString &arg0);
		
		// Methods
	};
} // namespace android::graphics

