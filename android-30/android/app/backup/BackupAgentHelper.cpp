#include "./BackupDataInput.hpp"
#include "./BackupDataOutput.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../JString.hpp"
#include "./BackupAgentHelper.hpp"

namespace android::app::backup
{
	// Fields
	
	// QJniObject forward
	BackupAgentHelper::BackupAgentHelper(QJniObject obj) : android::app::backup::BackupAgent(obj) {}
	
	// Constructors
	BackupAgentHelper::BackupAgentHelper()
		: android::app::backup::BackupAgent(
			"android.app.backup.BackupAgentHelper",
			"()V"
		) {}
	
	// Methods
	void BackupAgentHelper::addHelper(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"addHelper",
			"(Ljava/lang/String;Landroid/app/backup/BackupHelper;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void BackupAgentHelper::onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2)
	{
		callMethod<void>(
			"onBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void BackupAgentHelper::onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2)
	{
		callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
} // namespace android::app::backup

