#include "../content/Context.hpp"
#include "../../JObject.hpp"
#include "./CookieSyncManager.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	CookieSyncManager::CookieSyncManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::CookieSyncManager CookieSyncManager::createInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.CookieSyncManager",
			"createInstance",
			"(Landroid/content/Context;)Landroid/webkit/CookieSyncManager;",
			arg0.object()
		);
	}
	android::webkit::CookieSyncManager CookieSyncManager::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.CookieSyncManager",
			"getInstance",
			"()Landroid/webkit/CookieSyncManager;"
		);
	}
	void CookieSyncManager::resetSync()
	{
		callMethod<void>(
			"resetSync",
			"()V"
		);
	}
	void CookieSyncManager::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	void CookieSyncManager::startSync()
	{
		callMethod<void>(
			"startSync",
			"()V"
		);
	}
	void CookieSyncManager::stopSync()
	{
		callMethod<void>(
			"stopSync",
			"()V"
		);
	}
	void CookieSyncManager::sync()
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
} // namespace android::webkit

