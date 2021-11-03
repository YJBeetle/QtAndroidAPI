#include "./RestoreObserver.hpp"
#include "../../content/Context.hpp"
#include "../../../JString.hpp"
#include "./BackupManager.hpp"

namespace android::app::backup
{
	// Fields
	
	// QAndroidJniObject forward
	BackupManager::BackupManager(QAndroidJniObject obj) : JObject(obj) {}
	
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
	void BackupManager::dataChanged() const
	{
		callMethod<void>(
			"dataChanged",
			"()V"
		);
	}
	jint BackupManager::requestRestore(android::app::backup::RestoreObserver arg0) const
	{
		return callMethod<jint>(
			"requestRestore",
			"(Landroid/app/backup/RestoreObserver;)I",
			arg0.object()
		);
	}
} // namespace android::app::backup

