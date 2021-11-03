#include "./RestoreObserver.hpp"
#include "../../content/Context.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../JString.hpp"
#include "./BackupManager.hpp"

namespace android::app::backup
{
	// Fields
	
	// QJniObject forward
	BackupManager::BackupManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BackupManager::BackupManager(android::content::Context arg0)
		: JObject(
			"android.app.backup.BackupManager",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void BackupManager::dataChanged(JString arg0)
	{
		callStaticMethod<void>(
			"android.app.backup.BackupManager",
			"dataChanged",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void BackupManager::dataChanged()
	{
		callMethod<void>(
			"dataChanged",
			"()V"
		);
	}
	android::os::UserHandle BackupManager::getUserForAncestralSerialNumber(jlong arg0)
	{
		return callObjectMethod(
			"getUserForAncestralSerialNumber",
			"(J)Landroid/os/UserHandle;",
			arg0
		);
	}
	jint BackupManager::requestRestore(android::app::backup::RestoreObserver arg0)
	{
		return callMethod<jint>(
			"requestRestore",
			"(Landroid/app/backup/RestoreObserver;)I",
			arg0.object()
		);
	}
} // namespace android::app::backup

