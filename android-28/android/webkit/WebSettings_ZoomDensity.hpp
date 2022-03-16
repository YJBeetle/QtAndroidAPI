#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./WebSettings_ZoomDensity.def.hpp"

namespace android::webkit
{
	// Fields
	inline android::webkit::WebSettings_ZoomDensity WebSettings_ZoomDensity::CLOSE()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"CLOSE",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	inline android::webkit::WebSettings_ZoomDensity WebSettings_ZoomDensity::FAR()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"FAR",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	inline android::webkit::WebSettings_ZoomDensity WebSettings_ZoomDensity::MEDIUM()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"MEDIUM",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::webkit::WebSettings_ZoomDensity WebSettings_ZoomDensity::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$ZoomDensity;",
			arg0.object<jstring>()
		);
	}
	inline JArray WebSettings_ZoomDensity::values()
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"values",
			"()[Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
} // namespace android::webkit

// Base class headers
#include "../../java/lang/Enum.hpp"

