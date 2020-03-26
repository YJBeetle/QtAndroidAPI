#pragma once

#ifndef ANDROID_CONTENT_PM_SHORTCUTMANAGER
#define ANDROID_CONTENT_PM_SHORTCUTMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ShortcutInfo;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::content::pm
{
	class ShortcutManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean setDynamicShortcuts(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getDynamicShortcuts();
		QAndroidJniObject getManifestShortcuts();
		jboolean addDynamicShortcuts(__jni_impl::__JniBaseClass arg0);
		void removeDynamicShortcuts(__jni_impl::__JniBaseClass arg0);
		void removeAllDynamicShortcuts();
		QAndroidJniObject getPinnedShortcuts();
		jboolean updateShortcuts(__jni_impl::__JniBaseClass arg0);
		void disableShortcuts(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void disableShortcuts(__jni_impl::__JniBaseClass arg0);
		void enableShortcuts(__jni_impl::__JniBaseClass arg0);
		jint getMaxShortcutCountPerActivity();
		jboolean isRateLimitingActive();
		jint getIconMaxWidth();
		jint getIconMaxHeight();
		void reportShortcutUsed(jstring arg0);
		jboolean isRequestPinShortcutSupported();
		jboolean requestPinShortcut(__jni_impl::android::content::pm::ShortcutInfo arg0, __jni_impl::android::content::IntentSender arg1);
		QAndroidJniObject createShortcutResultIntent(__jni_impl::android::content::pm::ShortcutInfo arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../Context.hpp"
#include "ShortcutInfo.hpp"
#include "../IntentSender.hpp"
#include "../Intent.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void ShortcutManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ShortcutManager",
			"(V)V");
	}
	
	// Methods
	jboolean ShortcutManager::setDynamicShortcuts(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setDynamicShortcuts",
			"(Ljava/util/List;)Z",
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
	QAndroidJniObject ShortcutManager::getManifestShortcuts()
	{
		return __thiz.callObjectMethod(
			"getManifestShortcuts",
			"()Ljava/util/List;"
		);
	}
	jboolean ShortcutManager::addDynamicShortcuts(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addDynamicShortcuts",
			"(Ljava/util/List;)Z",
			arg0.__jniObject().object()
		);
	}
	void ShortcutManager::removeDynamicShortcuts(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeDynamicShortcuts",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void ShortcutManager::removeAllDynamicShortcuts()
	{
		__thiz.callMethod<void>(
			"removeAllDynamicShortcuts",
			"()V"
		);
	}
	QAndroidJniObject ShortcutManager::getPinnedShortcuts()
	{
		return __thiz.callObjectMethod(
			"getPinnedShortcuts",
			"()Ljava/util/List;"
		);
	}
	jboolean ShortcutManager::updateShortcuts(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"updateShortcuts",
			"(Ljava/util/List;)Z",
			arg0.__jniObject().object()
		);
	}
	void ShortcutManager::disableShortcuts(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ShortcutManager::disableShortcuts(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"disableShortcuts",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void ShortcutManager::enableShortcuts(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"enableShortcuts",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	jint ShortcutManager::getMaxShortcutCountPerActivity()
	{
		return __thiz.callMethod<jint>(
			"getMaxShortcutCountPerActivity",
			"()I"
		);
	}
	jboolean ShortcutManager::isRateLimitingActive()
	{
		return __thiz.callMethod<jboolean>(
			"isRateLimitingActive",
			"()Z"
		);
	}
	jint ShortcutManager::getIconMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getIconMaxWidth",
			"()I"
		);
	}
	jint ShortcutManager::getIconMaxHeight()
	{
		return __thiz.callMethod<jint>(
			"getIconMaxHeight",
			"()I"
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
	jboolean ShortcutManager::isRequestPinShortcutSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isRequestPinShortcutSupported",
			"()Z"
		);
	}
	jboolean ShortcutManager::requestPinShortcut(__jni_impl::android::content::pm::ShortcutInfo arg0, __jni_impl::android::content::IntentSender arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestPinShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/content/IntentSender;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ShortcutManager::createShortcutResultIntent(__jni_impl::android::content::pm::ShortcutInfo arg0)
	{
		return __thiz.callObjectMethod(
			"createShortcutResultIntent",
			"(Landroid/content/pm/ShortcutInfo;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ShortcutManager : public __jni_impl::android::content::pm::ShortcutManager
	{
	public:
		ShortcutManager(QAndroidJniObject obj) { __thiz = obj; }
		ShortcutManager()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_SHORTCUTMANAGER

