#include "../Intent.hpp"
#include "../IntentSender.hpp"
#include "./ShortcutInfo.hpp"
#include "./ShortcutManager.hpp"

namespace android::content::pm
{
	// Fields
	jint ShortcutManager::FLAG_MATCH_CACHED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutManager",
			"FLAG_MATCH_CACHED"
		);
	}
	jint ShortcutManager::FLAG_MATCH_DYNAMIC()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutManager",
			"FLAG_MATCH_DYNAMIC"
		);
	}
	jint ShortcutManager::FLAG_MATCH_MANIFEST()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutManager",
			"FLAG_MATCH_MANIFEST"
		);
	}
	jint ShortcutManager::FLAG_MATCH_PINNED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutManager",
			"FLAG_MATCH_PINNED"
		);
	}
	
	// QJniObject forward
	ShortcutManager::ShortcutManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ShortcutManager::addDynamicShortcuts(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"addDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
	android::content::Intent ShortcutManager::createShortcutResultIntent(android::content::pm::ShortcutInfo arg0)
	{
		return callObjectMethod(
			"createShortcutResultIntent",
			"(Landroid/content/pm/ShortcutInfo;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	void ShortcutManager::disableShortcuts(__JniBaseClass arg0)
	{
		callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void ShortcutManager::disableShortcuts(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1
		);
	}
	void ShortcutManager::enableShortcuts(__JniBaseClass arg0)
	{
		callMethod<void>(
			"enableShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	__JniBaseClass ShortcutManager::getDynamicShortcuts()
	{
		return callObjectMethod(
			"getDynamicShortcuts",
			"()Ljava/util/List;"
		);
	}
	jint ShortcutManager::getIconMaxHeight()
	{
		return callMethod<jint>(
			"getIconMaxHeight",
			"()I"
		);
	}
	jint ShortcutManager::getIconMaxWidth()
	{
		return callMethod<jint>(
			"getIconMaxWidth",
			"()I"
		);
	}
	__JniBaseClass ShortcutManager::getManifestShortcuts()
	{
		return callObjectMethod(
			"getManifestShortcuts",
			"()Ljava/util/List;"
		);
	}
	jint ShortcutManager::getMaxShortcutCountPerActivity()
	{
		return callMethod<jint>(
			"getMaxShortcutCountPerActivity",
			"()I"
		);
	}
	__JniBaseClass ShortcutManager::getPinnedShortcuts()
	{
		return callObjectMethod(
			"getPinnedShortcuts",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass ShortcutManager::getShortcuts(jint arg0)
	{
		return callObjectMethod(
			"getShortcuts",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jboolean ShortcutManager::isRateLimitingActive()
	{
		return callMethod<jboolean>(
			"isRateLimitingActive",
			"()Z"
		);
	}
	jboolean ShortcutManager::isRequestPinShortcutSupported()
	{
		return callMethod<jboolean>(
			"isRequestPinShortcutSupported",
			"()Z"
		);
	}
	void ShortcutManager::pushDynamicShortcut(android::content::pm::ShortcutInfo arg0)
	{
		callMethod<void>(
			"pushDynamicShortcut",
			"(Landroid/content/pm/ShortcutInfo;)V",
			arg0.object()
		);
	}
	void ShortcutManager::removeAllDynamicShortcuts()
	{
		callMethod<void>(
			"removeAllDynamicShortcuts",
			"()V"
		);
	}
	void ShortcutManager::removeDynamicShortcuts(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeDynamicShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void ShortcutManager::removeLongLivedShortcuts(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeLongLivedShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void ShortcutManager::reportShortcutUsed(jstring arg0)
	{
		callMethod<void>(
			"reportShortcutUsed",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean ShortcutManager::requestPinShortcut(android::content::pm::ShortcutInfo arg0, android::content::IntentSender arg1)
	{
		return callMethod<jboolean>(
			"requestPinShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/content/IntentSender;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ShortcutManager::setDynamicShortcuts(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"setDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
	jboolean ShortcutManager::updateShortcuts(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"updateShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
} // namespace android::content::pm

