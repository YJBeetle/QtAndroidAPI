#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService;
}
namespace __jni_impl::android::graphics
{
	class Region;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService_MagnificationController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void addListener(__jni_impl::__JniBaseClass arg0);
		void addListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		jfloat getCenterX();
		jfloat getCenterY();
		QAndroidJniObject getMagnificationRegion();
		jfloat getScale();
		jboolean removeListener(__jni_impl::__JniBaseClass arg0);
		jboolean reset(jboolean arg0);
		jboolean setCenter(jfloat arg0, jfloat arg1, jboolean arg2);
		jboolean setScale(jfloat arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::accessibilityservice

#include "./AccessibilityService.hpp"
#include "../graphics/Region.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void AccessibilityService_MagnificationController::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityService$MagnificationController",
			"(V)V");
	}
	
	// Methods
	void AccessibilityService_MagnificationController::addListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityService_MagnificationController::addListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jfloat AccessibilityService_MagnificationController::getCenterX()
	{
		return __thiz.callMethod<jfloat>(
			"getCenterX",
			"()F"
		);
	}
	jfloat AccessibilityService_MagnificationController::getCenterY()
	{
		return __thiz.callMethod<jfloat>(
			"getCenterY",
			"()F"
		);
	}
	QAndroidJniObject AccessibilityService_MagnificationController::getMagnificationRegion()
	{
		return __thiz.callObjectMethod(
			"getMagnificationRegion",
			"()Landroid/graphics/Region;"
		);
	}
	jfloat AccessibilityService_MagnificationController::getScale()
	{
		return __thiz.callMethod<jfloat>(
			"getScale",
			"()F"
		);
	}
	jboolean AccessibilityService_MagnificationController::removeListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeListener",
			"(Landroid/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityService_MagnificationController::reset(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"reset",
			"(Z)Z",
			arg0
		);
	}
	jboolean AccessibilityService_MagnificationController::setCenter(jfloat arg0, jfloat arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setCenter",
			"(FFZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AccessibilityService_MagnificationController::setScale(jfloat arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setScale",
			"(FZ)Z",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class AccessibilityService_MagnificationController : public __jni_impl::android::accessibilityservice::AccessibilityService_MagnificationController
	{
	public:
		AccessibilityService_MagnificationController(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityService_MagnificationController()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

