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
	
	// Constructors
	
	// Methods
	jboolean ShortcutManager::addDynamicShortcuts(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
	android::content::Intent ShortcutManager::createShortcutResultIntent(android::content::pm::ShortcutInfo arg0) const
	{
		return callObjectMethod(
			"createShortcutResultIntent",
			"(Landroid/content/pm/ShortcutInfo;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	void ShortcutManager::disableShortcuts(JObject arg0) const
	{
		callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void ShortcutManager::disableShortcuts(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ShortcutManager::enableShortcuts(JObject arg0) const
	{
		callMethod<void>(
			"enableShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	JObject ShortcutManager::getDynamicShortcuts() const
	{
		return callObjectMethod(
			"getDynamicShortcuts",
			"()Ljava/util/List;"
		);
	}
	jint ShortcutManager::getIconMaxHeight() const
	{
		return callMethod<jint>(
			"getIconMaxHeight",
			"()I"
		);
	}
	jint ShortcutManager::getIconMaxWidth() const
	{
		return callMethod<jint>(
			"getIconMaxWidth",
			"()I"
		);
	}
	JObject ShortcutManager::getManifestShortcuts() const
	{
		return callObjectMethod(
			"getManifestShortcuts",
			"()Ljava/util/List;"
		);
	}
	jint ShortcutManager::getMaxShortcutCountPerActivity() const
	{
		return callMethod<jint>(
			"getMaxShortcutCountPerActivity",
			"()I"
		);
	}
	JObject ShortcutManager::getPinnedShortcuts() const
	{
		return callObjectMethod(
			"getPinnedShortcuts",
			"()Ljava/util/List;"
		);
	}
	jboolean ShortcutManager::isRateLimitingActive() const
	{
		return callMethod<jboolean>(
			"isRateLimitingActive",
			"()Z"
		);
	}
	jboolean ShortcutManager::isRequestPinShortcutSupported() const
	{
		return callMethod<jboolean>(
			"isRequestPinShortcutSupported",
			"()Z"
		);
	}
	void ShortcutManager::removeAllDynamicShortcuts() const
	{
		callMethod<void>(
			"removeAllDynamicShortcuts",
			"()V"
		);
	}
	void ShortcutManager::removeDynamicShortcuts(JObject arg0) const
	{
		callMethod<void>(
			"removeDynamicShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void ShortcutManager::reportShortcutUsed(JString arg0) const
	{
		callMethod<void>(
			"reportShortcutUsed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean ShortcutManager::requestPinShortcut(android::content::pm::ShortcutInfo arg0, android::content::IntentSender arg1) const
	{
		return callMethod<jboolean>(
			"requestPinShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/content/IntentSender;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ShortcutManager::setDynamicShortcuts(JObject arg0) const
	{
		return callMethod<jboolean>(
			"setDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
	jboolean ShortcutManager::updateShortcuts(JObject arg0) const
	{
		return callMethod<jboolean>(
			"updateShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
} // namespace android::content::pm

