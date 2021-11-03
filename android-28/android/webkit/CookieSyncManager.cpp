#include "../content/Context.hpp"
#include "../../JObject.hpp"
#include "./CookieSyncManager.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	CookieSyncManager::CookieSyncManager(QJniObject obj) : JObject(obj) {}
	
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
	void CookieSyncManager::resetSync() const
	{
		callMethod<void>(
			"resetSync",
			"()V"
		);
	}
	void CookieSyncManager::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	void CookieSyncManager::startSync() const
	{
		callMethod<void>(
			"startSync",
			"()V"
		);
	}
	void CookieSyncManager::stopSync() const
	{
		callMethod<void>(
			"stopSync",
			"()V"
		);
	}
	void CookieSyncManager::sync() const
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
} // namespace android::webkit

