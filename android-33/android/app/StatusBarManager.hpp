#pragma once

#include "../content/ComponentName.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../../JString.hpp"
#include "./StatusBarManager.def.hpp"

namespace android::app
{
	// Fields
	inline jint StatusBarManager::TILE_ADD_REQUEST_ERROR_APP_NOT_IN_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_ERROR_APP_NOT_IN_FOREGROUND"
		);
	}
	inline jint StatusBarManager::TILE_ADD_REQUEST_ERROR_BAD_COMPONENT()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_ERROR_BAD_COMPONENT"
		);
	}
	inline jint StatusBarManager::TILE_ADD_REQUEST_ERROR_MISMATCHED_PACKAGE()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_ERROR_MISMATCHED_PACKAGE"
		);
	}
	inline jint StatusBarManager::TILE_ADD_REQUEST_ERROR_NOT_CURRENT_USER()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_ERROR_NOT_CURRENT_USER"
		);
	}
	inline jint StatusBarManager::TILE_ADD_REQUEST_ERROR_NO_STATUS_BAR_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_ERROR_NO_STATUS_BAR_SERVICE"
		);
	}
	inline jint StatusBarManager::TILE_ADD_REQUEST_ERROR_REQUEST_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_ERROR_REQUEST_IN_PROGRESS"
		);
	}
	inline jint StatusBarManager::TILE_ADD_REQUEST_RESULT_TILE_ADDED()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_RESULT_TILE_ADDED"
		);
	}
	inline jint StatusBarManager::TILE_ADD_REQUEST_RESULT_TILE_ALREADY_ADDED()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_RESULT_TILE_ALREADY_ADDED"
		);
	}
	inline jint StatusBarManager::TILE_ADD_REQUEST_RESULT_TILE_NOT_ADDED()
	{
		return getStaticField<jint>(
			"android.app.StatusBarManager",
			"TILE_ADD_REQUEST_RESULT_TILE_NOT_ADDED"
		);
	}
	
	// Constructors
	
	// Methods
	inline void StatusBarManager::requestAddTileService(android::content::ComponentName arg0, JString arg1, android::graphics::drawable::Icon arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"requestAddTileService",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
