#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./WebSettings_LayoutAlgorithm.hpp"

namespace android::webkit
{
	// Fields
	android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::NARROW_COLUMNS()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"NARROW_COLUMNS",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::NORMAL()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"NORMAL",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::SINGLE_COLUMN()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"SINGLE_COLUMN",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::TEXT_AUTOSIZING()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"TEXT_AUTOSIZING",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	
	// Constructors
	
	// Methods
	android::webkit::WebSettings_LayoutAlgorithm WebSettings_LayoutAlgorithm::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$LayoutAlgorithm;",
			arg0.object<jstring>()
		);
	}
	JArray WebSettings_LayoutAlgorithm::values()
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"values",
			"()[Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
} // namespace android::webkit

