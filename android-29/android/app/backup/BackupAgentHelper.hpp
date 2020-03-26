#pragma once

#ifndef ANDROID_APP_BACKUP_BACKUPAGENTHELPER
#define ANDROID_APP_BACKUP_BACKUPAGENTHELPER

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "BackupAgent.hpp"

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::app::backup
{
	class BackupDataOutput;
}
namespace __jni_impl::android::app::backup
{
	class BackupDataInput;
}

namespace __jni_impl::android::app::backup
{
	class BackupAgentHelper : public __jni_impl::android::app::backup::BackupAgent
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onBackup(__jni_impl::android::os::ParcelFileDescriptor arg0, __jni_impl::android::app::backup::BackupDataOutput arg1, __jni_impl::android::os::ParcelFileDescriptor arg2);
		void onRestore(__jni_impl::android::app::backup::BackupDataInput arg0, jint arg1, __jni_impl::android::os::ParcelFileDescriptor arg2);
		void addHelper(jstring arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::app::backup

#include "../../os/ParcelFileDescriptor.hpp"
#include "BackupDataOutput.hpp"
#include "BackupDataInput.hpp"

namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void BackupAgentHelper::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupAgentHelper",
			"()V");
	}
	
	// Methods
	void BackupAgentHelper::onBackup(__jni_impl::android::os::ParcelFileDescriptor arg0, __jni_impl::android::app::backup::BackupDataOutput arg1, __jni_impl::android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BackupAgentHelper::onRestore(__jni_impl::android::app::backup::BackupDataInput arg0, jint arg1, __jni_impl::android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BackupAgentHelper::addHelper(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"addHelper",
			"(Ljava/lang/String;Landroid/app/backup/BackupHelper;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class BackupAgentHelper : public __jni_impl::android::app::backup::BackupAgentHelper
	{
	public:
		BackupAgentHelper(QAndroidJniObject obj) { __thiz = obj; }
		BackupAgentHelper()
		{
			__constructor();
		}
	};
} // namespace android::app::backup

#endif // ANDROID_APP_BACKUP_BACKUPAGENTHELPER

