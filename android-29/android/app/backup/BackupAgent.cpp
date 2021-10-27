#include "./BackupDataInput.hpp"
#include "./BackupDataOutput.hpp"
#include "./FullBackupDataOutput.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../java/io/File.hpp"
#include "./BackupAgent.hpp"

namespace android::app::backup
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
	
	BackupAgent::BackupAgent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BackupAgent::BackupAgent()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupAgent",
			"()V"
		);
	}
	
	// Methods
	void BackupAgent::fullBackupFile(java::io::File arg0, android::app::backup::FullBackupDataOutput arg1)
	{
		__thiz.callMethod<void>(
			"fullBackupFile",
			"(Ljava/io/File;Landroid/app/backup/FullBackupDataOutput;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void BackupAgent::onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
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
	void BackupAgent::onFullBackup(android::app::backup::FullBackupDataOutput arg0)
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
	void BackupAgent::onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BackupAgent::onRestore(android::app::backup::BackupDataInput arg0, jlong arg1, android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;JLandroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BackupAgent::onRestoreFile(android::os::ParcelFileDescriptor arg0, jlong arg1, java::io::File arg2, jint arg3, jlong arg4, jlong arg5)
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
} // namespace android::app::backup

