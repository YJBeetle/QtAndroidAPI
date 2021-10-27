#pragma once

#ifndef ANDROID_APP_BACKUP_RESTOREOBSERVER
#define ANDROID_APP_BACKUP_RESTOREOBSERVER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::app::backup
{
	class RestoreObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onUpdate(jint arg0, jstring arg1);
		void onUpdate(jint arg0, const QString &arg1);
		void restoreFinished(jint arg0);
		void restoreStarting(jint arg0);
	};
} // namespace __jni_impl::android::app::backup


namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void RestoreObserver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.RestoreObserver",
			"()V"
		);
	}
	
	// Methods
	void RestoreObserver::onUpdate(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onUpdate",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void RestoreObserver::onUpdate(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onUpdate",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void RestoreObserver::restoreFinished(jint arg0)
	{
		__thiz.callMethod<void>(
			"restoreFinished",
			"(I)V",
			arg0
		);
	}
	void RestoreObserver::restoreStarting(jint arg0)
	{
		__thiz.callMethod<void>(
			"restoreStarting",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class RestoreObserver : public __jni_impl::android::app::backup::RestoreObserver
	{
	public:
		RestoreObserver(QAndroidJniObject obj) { __thiz = obj; }
		RestoreObserver()
		{
			__constructor();
		}
	};
} // namespace android::app::backup

#endif // ANDROID_APP_BACKUP_RESTOREOBSERVER

