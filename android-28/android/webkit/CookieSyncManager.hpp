#pragma once

#include "../content/Context.def.hpp"
#include "../../JObject.hpp"
#include "./CookieSyncManager.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::webkit::CookieSyncManager CookieSyncManager::createInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.CookieSyncManager",
			"createInstance",
			"(Landroid/content/Context;)Landroid/webkit/CookieSyncManager;",
			arg0.object()
		);
	}
	inline android::webkit::CookieSyncManager CookieSyncManager::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.CookieSyncManager",
			"getInstance",
			"()Landroid/webkit/CookieSyncManager;"
		);
	}
	inline void CookieSyncManager::resetSync() const
	{
		callMethod<void>(
			"resetSync",
			"()V"
		);
	}
	inline void CookieSyncManager::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	inline void CookieSyncManager::startSync() const
	{
		callMethod<void>(
			"startSync",
			"()V"
		);
	}
	inline void CookieSyncManager::stopSync() const
	{
		callMethod<void>(
			"stopSync",
			"()V"
		);
	}
	inline void CookieSyncManager::sync() const
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
} // namespace android::webkit

// Base class headers

