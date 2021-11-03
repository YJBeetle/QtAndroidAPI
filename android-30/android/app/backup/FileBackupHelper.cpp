#include "./BackupDataInputStream.hpp"
#include "./BackupDataOutput.hpp"
#include "../../content/Context.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./FileBackupHelper.hpp"

namespace android::app::backup
{
	// Fields
	
	// QJniObject forward
	FileBackupHelper::FileBackupHelper(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FileBackupHelper::FileBackupHelper(android::content::Context arg0, jarray arg1)
		: JObject(
			"android.app.backup.FileBackupHelper",
			"(Landroid/content/Context;[Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void FileBackupHelper::performBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2)
	{
		callMethod<void>(
			"performBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void FileBackupHelper::restoreEntity(android::app::backup::BackupDataInputStream arg0)
	{
		callMethod<void>(
			"restoreEntity",
			"(Landroid/app/backup/BackupDataInputStream;)V",
			arg0.object()
		);
	}
	void FileBackupHelper::writeNewStateDescription(android::os::ParcelFileDescriptor arg0)
	{
		callMethod<void>(
			"writeNewStateDescription",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		);
	}
} // namespace android::app::backup

