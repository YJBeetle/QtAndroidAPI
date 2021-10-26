#pragma once

#ifndef ANDROID_CONTENT_SYNCREQUEST_BUILDER
#define ANDROID_CONTENT_SYNCREQUEST_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class SyncRequest;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::accounts
{
	class Account;
}

namespace __jni_impl::android::content
{
	class SyncRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setRequiresCharging(jboolean arg0);
		QAndroidJniObject syncPeriodic(jlong arg0, jlong arg1);
		QAndroidJniObject syncOnce();
		QAndroidJniObject setDisallowMetered(jboolean arg0);
		QAndroidJniObject setSyncAdapter(__jni_impl::android::accounts::Account arg0, jstring arg1);
		QAndroidJniObject setSyncAdapter(__jni_impl::android::accounts::Account arg0, const QString &arg1);
		QAndroidJniObject setNoRetry(jboolean arg0);
		QAndroidJniObject setIgnoreSettings(jboolean arg0);
		QAndroidJniObject setIgnoreBackoff(jboolean arg0);
		QAndroidJniObject setManual(jboolean arg0);
		QAndroidJniObject setExpedited(jboolean arg0);
	};
} // namespace __jni_impl::android::content

#include "SyncRequest.hpp"
#include "../os/Bundle.hpp"
#include "../accounts/Account.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void SyncRequest_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncRequest$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SyncRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/content/SyncRequest;"
		);
	}
	QAndroidJniObject SyncRequest_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/content/SyncRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SyncRequest_Builder::setRequiresCharging(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::syncPeriodic(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"syncPeriodic",
			"(JJ)Landroid/content/SyncRequest$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SyncRequest_Builder::syncOnce()
	{
		return __thiz.callObjectMethod(
			"syncOnce",
			"()Landroid/content/SyncRequest$Builder;"
		);
	}
	QAndroidJniObject SyncRequest_Builder::setDisallowMetered(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setDisallowMetered",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setSyncAdapter(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setSyncAdapter",
			"(Landroid/accounts/Account;Ljava/lang/String;)Landroid/content/SyncRequest$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SyncRequest_Builder::setSyncAdapter(__jni_impl::android::accounts::Account arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setSyncAdapter",
			"(Landroid/accounts/Account;Ljava/lang/String;)Landroid/content/SyncRequest$Builder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject SyncRequest_Builder::setNoRetry(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setNoRetry",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setIgnoreSettings(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIgnoreSettings",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setIgnoreBackoff(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIgnoreBackoff",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setManual(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setManual",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setExpedited(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setExpedited",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class SyncRequest_Builder : public __jni_impl::android::content::SyncRequest_Builder
	{
	public:
		SyncRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
		SyncRequest_Builder()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_SYNCREQUEST_BUILDER

