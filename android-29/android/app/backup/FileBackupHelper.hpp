#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::backup
{
	class BackupDataInputStream;
}
namespace __jni_impl::android::app::backup
{
	class BackupDataOutput;
}
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
	class FileBackupHelper : public __JniBaseClass
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

#include "BackupDataInputStream.hpp"
#include "BackupDataOutput.hpp"
#include "../../content/Context.hpp"
#include "../../os/ParcelFileDescriptor.hpp"

namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void FileBackupHelper::__constructor(__jni_impl::android::content::Context arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.FileBackupHelper",
			"(Landroid/content/Context;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void FileBackupHelper::performBackup(__jni_impl::android::os::ParcelFileDescriptor arg0, __jni_impl::android::app::backup::BackupDataOutput arg1, __jni_impl::android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"performBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FileBackupHelper::restoreEntity(__jni_impl::android::app::backup::BackupDataInputStream arg0)
	{
		__thiz.callMethod<void>(
			"restoreEntity",
			"(Landroid/app/backup/BackupDataInputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void FileBackupHelper::writeNewStateDescription(__jni_impl::android::os::ParcelFileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"writeNewStateDescription",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class FileBackupHelper : public __jni_impl::android::app::backup::FileBackupHelper
	{
	public:
		FileBackupHelper(QAndroidJniObject obj) { __thiz = obj; }
		FileBackupHelper(__jni_impl::android::content::Context arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app::backup

