#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./WebSettings_LayoutAlgorithm.def.hpp"

namespace android::webkit
{
	// Fields
	inline android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::NARROW_COLUMNS()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"NARROW_COLUMNS",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	inline android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::NORMAL()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"NORMAL",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	inline android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::SINGLE_COLUMN()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"SINGLE_COLUMN",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	inline android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::TEXT_AUTOSIZING()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"TEXT_AUTOSIZING",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$LayoutAlgorithm;",
			arg0.object<jstring>()
		);
	}
	inline JArray WebSettings_LayoutAlgorithm::values()
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"values",
			"()[Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
} // namespace android::webkit

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
