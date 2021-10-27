#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class BroadcastReceiver_PendingResult;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::content
{
	class BroadcastReceiver : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void abortBroadcast();
		void clearAbortBroadcast();
		jboolean getAbortBroadcast();
		jboolean getDebugUnregister();
		jint getResultCode();
		jstring getResultData();
		QAndroidJniObject getResultExtras(jboolean arg0);
		QAndroidJniObject goAsync();
		jboolean isInitialStickyBroadcast();
		jboolean isOrderedBroadcast();
		void onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		QAndroidJniObject peekService(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void setDebugUnregister(jboolean arg0);
		void setOrderedHint(jboolean arg0);
		void setResult(jint arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void setResult(jint arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		void setResultCode(jint arg0);
		void setResultData(jstring arg0);
		void setResultData(const QString &arg0);
		void setResultExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::content

#include "./BroadcastReceiver_PendingResult.hpp"
#include "./Context.hpp"
#include "./Intent.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void BroadcastReceiver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.BroadcastReceiver",
			"()V"
		);
	}
	
	// Methods
	void BroadcastReceiver::abortBroadcast()
	{
		__thiz.callMethod<void>(
			"abortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver::clearAbortBroadcast()
	{
		__thiz.callMethod<void>(
			"clearAbortBroadcast",
			"()V"
		);
	}
	jboolean BroadcastReceiver::getAbortBroadcast()
	{
		return __thiz.callMethod<jboolean>(
			"getAbortBroadcast",
			"()Z"
		);
	}
	jboolean BroadcastReceiver::getDebugUnregister()
	{
		return __thiz.callMethod<jboolean>(
			"getDebugUnregister",
			"()Z"
		);
	}
	jint BroadcastReceiver::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jstring BroadcastReceiver::getResultData()
	{
		return __thiz.callObjectMethod(
			"getResultData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BroadcastReceiver::getResultExtras(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"getResultExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	QAndroidJniObject BroadcastReceiver::goAsync()
	{
		return __thiz.callObjectMethod(
			"goAsync",
			"()Landroid/content/BroadcastReceiver$PendingResult;"
		);
	}
	jboolean BroadcastReceiver::isInitialStickyBroadcast()
	{
		return __thiz.callMethod<jboolean>(
			"isInitialStickyBroadcast",
			"()Z"
		);
	}
	jboolean BroadcastReceiver::isOrderedBroadcast()
	{
		return __thiz.callMethod<jboolean>(
			"isOrderedBroadcast",
			"()Z"
		);
	}
	void BroadcastReceiver::onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BroadcastReceiver::peekService(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		return __thiz.callObjectMethod(
			"peekService",
			"(Landroid/content/Context;Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void BroadcastReceiver::setDebugUnregister(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDebugUnregister",
			"(Z)V",
			arg0
		);
	}
	void BroadcastReceiver::setOrderedHint(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOrderedHint",
			"(Z)V",
			arg0
		);
	}
	void BroadcastReceiver::setResult(jint arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BroadcastReceiver::setResult(jint arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void BroadcastReceiver::setResultCode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setResultCode",
			"(I)V",
			arg0
		);
	}
	void BroadcastReceiver::setResultData(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BroadcastReceiver::setResultData(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void BroadcastReceiver::setResultExtras(__jni_impl::android::os::Bundle arg0)
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
	class BroadcastReceiver : public __jni_impl::android::content::BroadcastReceiver
	{
	public:
		BroadcastReceiver(QAndroidJniObject obj) { __thiz = obj; }
		BroadcastReceiver()
		{
			__constructor();
		}
	};
} // namespace android::content

