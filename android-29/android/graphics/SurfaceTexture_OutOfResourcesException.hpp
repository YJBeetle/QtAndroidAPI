#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::graphics
{
	class SurfaceTexture_OutOfResourcesException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void SurfaceTexture_OutOfResourcesException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"()V"
		);
	}
	void SurfaceTexture_OutOfResourcesException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SurfaceTexture_OutOfResourcesException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class SurfaceTexture_OutOfResourcesException : public __jni_impl::android::graphics::SurfaceTexture_OutOfResourcesException
	{
	public:
		SurfaceTexture_OutOfResourcesException(QAndroidJniObject obj) { __thiz = obj; }
		SurfaceTexture_OutOfResourcesException()
		{
			__constructor();
		}
		SurfaceTexture_OutOfResourcesException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

