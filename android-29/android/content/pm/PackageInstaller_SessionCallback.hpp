#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK
#define ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::content::pm
{
	class PackageInstaller_SessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onProgressChanged(jint arg0, jfloat arg1);
		void onFinished(jint arg0, jboolean arg1);
		void onBadgingChanged(jint arg0);
		void onCreated(jint arg0);
		void onActiveChanged(jint arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::content::pm


namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void PackageInstaller_SessionCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageInstaller$SessionCallback",
			"()V");
	}
	
	// Methods
	void PackageInstaller_SessionCallback::onProgressChanged(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"onProgressChanged",
			"(IF)V",
			arg0,
			arg1);
	}
	void PackageInstaller_SessionCallback::onFinished(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onFinished",
			"(IZ)V",
			arg0,
			arg1);
	}
	void PackageInstaller_SessionCallback::onBadgingChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onBadgingChanged",
			"(I)V",
			arg0);
	}
	void PackageInstaller_SessionCallback::onCreated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onCreated",
			"(I)V",
			arg0);
	}
	void PackageInstaller_SessionCallback::onActiveChanged(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onActiveChanged",
			"(IZ)V",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageInstaller_SessionCallback : public __jni_impl::android::content::pm::PackageInstaller_SessionCallback
	{
	public:
		PackageInstaller_SessionCallback(QAndroidJniObject obj) { __thiz = obj; }
		PackageInstaller_SessionCallback()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK

