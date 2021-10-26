#pragma once

#ifndef ANDROID_APP_BACKUP_BACKUPAGENT
#define ANDROID_APP_BACKUP_BACKUPAGENT

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"

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
	class FullBackupDataOutput;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::app::backup
{
	class BackupAgent : public __jni_impl::android::content::ContextWrapper
	{
	public:
		// Fields
		static jint FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED();
		static jint FLAG_DEVICE_TO_DEVICE_TRANSFER();
		static jint TYPE_DIRECTORY();
		static jint TYPE_FILE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onBackup(__jni_impl::android::os::ParcelFileDescriptor arg0, __jni_impl::android::app::backup::BackupDataOutput arg1, __jni_impl::android::os::ParcelFileDescriptor arg2);
		void onRestore(__jni_impl::android::app::backup::BackupDataInput arg0, jlong arg1, __jni_impl::android::os::ParcelFileDescriptor arg2);
		void onRestore(__jni_impl::android::app::backup::BackupDataInput arg0, jint arg1, __jni_impl::android::os::ParcelFileDescriptor arg2);
		void onFullBackup(__jni_impl::android::app::backup::FullBackupDataOutput arg0);
		void onQuotaExceeded(jlong arg0, jlong arg1);
		void fullBackupFile(__jni_impl::java::io::File arg0, __jni_impl::android::app::backup::FullBackupDataOutput arg1);
		void onRestoreFile(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, __jni_impl::java::io::File arg2, jint arg3, jlong arg4, jlong arg5);
		void onRestoreFinished();
		void onCreate();
		void onDestroy();
	};
} // namespace __jni_impl::android::app::backup

#include "../../os/ParcelFileDescriptor.hpp"
#include "BackupDataOutput.hpp"
#include "BackupDataInput.hpp"
#include "FullBackupDataOutput.hpp"
#include "../../../java/io/File.hpp"

namespace __jni_impl::android::app::backup
{
	// Fields
	jint BackupAgent::FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED"
		);
	}
	jint BackupAgent::FLAG_DEVICE_TO_DEVICE_TRANSFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"FLAG_DEVICE_TO_DEVICE_TRANSFER"
		);
	}
	jint BackupAgent::TYPE_DIRECTORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"TYPE_DIRECTORY"
		);
	}
	jint BackupAgent::TYPE_FILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"TYPE_FILE"
		);
	}
	
	// Constructors
	void BackupAgent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupAgent",
			"()V"
		);
	}
	
	// Methods
	void BackupAgent::onBackup(__jni_impl::android::os::ParcelFileDescriptor arg0, __jni_impl::android::app::backup::BackupDataOutput arg1, __jni_impl::android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BackupAgent::onRestore(__jni_impl::android::app::backup::BackupDataInput arg0, jlong arg1, __jni_impl::android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;JLandroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BackupAgent::onRestore(__jni_impl::android::app::backup::BackupDataInput arg0, jint arg1, __jni_impl::android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BackupAgent::onFullBackup(__jni_impl::android::app::backup::FullBackupDataOutput arg0)
	{
		__thiz.callMethod<void>(
			"onFullBackup",
			"(Landroid/app/backup/FullBackupDataOutput;)V",
			arg0.__jniObject().object()
		);
	}
	void BackupAgent::onQuotaExceeded(jlong arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"onQuotaExceeded",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	void BackupAgent::fullBackupFile(__jni_impl::java::io::File arg0, __jni_impl::android::app::backup::FullBackupDataOutput arg1)
	{
		__thiz.callMethod<void>(
			"fullBackupFile",
			"(Ljava/io/File;Landroid/app/backup/FullBackupDataOutput;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void BackupAgent::onRestoreFile(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, __jni_impl::java::io::File arg2, jint arg3, jlong arg4, jlong arg5)
	{
		__thiz.callMethod<void>(
			"onRestoreFile",
			"(Landroid/os/ParcelFileDescriptor;JLjava/io/File;IJJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5
		);
	}
	void BackupAgent::onRestoreFinished()
	{
		__thiz.callMethod<void>(
			"onRestoreFinished",
			"()V"
		);
	}
	void BackupAgent::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void BackupAgent::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class BackupAgent : public __jni_impl::android::app::backup::BackupAgent
	{
	public:
		BackupAgent(QAndroidJniObject obj) { __thiz = obj; }
		BackupAgent()
		{
			__constructor();
		}
	};
} // namespace android::app::backup

#endif // ANDROID_APP_BACKUP_BACKUPAGENT

