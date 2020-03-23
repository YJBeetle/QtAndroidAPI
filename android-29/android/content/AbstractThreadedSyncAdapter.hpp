#pragma once

#ifndef ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER
#define ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::accounts
{
	class Account;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class ContentProviderClient;
}
namespace __jni_impl::android::content
{
	class SyncResult;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::android::content
{
	class AbstractThreadedSyncAdapter : public __JniBaseClass
	{
	public:
		// Fields
		static jint LOG_SYNC_DETAILS();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jboolean arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jboolean arg1, jboolean arg2);
		
		// Methods
		QAndroidJniObject getContext();
		QAndroidJniObject getSyncAdapterBinder();
		jboolean onUnsyncableAccount();
		void onPerformSync(__jni_impl::android::accounts::Account arg0, __jni_impl::android::os::Bundle arg1, jstring arg2, __jni_impl::android::content::ContentProviderClient arg3, __jni_impl::android::content::SyncResult arg4);
		void onSecurityException(__jni_impl::android::accounts::Account arg0, __jni_impl::android::os::Bundle arg1, jstring arg2, __jni_impl::android::content::SyncResult arg3);
		void onSyncCanceled(__jni_impl::java::lang::Thread arg0);
		void onSyncCanceled();
	};
} // namespace __jni_impl::android::content

#include "Context.hpp"
#include "../accounts/Account.hpp"
#include "../os/Bundle.hpp"
#include "ContentProviderClient.hpp"
#include "SyncResult.hpp"
#include "../../java/lang/Thread.hpp"

namespace __jni_impl::android::content
{
	// Fields
	jint AbstractThreadedSyncAdapter::LOG_SYNC_DETAILS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.AbstractThreadedSyncAdapter",
			"LOG_SYNC_DETAILS");
	}
	
	// Constructors
	void AbstractThreadedSyncAdapter::__constructor(__jni_impl::android::content::Context arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.AbstractThreadedSyncAdapter",
			"(Landroid/content/Context;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void AbstractThreadedSyncAdapter::__constructor(__jni_impl::android::content::Context arg0, jboolean arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.AbstractThreadedSyncAdapter",
			"(Landroid/content/Context;ZZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject AbstractThreadedSyncAdapter::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;");
	}
	QAndroidJniObject AbstractThreadedSyncAdapter::getSyncAdapterBinder()
	{
		return __thiz.callObjectMethod(
			"getSyncAdapterBinder",
			"()Landroid/os/IBinder;");
	}
	jboolean AbstractThreadedSyncAdapter::onUnsyncableAccount()
	{
		return __thiz.callMethod<jboolean>(
			"onUnsyncableAccount",
			"()Z");
	}
	void AbstractThreadedSyncAdapter::onPerformSync(__jni_impl::android::accounts::Account arg0, __jni_impl::android::os::Bundle arg1, jstring arg2, __jni_impl::android::content::ContentProviderClient arg3, __jni_impl::android::content::SyncResult arg4)
	{
		__thiz.callMethod<void>(
			"onPerformSync",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/ContentProviderClient;Landroid/content/SyncResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void AbstractThreadedSyncAdapter::onSecurityException(__jni_impl::android::accounts::Account arg0, __jni_impl::android::os::Bundle arg1, jstring arg2, __jni_impl::android::content::SyncResult arg3)
	{
		__thiz.callMethod<void>(
			"onSecurityException",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/SyncResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	void AbstractThreadedSyncAdapter::onSyncCanceled(__jni_impl::java::lang::Thread arg0)
	{
		__thiz.callMethod<void>(
			"onSyncCanceled",
			"(Ljava/lang/Thread;)V",
			arg0.__jniObject().object());
	}
	void AbstractThreadedSyncAdapter::onSyncCanceled()
	{
		__thiz.callMethod<void>(
			"onSyncCanceled",
			"()V");
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class AbstractThreadedSyncAdapter : public __jni_impl::android::content::AbstractThreadedSyncAdapter
	{
	public:
		AbstractThreadedSyncAdapter(QAndroidJniObject obj) { __thiz = obj; }
		AbstractThreadedSyncAdapter(__jni_impl::android::content::Context arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AbstractThreadedSyncAdapter(__jni_impl::android::content::Context arg0, jboolean arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER

