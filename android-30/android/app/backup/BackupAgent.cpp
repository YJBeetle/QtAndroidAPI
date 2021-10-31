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
		return getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED"
		);
	}
	jint BackupAgent::FLAG_DEVICE_TO_DEVICE_TRANSFER()
	{
		return getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"FLAG_DEVICE_TO_DEVICE_TRANSFER"
		);
	}
	jint BackupAgent::TYPE_DIRECTORY()
	{
		return getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"TYPE_DIRECTORY"
		);
	}
	jint BackupAgent::TYPE_FILE()
	{
		return getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"TYPE_FILE"
		);
	}
	
	// QJniObject forward
	BackupAgent::BackupAgent(QJniObject obj) : android::content::ContextWrapper(obj) {}
	
	// Constructors
	BackupAgent::BackupAgent()
		: android::content::ContextWrapper(
			"android.app.backup.BackupAgent",
			"()V"
		) {}
	
	// Methods
	void BackupAgent::fullBackupFile(java::io::File arg0, android::app::backup::FullBackupDataOutput arg1)
	{
		callMethod<void>(
			"fullBackupFile",
			"(Ljava/io/File;Landroid/app/backup/FullBackupDataOutput;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void BackupAgent::onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2)
	{
		callMethod<void>(
			"onBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void BackupAgent::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void BackupAgent::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void BackupAgent::onFullBackup(android::app::backup::FullBackupDataOutput arg0)
	{
		callMethod<void>(
			"onFullBackup",
			"(Landroid/app/backup/FullBackupDataOutput;)V",
			arg0.object()
		);
	}
	void BackupAgent::onQuotaExceeded(jlong arg0, jlong arg1)
	{
		callMethod<void>(
			"onQuotaExceeded",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	void BackupAgent::onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2)
	{
		callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void BackupAgent::onRestore(android::app::backup::BackupDataInput arg0, jlong arg1, android::os::ParcelFileDescriptor arg2)
	{
		callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;JLandroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void BackupAgent::onRestoreFile(android::os::ParcelFileDescriptor arg0, jlong arg1, java::io::File arg2, jint arg3, jlong arg4, jlong arg5)
	{
		callMethod<void>(
			"onRestoreFile",
			"(Landroid/os/ParcelFileDescriptor;JLjava/io/File;IJJ)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5
		);
	}
	void BackupAgent::onRestoreFinished()
	{
		callMethod<void>(
			"onRestoreFinished",
			"()V"
		);
	}
} // namespace android::app::backup

