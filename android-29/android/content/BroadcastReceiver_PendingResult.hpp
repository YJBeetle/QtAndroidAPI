#pragma once

#ifndef ANDROID_CONTENT_BROADCASTRECEIVER_PENDINGRESULT
#define ANDROID_CONTENT_BROADCASTRECEIVER_PENDINGRESULT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::content
{
	class BroadcastReceiver_PendingResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void abortBroadcast();
		void clearAbortBroadcast();
		void finish();
		jboolean getAbortBroadcast();
		jint getResultCode();
		jstring getResultData();
		QAndroidJniObject getResultExtras(jboolean arg0);
		void setResult(jint arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void setResult(jint arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		void setResultCode(jint arg0);
		void setResultData(jstring arg0);
		void setResultData(const QString &arg0);
		void setResultExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::content

#include "../os/Bundle.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void BroadcastReceiver_PendingResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.BroadcastReceiver$PendingResult",
			"(V)V");
	}
	
	// Methods
	void BroadcastReceiver_PendingResult::abortBroadcast()
	{
		__thiz.callMethod<void>(
			"abortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver_PendingResult::clearAbortBroadcast()
	{
		__thiz.callMethod<void>(
			"clearAbortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver_PendingResult::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	jboolean BroadcastReceiver_PendingResult::getAbortBroadcast()
	{
		return __thiz.callMethod<jboolean>(
			"getAbortBroadcast",
			"()Z"
		);
	}
	jint BroadcastReceiver_PendingResult::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jstring BroadcastReceiver_PendingResult::getResultData()
	{
		return __thiz.callObjectMethod(
			"getResultData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BroadcastReceiver_PendingResult::getResultExtras(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"getResultExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResult(jint arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BroadcastReceiver_PendingResult::setResult(jint arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void BroadcastReceiver_PendingResult::setResultCode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setResultCode",
			"(I)V",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResultData(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResultData(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void BroadcastReceiver_PendingResult::setResultExtras(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setResultExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class BroadcastReceiver_PendingResult : public __jni_impl::android::content::BroadcastReceiver_PendingResult
	{
	public:
		BroadcastReceiver_PendingResult(QAndroidJniObject obj) { __thiz = obj; }
		BroadcastReceiver_PendingResult()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_BROADCASTRECEIVER_PENDINGRESULT

