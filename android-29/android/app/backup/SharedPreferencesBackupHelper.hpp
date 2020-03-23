#pragma once

#ifndef ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER
#define ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
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
	class BackupDataInputStream;
}

namespace __jni_impl::android::app::backup
{
	class SharedPreferencesBackupHelper : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jarray arg1);
		
		// Methods
		void performBackup(__jni_impl::android::os::ParcelFileDescriptor arg0, __jni_impl::android::app::backup::BackupDataOutput arg1, __jni_impl::android::os::ParcelFileDescriptor arg2);
		void restoreEntity(__jni_impl::android::app::backup::BackupDataInputStream arg0);
		void writeNewStateDescription(__jni_impl::android::os::ParcelFileDescriptor arg0);
	};
} // namespace __jni_impl::android::app::backup

#include "../../content/Context.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "BackupDataOutput.hpp"
#include "BackupDataInputStream.hpp"

namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void SharedPreferencesBackupHelper::__constructor(__jni_impl::android::content::Context arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.SharedPreferencesBackupHelper",
			"(Landroid/content/Context;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	void SharedPreferencesBackupHelper::performBackup(__jni_impl::android::os::ParcelFileDescriptor arg0, __jni_impl::android::app::backup::BackupDataOutput arg1, __jni_impl::android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"performBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void SharedPreferencesBackupHelper::restoreEntity(__jni_impl::android::app::backup::BackupDataInputStream arg0)
	{
		__thiz.callMethod<void>(
			"restoreEntity",
			"(Landroid/app/backup/BackupDataInputStream;)V",
			arg0.__jniObject().object());
	}
	void SharedPreferencesBackupHelper::writeNewStateDescription(__jni_impl::android::os::ParcelFileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"writeNewStateDescription",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class SharedPreferencesBackupHelper : public __jni_impl::android::app::backup::SharedPreferencesBackupHelper
	{
	public:
		SharedPreferencesBackupHelper(QAndroidJniObject obj) { __thiz = obj; }
		SharedPreferencesBackupHelper(__jni_impl::android::content::Context arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app::backup

#endif // ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER

