#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class IntentSender;
}

namespace __jni_impl::android::companion
{
	class CompanionDeviceManager_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onDeviceFound(__jni_impl::android::content::IntentSender arg0);
		void onFailure(jstring arg0);
		void onFailure(const QString &arg0);
	};
} // namespace __jni_impl::android::companion

#include "../content/IntentSender.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	
	// Constructors
	void CompanionDeviceManager_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.CompanionDeviceManager$Callback",
			"()V"
		);
	}
	
	// Methods
	void CompanionDeviceManager_Callback::onDeviceFound(__jni_impl::android::content::IntentSender arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceFound",
			"(Landroid/content/IntentSender;)V",
			arg0.__jniObject().object()
		);
	}
	void CompanionDeviceManager_Callback::onFailure(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void CompanionDeviceManager_Callback::onFailure(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class CompanionDeviceManager_Callback : public __jni_impl::android::companion::CompanionDeviceManager_Callback
	{
	public:
		CompanionDeviceManager_Callback(QAndroidJniObject obj) { __thiz = obj; }
		CompanionDeviceManager_Callback()
		{
			__constructor();
		}
	};
} // namespace android::companion

