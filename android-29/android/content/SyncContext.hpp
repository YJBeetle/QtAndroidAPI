#pragma once

#ifndef ANDROID_CONTENT_SYNCCONTEXT
#define ANDROID_CONTENT_SYNCCONTEXT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class SyncResult;
}

namespace __jni_impl::android::content
{
	class SyncContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getSyncContextBinder();
		void onFinished(__jni_impl::android::content::SyncResult arg0);
	};
} // namespace __jni_impl::android::content

#include "SyncResult.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void SyncContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncContext",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SyncContext::getSyncContextBinder()
	{
		return __thiz.callObjectMethod(
			"getSyncContextBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void SyncContext::onFinished(__jni_impl::android::content::SyncResult arg0)
	{
		__thiz.callMethod<void>(
			"onFinished",
			"(Landroid/content/SyncResult;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class SyncContext : public __jni_impl::android::content::SyncContext
	{
	public:
		SyncContext(QAndroidJniObject obj) { __thiz = obj; }
		SyncContext()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_SYNCCONTEXT

