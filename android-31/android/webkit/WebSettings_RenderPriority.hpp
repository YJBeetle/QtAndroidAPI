#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./WebSettings_RenderPriority.def.hpp"

namespace android::webkit
{
	// Fields
	inline android::webkit::WebSettings_RenderPriority WebSettings_RenderPriority::HIGH()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"HIGH",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	inline android::webkit::WebSettings_RenderPriority WebSettings_RenderPriority::LOW()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"LOW",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	inline android::webkit::WebSettings_RenderPriority WebSettings_RenderPriority::NORMAL()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"NORMAL",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::webkit::WebSettings_RenderPriority WebSettings_RenderPriority::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$RenderPriority;",
			arg0.object<jstring>()
		);
	}
	inline JArray WebSettings_RenderPriority::values()
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"values",
			"()[Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
} // namespace android::webkit

// Base class headers
#include "../../java/lang/Enum.hpp"

