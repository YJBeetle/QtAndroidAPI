#pragma once

#include "../Intent.def.hpp"
#include "../IntentSender.def.hpp"
#include "./ShortcutInfo.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ShortcutManager.def.hpp"

namespace android::content::pm
{
	// Fields
	inline jint ShortcutManager::FLAG_MATCH_CACHED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutManager",
			"FLAG_MATCH_CACHED"
		);
	}
	inline jint ShortcutManager::FLAG_MATCH_DYNAMIC()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutManager",
			"FLAG_MATCH_DYNAMIC"
		);
	}
	inline jint ShortcutManager::FLAG_MATCH_MANIFEST()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutManager",
			"FLAG_MATCH_MANIFEST"
		);
	}
	inline jint ShortcutManager::FLAG_MATCH_PINNED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutManager",
			"FLAG_MATCH_PINNED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean ShortcutManager::addDynamicShortcuts(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
	inline android::content::Intent ShortcutManager::createShortcutResultIntent(android::content::pm::ShortcutInfo arg0) const
	{
		return callObjectMethod(
			"createShortcutResultIntent",
			"(Landroid/content/pm/ShortcutInfo;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	inline void ShortcutManager::disableShortcuts(JObject arg0) const
	{
		callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void ShortcutManager::disableShortcuts(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void ShortcutManager::enableShortcuts(JObject arg0) const
	{
		callMethod<void>(
			"enableShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline JObject ShortcutManager::getDynamicShortcuts() const
	{
		return callObjectMethod(
			"getDynamicShortcuts",
			"()Ljava/util/List;"
		);
	}
	inline jint ShortcutManager::getIconMaxHeight() const
	{
		return callMethod<jint>(
			"getIconMaxHeight",
			"()I"
		);
	}
	inline jint ShortcutManager::getIconMaxWidth() const
	{
		return callMethod<jint>(
			"getIconMaxWidth",
			"()I"
		);
	}
	inline JObject ShortcutManager::getManifestShortcuts() const
	{
		return callObjectMethod(
			"getManifestShortcuts",
			"()Ljava/util/List;"
		);
	}
	inline jint ShortcutManager::getMaxShortcutCountPerActivity() const
	{
		return callMethod<jint>(
			"getMaxShortcutCountPerActivity",
			"()I"
		);
	}
	inline JObject ShortcutManager::getPinnedShortcuts() const
	{
		return callObjectMethod(
			"getPinnedShortcuts",
			"()Ljava/util/List;"
		);
	}
	inline JObject ShortcutManager::getShortcuts(jint arg0) const
	{
		return callObjectMethod(
			"getShortcuts",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline jboolean ShortcutManager::isRateLimitingActive() const
	{
		return callMethod<jboolean>(
			"isRateLimitingActive",
			"()Z"
		);
	}
	inline jboolean ShortcutManager::isRequestPinShortcutSupported() const
	{
		return callMethod<jboolean>(
			"isRequestPinShortcutSupported",
			"()Z"
		);
	}
	inline void ShortcutManager::pushDynamicShortcut(android::content::pm::ShortcutInfo arg0) const
	{
		callMethod<void>(
			"pushDynamicShortcut",
			"(Landroid/content/pm/ShortcutInfo;)V",
			arg0.object()
		);
	}
	inline void ShortcutManager::removeAllDynamicShortcuts() const
	{
		callMethod<void>(
			"removeAllDynamicShortcuts",
			"()V"
		);
	}
	inline void ShortcutManager::removeDynamicShortcuts(JObject arg0) const
	{
		callMethod<void>(
			"removeDynamicShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void ShortcutManager::removeLongLivedShortcuts(JObject arg0) const
	{
		callMethod<void>(
			"removeLongLivedShortcuts",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void ShortcutManager::reportShortcutUsed(JString arg0) const
	{
		callMethod<void>(
			"reportShortcutUsed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean ShortcutManager::requestPinShortcut(android::content::pm::ShortcutInfo arg0, android::content::IntentSender arg1) const
	{
		return callMethod<jboolean>(
			"requestPinShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/content/IntentSender;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean ShortcutManager::setDynamicShortcuts(JObject arg0) const
	{
		return callMethod<jboolean>(
			"setDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
	inline jboolean ShortcutManager::updateShortcuts(JObject arg0) const
	{
		return callMethod<jboolean>(
			"updateShortcuts",
			"(Ljava/util/List;)Z",
			arg0.object()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
