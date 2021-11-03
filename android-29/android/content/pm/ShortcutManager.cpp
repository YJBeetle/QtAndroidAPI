#include "../Context.hpp"
#include "../Intent.hpp"
#include "../IntentSender.hpp"
#include "./ShortcutInfo.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ShortcutManager.hpp"

namespace android::content::pm
{
	// Fields
	
	// QJniObject forward
	ShortcutManager::ShortcutManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ShortcutManager::addDynamicShortcuts(JObject arg0)
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
	void ShortcutManager::disableShortcuts(JObject arg0)
	{
		callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void ShortcutManager::disableShortcuts(JObject arg0, JString arg1)
	{
		callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ShortcutManager::enableShortcuts(JObject arg0)
	{
		callMethod<void>(
			"enableShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	JObject ShortcutManager::getDynamicShortcuts()
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
	JObject ShortcutManager::getManifestShortcuts()
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
	JObject ShortcutManager::getPinnedShortcuts()
	{
		return callObjectMethod(
			"getPinnedShortcuts",
			"()Ljava/util/List;"
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
	void ShortcutManager::removeAllDynamicShortcuts()
	{
		callMethod<void>(
			"removeAllDynamicShortcuts",
			"()V"
		);
	}
	void ShortcutManager::removeDynamicShortcuts(JObject arg0)
	{
		callMethod<void>(
			"removeDynamicShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void ShortcutManager::reportShortcutUsed(JString arg0)
	{
		callMethod<void>(
			"reportShortcutUsed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	jboolean ShortcutManager::setDynamicShortcuts(JObject arg0)
	{
		return callMethod<jboolean>(
			"setDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
	jboolean ShortcutManager::updateShortcuts(JObject arg0)
	{
		return callMethod<jboolean>(
			"updateShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
} // namespace android::content::pm

