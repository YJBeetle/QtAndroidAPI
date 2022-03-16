#include "../../../JArray.hpp"
#include "./BackupDataInputStream.hpp"
#include "./BackupDataOutput.hpp"
#include "../../content/Context.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./SharedPreferencesBackupHelper.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	SharedPreferencesBackupHelper::SharedPreferencesBackupHelper(android::content::Context arg0, JArray arg1)
		: JObject(
			"android.app.backup.SharedPreferencesBackupHelper",
			"(Landroid/content/Context;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	void SharedPreferencesBackupHelper::performBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2) const
	{
		callMethod<void>(
			"performBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void SharedPreferencesBackupHelper::restoreEntity(android::app::backup::BackupDataInputStream arg0) const
	{
		callMethod<void>(
			"restoreEntity",
			"(Landroid/app/backup/BackupDataInputStream;)V",
			arg0.object()
		);
	}
	void SharedPreferencesBackupHelper::writeNewStateDescription(android::os::ParcelFileDescriptor arg0) const
	{
		callMethod<void>(
			"writeNewStateDescription",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		);
	}
} // namespace android::app::backup

