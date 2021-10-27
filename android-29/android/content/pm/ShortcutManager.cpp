#include "../Context.hpp"
#include "../Intent.hpp"
#include "../IntentSender.hpp"
#include "./ShortcutInfo.hpp"
#include "./ShortcutManager.hpp"

namespace android::content::pm
{
	// Fields
	
	ShortcutManager::ShortcutManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean ShortcutManager::addDynamicShortcuts(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutManager::createShortcutResultIntent(android::content::pm::ShortcutInfo arg0)
	{
		return __thiz.callObjectMethod(
			"createShortcutResultIntent",
			"(Landroid/content/pm/ShortcutInfo;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	void ShortcutManager::disableShortcuts(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void ShortcutManager::disableShortcuts(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ShortcutManager::disableShortcuts(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ShortcutManager::enableShortcuts(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"enableShortcuts",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutManager::getDynamicShortcuts()
	{
		return __thiz.callObjectMethod(
			"getDynamicShortcuts",
			"()Ljava/util/List;"
		);
	}
	jint ShortcutManager::getIconMaxHeight()
	{
		return __thiz.callMethod<jint>(
			"getIconMaxHeight",
			"()I"
		);
	}
	jint ShortcutManager::getIconMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getIconMaxWidth",
			"()I"
		);
	}
	QAndroidJniObject ShortcutManager::getManifestShortcuts()
	{
		return __thiz.callObjectMethod(
			"getManifestShortcuts",
			"()Ljava/util/List;"
		);
	}
	jint ShortcutManager::getMaxShortcutCountPerActivity()
	{
		return __thiz.callMethod<jint>(
			"getMaxShortcutCountPerActivity",
			"()I"
		);
	}
	QAndroidJniObject ShortcutManager::getPinnedShortcuts()
	{
		return __thiz.callObjectMethod(
			"getPinnedShortcuts",
			"()Ljava/util/List;"
		);
	}
	jboolean ShortcutManager::isRateLimitingActive()
	{
		return __thiz.callMethod<jboolean>(
			"isRateLimitingActive",
			"()Z"
		);
	}
	jboolean ShortcutManager::isRequestPinShortcutSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isRequestPinShortcutSupported",
			"()Z"
		);
	}
	void ShortcutManager::removeAllDynamicShortcuts()
	{
		__thiz.callMethod<void>(
			"removeAllDynamicShortcuts",
			"()V"
		);
	}
	void ShortcutManager::removeDynamicShortcuts(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeDynamicShortcuts",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void ShortcutManager::reportShortcutUsed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"reportShortcutUsed",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ShortcutManager::reportShortcutUsed(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"reportShortcutUsed",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean ShortcutManager::requestPinShortcut(android::content::pm::ShortcutInfo arg0, android::content::IntentSender arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestPinShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/content/IntentSender;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ShortcutManager::setDynamicShortcuts(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ShortcutManager::updateShortcuts(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"updateShortcuts",
			"(Ljava/util/List;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content::pm

