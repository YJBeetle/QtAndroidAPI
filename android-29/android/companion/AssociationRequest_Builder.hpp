#pragma once

#ifndef ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER
#define ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::companion
{
	class AssociationRequest;
}

namespace __jni_impl::android::companion
{
	class AssociationRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setSingleDevice(jboolean arg0);
		QAndroidJniObject addDeviceFilter(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::companion

#include "AssociationRequest.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	
	// Constructors
	void AssociationRequest_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.AssociationRequest$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AssociationRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/companion/AssociationRequest;"
		);
	}
	QAndroidJniObject AssociationRequest_Builder::setSingleDevice(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSingleDevice",
			"(Z)Landroid/companion/AssociationRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject AssociationRequest_Builder::addDeviceFilter(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addDeviceFilter",
			"(Landroid/companion/DeviceFilter;)Landroid/companion/AssociationRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class AssociationRequest_Builder : public __jni_impl::android::companion::AssociationRequest_Builder
	{
	public:
		AssociationRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AssociationRequest_Builder()
		{
			__constructor();
		}
	};
} // namespace android::companion

#endif // ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER

