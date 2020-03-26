#pragma once

#ifndef ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER
#define ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accessibilityservice
{
	class GestureDescription;
}
namespace __jni_impl::android::accessibilityservice
{
	class GestureDescription_StrokeDescription;
}

namespace __jni_impl::android::accessibilityservice
{
	class GestureDescription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addStroke(__jni_impl::android::accessibilityservice::GestureDescription_StrokeDescription arg0);
	};
} // namespace __jni_impl::android::accessibilityservice

#include "GestureDescription.hpp"
#include "GestureDescription_StrokeDescription.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void GestureDescription_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.GestureDescription$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject GestureDescription_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/accessibilityservice/GestureDescription;"
		);
	}
	QAndroidJniObject GestureDescription_Builder::addStroke(__jni_impl::android::accessibilityservice::GestureDescription_StrokeDescription arg0)
	{
		return __thiz.callObjectMethod(
			"addStroke",
			"(Landroid/accessibilityservice/GestureDescription$StrokeDescription;)Landroid/accessibilityservice/GestureDescription$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class GestureDescription_Builder : public __jni_impl::android::accessibilityservice::GestureDescription_Builder
	{
	public:
		GestureDescription_Builder(QAndroidJniObject obj) { __thiz = obj; }
		GestureDescription_Builder()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

#endif // ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER

