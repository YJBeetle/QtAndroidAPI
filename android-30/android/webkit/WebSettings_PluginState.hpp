#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./WebSettings_PluginState.def.hpp"

namespace android::webkit
{
	// Fields
	inline android::webkit::WebSettings_PluginState WebSettings_PluginState::OFF()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"OFF",
			"Landroid/webkit/WebSettings$PluginState;"
		);
	}
	inline android::webkit::WebSettings_PluginState WebSettings_PluginState::ON()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"ON",
			"Landroid/webkit/WebSettings$PluginState;"
		);
	}
	inline android::webkit::WebSettings_PluginState WebSettings_PluginState::ON_DEMAND()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"ON_DEMAND",
			"Landroid/webkit/WebSettings$PluginState;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::webkit::WebSettings_PluginState WebSettings_PluginState::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$PluginState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$PluginState;",
			arg0.object<jstring>()
		);
	}
	inline JArray WebSettings_PluginState::values()
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$PluginState",
			"values",
			"()[Landroid/webkit/WebSettings$PluginState;"
		);
	}
} // namespace android::webkit

// Base class headers
#include "../../java/lang/Enum.hpp"

