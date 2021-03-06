#pragma once

#ifndef ANDROID_APP_BACKUP_BACKUPMANAGER
#define ANDROID_APP_BACKUP_BACKUPMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::app::backup
{
	class RestoreObserver;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}

namespace __jni_impl::android::app::backup
{
	class BackupManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		static void dataChanged(jstring arg0);
		void dataChanged();
		jint requestRestore(__jni_impl::android::app::backup::RestoreObserver arg0);
		QAndroidJniObject getUserForAncestralSerialNumber(jlong arg0);
	};
} // namespace __jni_impl::android::app::backup

#include "../../content/Context.hpp"
#include "RestoreObserver.hpp"
#include "../../os/UserHandle.hpp"

namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void BackupManager::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupManager",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void BackupManager::dataChanged(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.backup.BackupManager",
			"dataChanged",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BackupManager::dataChanged()
	{
		__thiz.callMethod<void>(
			"dataChanged",
			"()V"
		);
	}
	jint BackupManager::requestRestore(__jni_impl::android::app::backup::RestoreObserver arg0)
	{
		return __thiz.callMethod<jint>(
			"requestRestore",
			"(Landroid/app/backup/RestoreObserver;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BackupManager::getUserForAncestralSerialNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"getUserForAncestralSerialNumber",
			"(J)Landroid/os/UserHandle;",
			arg0
		);
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class BackupManager : public __jni_impl::android::app::backup::BackupManager
	{
	public:
		BackupManager(QAndroidJniObject obj) { __thiz = obj; }
		BackupManager(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app::backup

#endif // ANDROID_APP_BACKUP_BACKUPMANAGER

