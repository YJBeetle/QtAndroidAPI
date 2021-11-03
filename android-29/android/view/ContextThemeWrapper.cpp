#include "../content/Context.hpp"
#include "../content/res/AssetManager.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ContextThemeWrapper.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ContextThemeWrapper::ContextThemeWrapper(QAndroidJniObject obj) : android::content::ContextWrapper(obj) {}
	
	// Constructors
	ContextThemeWrapper::ContextThemeWrapper()
		: android::content::ContextWrapper(
			"android.view.ContextThemeWrapper",
			"()V"
		) {}
	ContextThemeWrapper::ContextThemeWrapper(android::content::Context arg0, android::content::res::Resources_Theme arg1)
		: android::content::ContextWrapper(
			"android.view.ContextThemeWrapper",
			"(Landroid/content/Context;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object()
		) {}
	ContextThemeWrapper::ContextThemeWrapper(android::content::Context arg0, jint arg1)
		: android::content::ContextWrapper(
			"android.view.ContextThemeWrapper",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void ContextThemeWrapper::applyOverrideConfiguration(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"applyOverrideConfiguration",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	android::content::res::AssetManager ContextThemeWrapper::getAssets() const
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	android::content::res::Resources ContextThemeWrapper::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	JObject ContextThemeWrapper::getSystemService(JString arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	android::content::res::Resources_Theme ContextThemeWrapper::getTheme() const
	{
		return callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	void ContextThemeWrapper::setTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void ContextThemeWrapper::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

