#include "./BackupDataInput.hpp"
#include "./BackupDataOutput.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./BackupAgentHelper.hpp"

namespace android::app::backup
{
	// Fields
	
	BackupAgentHelper::BackupAgentHelper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BackupAgentHelper::BackupAgentHelper()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupAgentHelper",
			"()V"
		);
	}
	
	// Methods
	void BackupAgentHelper::addHelper(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"addHelper",
			"(Ljava/lang/String;Landroid/app/backup/BackupHelper;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void BackupAgentHelper::addHelper(const QString &arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"addHelper",
			"(Ljava/lang/String;Landroid/app/backup/BackupHelper;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void BackupAgentHelper::onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onBackup",
			"(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BackupAgentHelper::onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2)
	{
		__thiz.callMethod<void>(
			"onRestore",
			"(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace android::app::backup

