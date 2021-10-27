#include "../content/Context.hpp"
#include "./CookieSyncManager.hpp"

namespace android::webkit
{
	// Fields
	
	CookieSyncManager::CookieSyncManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CookieSyncManager::createInstance(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.CookieSyncManager",
			"createInstance",
			"(Landroid/content/Context;)Landroid/webkit/CookieSyncManager;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CookieSyncManager::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.CookieSyncManager",
			"getInstance",
			"()Landroid/webkit/CookieSyncManager;"
		);
	}
	void CookieSyncManager::resetSync()
	{
		__thiz.callMethod<void>(
			"resetSync",
			"()V"
		);
	}
	void CookieSyncManager::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
	void CookieSyncManager::startSync()
	{
		__thiz.callMethod<void>(
			"startSync",
			"()V"
		);
	}
	void CookieSyncManager::stopSync()
	{
		__thiz.callMethod<void>(
			"stopSync",
			"()V"
		);
	}
	void CookieSyncManager::sync()
	{
		__thiz.callMethod<void>(
			"sync",
			"()V"
		);
	}
} // namespace android::webkit

