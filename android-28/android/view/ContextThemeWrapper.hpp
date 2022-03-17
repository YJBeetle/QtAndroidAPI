#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/AssetManager.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../content/res/Resources.def.hpp"
#include "../content/res/Resources_Theme.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ContextThemeWrapper.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ContextThemeWrapper::ContextThemeWrapper()
		: android::content::ContextWrapper(
			"android.view.ContextThemeWrapper",
			"()V"
		) {}
	inline ContextThemeWrapper::ContextThemeWrapper(android::content::Context arg0, android::content::res::Resources_Theme arg1)
		: android::content::ContextWrapper(
			"android.view.ContextThemeWrapper",
			"(Landroid/content/Context;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ContextThemeWrapper::ContextThemeWrapper(android::content::Context arg0, jint arg1)
		: android::content::ContextWrapper(
			"android.view.ContextThemeWrapper",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void ContextThemeWrapper::applyOverrideConfiguration(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"applyOverrideConfiguration",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline android::content::res::AssetManager ContextThemeWrapper::getAssets() const
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	inline android::content::res::Resources ContextThemeWrapper::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	inline JObject ContextThemeWrapper::getSystemService(JString arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline android::content::res::Resources_Theme ContextThemeWrapper::getTheme() const
	{
		return callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	inline void ContextThemeWrapper::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
