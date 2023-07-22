#pragma once

#include "./BackupDataInput.def.hpp"
#include "./BackupDataOutput.def.hpp"
#include "./FullBackupDataOutput.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../java/io/File.def.hpp"
#include "./BackupAgent.def.hpp"

namespace android::app::backup
{
	// Fields
	inline jint BackupAgent::FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED()
	{
		return getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED"
		);
	}
	inline jint BackupAgent::FLAG_DEVICE_TO_DEVICE_TRANSFER()
	{
		return getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"FLAG_DEVICE_TO_DEVICE_TRANSFER"
		);
	}
	inline jint BackupAgent::TYPE_DIRECTORY()
	{
		return getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"TYPE_DIRECTORY"
		);
	}
	inline jint BackupAgent::TYPE_FILE()
	{
		return getStaticField<jint>(
			"android.app.backup.BackupAgent",
			"TYPE_FILE"
		);
	}
	
	// Constructors
	inline BackupAgent::BackupAgent()
		: android::content::ContextWrapper(
			"android.app.backup.BackupAgent",
			"()V"
		) {}
	
	// Methods
	inline void BackupAgent::fullBackupFile(java::io::File arg0, android::app::backup::FullBackupDataOutput arg1) const
	{
		callMethod<void>(
			"fullBackupFile",
			"(Ljava/io/File;Landroid/app/backup/FullBackupDataOutput;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void BackupAgent::onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2) const
	{
		callMethod<void>(
			"onBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void BackupAgent::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void BackupAgent::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void BackupAgent::onFullBackup(android::app::backup::FullBackupDataOutput arg0) const
	{
		callMethod<void>(
			"onFullBackup",
			"(Landroid/app/backup/FullBackupDataOutput;)V",
			arg0.object()
		);
	}
	inline void BackupAgent::onQuotaExceeded(jlong arg0, jlong arg1) const
	{
		callMethod<void>(
			"onQuotaExceeded",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	inline void BackupAgent::onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2) const
	{
		callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void BackupAgent::onRestore(android::app::backup::BackupDataInput arg0, jlong arg1, android::os::ParcelFileDescriptor arg2) const
	{
		callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;JLandroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void BackupAgent::onRestoreFile(android::os::ParcelFileDescriptor arg0, jlong arg1, java::io::File arg2, jint arg3, jlong arg4, jlong arg5) const
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
	inline void BackupAgent::onRestoreFinished() const
	{
		callMethod<void>(
			"onRestoreFinished",
			"()V"
		);
	}
} // namespace android::app::backup

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::backup;
#endif
