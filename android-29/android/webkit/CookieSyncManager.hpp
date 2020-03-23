#pragma once

#ifndef ANDROID_WEBKIT_COOKIESYNCMANAGER
#define ANDROID_WEBKIT_COOKIESYNCMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::webkit
{
	class CookieSyncManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void run();
		static QAndroidJniObject getInstance();
		void sync();
		static QAndroidJniObject createInstance(__jni_impl::android::content::Context arg0);
		void startSync();
		void resetSync();
		void stopSync();
	};
} // namespace __jni_impl::android::webkit

#include "../content/Context.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void CookieSyncManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.CookieSyncManager",
			"(V)V");
	}
	
	// Methods
	void CookieSyncManager::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V");
	}
	QAndroidJniObject CookieSyncManager::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.CookieSyncManager",
			"getInstance",
			"()Landroid/webkit/CookieSyncManager;");
	}
	void CookieSyncManager::sync()
	{
		__thiz.callMethod<void>(
			"sync",
			"()V");
	}
	QAndroidJniObject CookieSyncManager::createInstance(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.CookieSyncManager",
			"createInstance",
			"(Landroid/content/Context;)Landroid/webkit/CookieSyncManager;",
			arg0.__jniObject().object());
	}
	void CookieSyncManager::startSync()
	{
		__thiz.callMethod<void>(
			"startSync",
			"()V");
	}
	void CookieSyncManager::resetSync()
	{
		__thiz.callMethod<void>(
			"resetSync",
			"()V");
	}
	void CookieSyncManager::stopSync()
	{
		__thiz.callMethod<void>(
			"stopSync",
			"()V");
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class CookieSyncManager : public __jni_impl::android::webkit::CookieSyncManager
	{
	public:
		CookieSyncManager(QAndroidJniObject obj) { __thiz = obj; }
		CookieSyncManager()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_COOKIESYNCMANAGER

