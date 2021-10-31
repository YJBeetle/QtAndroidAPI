#include "../content/Context.hpp"
#include "./WebSettings_LayoutAlgorithm.hpp"
#include "./WebSettings_PluginState.hpp"
#include "./WebSettings_RenderPriority.hpp"
#include "./WebSettings_TextSize.hpp"
#include "./WebSettings_ZoomDensity.hpp"
#include "./WebSettings.hpp"

namespace android::webkit
{
	// Fields
	jint WebSettings::FORCE_DARK_AUTO()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_AUTO"
		);
	}
	jint WebSettings::FORCE_DARK_OFF()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_OFF"
		);
	}
	jint WebSettings::FORCE_DARK_ON()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_ON"
		);
	}
	jint WebSettings::LOAD_CACHE_ELSE_NETWORK()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_CACHE_ELSE_NETWORK"
		);
	}
	jint WebSettings::LOAD_CACHE_ONLY()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_CACHE_ONLY"
		);
	}
	jint WebSettings::LOAD_DEFAULT()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_DEFAULT"
		);
	}
	jint WebSettings::LOAD_NORMAL()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_NORMAL"
		);
	}
	jint WebSettings::LOAD_NO_CACHE()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_NO_CACHE"
		);
	}
	jint WebSettings::MENU_ITEM_NONE()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_NONE"
		);
	}
	jint WebSettings::MENU_ITEM_PROCESS_TEXT()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_PROCESS_TEXT"
		);
	}
	jint WebSettings::MENU_ITEM_SHARE()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_SHARE"
		);
	}
	jint WebSettings::MENU_ITEM_WEB_SEARCH()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_WEB_SEARCH"
		);
	}
	jint WebSettings::MIXED_CONTENT_ALWAYS_ALLOW()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_ALWAYS_ALLOW"
		);
	}
	jint WebSettings::MIXED_CONTENT_COMPATIBILITY_MODE()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_COMPATIBILITY_MODE"
		);
	}
	jint WebSettings::MIXED_CONTENT_NEVER_ALLOW()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_NEVER_ALLOW"
		);
	}
	
	// QAndroidJniObject forward
	WebSettings::WebSettings(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebSettings::WebSettings()
		: __JniBaseClass(
			"android.webkit.WebSettings",
			"()V"
		) {}
	
	// Methods
	jstring WebSettings::getDefaultUserAgent(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings",
			"getDefaultUserAgent",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jboolean WebSettings::enableSmoothTransition()
	{
		return callMethod<jboolean>(
			"enableSmoothTransition",
			"()Z"
		);
	}
	jboolean WebSettings::getAllowContentAccess()
	{
		return callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
		);
	}
	jboolean WebSettings::getAllowFileAccess()
	{
		return callMethod<jboolean>(
			"getAllowFileAccess",
			"()Z"
		);
	}
	jboolean WebSettings::getAllowFileAccessFromFileURLs()
	{
		return callMethod<jboolean>(
			"getAllowFileAccessFromFileURLs",
			"()Z"
		);
	}
	jboolean WebSettings::getAllowUniversalAccessFromFileURLs()
	{
		return callMethod<jboolean>(
			"getAllowUniversalAccessFromFileURLs",
			"()Z"
		);
	}
	jboolean WebSettings::getBlockNetworkImage()
	{
		return callMethod<jboolean>(
			"getBlockNetworkImage",
			"()Z"
		);
	}
	jboolean WebSettings::getBlockNetworkLoads()
	{
		return callMethod<jboolean>(
			"getBlockNetworkLoads",
			"()Z"
		);
	}
	jboolean WebSettings::getBuiltInZoomControls()
	{
		return callMethod<jboolean>(
			"getBuiltInZoomControls",
			"()Z"
		);
	}
	jint WebSettings::getCacheMode()
	{
		return callMethod<jint>(
			"getCacheMode",
			"()I"
		);
	}
	jstring WebSettings::getCursiveFontFamily()
	{
		return callObjectMethod(
			"getCursiveFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean WebSettings::getDatabaseEnabled()
	{
		return callMethod<jboolean>(
			"getDatabaseEnabled",
			"()Z"
		);
	}
	jstring WebSettings::getDatabasePath()
	{
		return callObjectMethod(
			"getDatabasePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebSettings::getDefaultFixedFontSize()
	{
		return callMethod<jint>(
			"getDefaultFixedFontSize",
			"()I"
		);
	}
	jint WebSettings::getDefaultFontSize()
	{
		return callMethod<jint>(
			"getDefaultFontSize",
			"()I"
		);
	}
	jstring WebSettings::getDefaultTextEncodingName()
	{
		return callObjectMethod(
			"getDefaultTextEncodingName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::webkit::WebSettings_ZoomDensity WebSettings::getDefaultZoom()
	{
		return callObjectMethod(
			"getDefaultZoom",
			"()Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	jint WebSettings::getDisabledActionModeMenuItems()
	{
		return callMethod<jint>(
			"getDisabledActionModeMenuItems",
			"()I"
		);
	}
	jboolean WebSettings::getDisplayZoomControls()
	{
		return callMethod<jboolean>(
			"getDisplayZoomControls",
			"()Z"
		);
	}
	jboolean WebSettings::getDomStorageEnabled()
	{
		return callMethod<jboolean>(
			"getDomStorageEnabled",
			"()Z"
		);
	}
	jstring WebSettings::getFantasyFontFamily()
	{
		return callObjectMethod(
			"getFantasyFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebSettings::getFixedFontFamily()
	{
		return callObjectMethod(
			"getFixedFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebSettings::getForceDark()
	{
		return callMethod<jint>(
			"getForceDark",
			"()I"
		);
	}
	jboolean WebSettings::getJavaScriptCanOpenWindowsAutomatically()
	{
		return callMethod<jboolean>(
			"getJavaScriptCanOpenWindowsAutomatically",
			"()Z"
		);
	}
	jboolean WebSettings::getJavaScriptEnabled()
	{
		return callMethod<jboolean>(
			"getJavaScriptEnabled",
			"()Z"
		);
	}
	android::webkit::WebSettings_LayoutAlgorithm WebSettings::getLayoutAlgorithm()
	{
		return callObjectMethod(
			"getLayoutAlgorithm",
			"()Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	jboolean WebSettings::getLightTouchEnabled()
	{
		return callMethod<jboolean>(
			"getLightTouchEnabled",
			"()Z"
		);
	}
	jboolean WebSettings::getLoadWithOverviewMode()
	{
		return callMethod<jboolean>(
			"getLoadWithOverviewMode",
			"()Z"
		);
	}
	jboolean WebSettings::getLoadsImagesAutomatically()
	{
		return callMethod<jboolean>(
			"getLoadsImagesAutomatically",
			"()Z"
		);
	}
	jboolean WebSettings::getMediaPlaybackRequiresUserGesture()
	{
		return callMethod<jboolean>(
			"getMediaPlaybackRequiresUserGesture",
			"()Z"
		);
	}
	jint WebSettings::getMinimumFontSize()
	{
		return callMethod<jint>(
			"getMinimumFontSize",
			"()I"
		);
	}
	jint WebSettings::getMinimumLogicalFontSize()
	{
		return callMethod<jint>(
			"getMinimumLogicalFontSize",
			"()I"
		);
	}
	jint WebSettings::getMixedContentMode()
	{
		return callMethod<jint>(
			"getMixedContentMode",
			"()I"
		);
	}
	jboolean WebSettings::getOffscreenPreRaster()
	{
		return callMethod<jboolean>(
			"getOffscreenPreRaster",
			"()Z"
		);
	}
	android::webkit::WebSettings_PluginState WebSettings::getPluginState()
	{
		return callObjectMethod(
			"getPluginState",
			"()Landroid/webkit/WebSettings$PluginState;"
		);
	}
	jboolean WebSettings::getSafeBrowsingEnabled()
	{
		return callMethod<jboolean>(
			"getSafeBrowsingEnabled",
			"()Z"
		);
	}
	jstring WebSettings::getSansSerifFontFamily()
	{
		return callObjectMethod(
			"getSansSerifFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean WebSettings::getSaveFormData()
	{
		return callMethod<jboolean>(
			"getSaveFormData",
			"()Z"
		);
	}
	jboolean WebSettings::getSavePassword()
	{
		return callMethod<jboolean>(
			"getSavePassword",
			"()Z"
		);
	}
	jstring WebSettings::getSerifFontFamily()
	{
		return callObjectMethod(
			"getSerifFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebSettings::getStandardFontFamily()
	{
		return callObjectMethod(
			"getStandardFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::webkit::WebSettings_TextSize WebSettings::getTextSize()
	{
		return callObjectMethod(
			"getTextSize",
			"()Landroid/webkit/WebSettings$TextSize;"
		);
	}
	jint WebSettings::getTextZoom()
	{
		return callMethod<jint>(
			"getTextZoom",
			"()I"
		);
	}
	jboolean WebSettings::getUseWideViewPort()
	{
		return callMethod<jboolean>(
			"getUseWideViewPort",
			"()Z"
		);
	}
	jstring WebSettings::getUserAgentString()
	{
		return callObjectMethod(
			"getUserAgentString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WebSettings::setAllowContentAccess(jboolean arg0)
	{
		callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAllowFileAccess(jboolean arg0)
	{
		callMethod<void>(
			"setAllowFileAccess",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAllowFileAccessFromFileURLs(jboolean arg0)
	{
		callMethod<void>(
			"setAllowFileAccessFromFileURLs",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAllowUniversalAccessFromFileURLs(jboolean arg0)
	{
		callMethod<void>(
			"setAllowUniversalAccessFromFileURLs",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAppCacheEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setAppCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAppCacheMaxSize(jlong arg0)
	{
		callMethod<void>(
			"setAppCacheMaxSize",
			"(J)V",
			arg0
		);
	}
	void WebSettings::setAppCachePath(jstring arg0)
	{
		callMethod<void>(
			"setAppCachePath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setBlockNetworkImage(jboolean arg0)
	{
		callMethod<void>(
			"setBlockNetworkImage",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setBlockNetworkLoads(jboolean arg0)
	{
		callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setBuiltInZoomControls(jboolean arg0)
	{
		callMethod<void>(
			"setBuiltInZoomControls",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setCacheMode(jint arg0)
	{
		callMethod<void>(
			"setCacheMode",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setCursiveFontFamily(jstring arg0)
	{
		callMethod<void>(
			"setCursiveFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setDatabaseEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setDatabaseEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setDatabasePath(jstring arg0)
	{
		callMethod<void>(
			"setDatabasePath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setDefaultFixedFontSize(jint arg0)
	{
		callMethod<void>(
			"setDefaultFixedFontSize",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setDefaultFontSize(jint arg0)
	{
		callMethod<void>(
			"setDefaultFontSize",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setDefaultTextEncodingName(jstring arg0)
	{
		callMethod<void>(
			"setDefaultTextEncodingName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setDefaultZoom(android::webkit::WebSettings_ZoomDensity arg0)
	{
		callMethod<void>(
			"setDefaultZoom",
			"(Landroid/webkit/WebSettings$ZoomDensity;)V",
			arg0.object()
		);
	}
	void WebSettings::setDisabledActionModeMenuItems(jint arg0)
	{
		callMethod<void>(
			"setDisabledActionModeMenuItems",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setDisplayZoomControls(jboolean arg0)
	{
		callMethod<void>(
			"setDisplayZoomControls",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setDomStorageEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setDomStorageEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setEnableSmoothTransition(jboolean arg0)
	{
		callMethod<void>(
			"setEnableSmoothTransition",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setFantasyFontFamily(jstring arg0)
	{
		callMethod<void>(
			"setFantasyFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setFixedFontFamily(jstring arg0)
	{
		callMethod<void>(
			"setFixedFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setForceDark(jint arg0)
	{
		callMethod<void>(
			"setForceDark",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setGeolocationDatabasePath(jstring arg0)
	{
		callMethod<void>(
			"setGeolocationDatabasePath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setGeolocationEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setGeolocationEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setJavaScriptCanOpenWindowsAutomatically(jboolean arg0)
	{
		callMethod<void>(
			"setJavaScriptCanOpenWindowsAutomatically",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setJavaScriptEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setJavaScriptEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setLayoutAlgorithm(android::webkit::WebSettings_LayoutAlgorithm arg0)
	{
		callMethod<void>(
			"setLayoutAlgorithm",
			"(Landroid/webkit/WebSettings$LayoutAlgorithm;)V",
			arg0.object()
		);
	}
	void WebSettings::setLightTouchEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setLightTouchEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setLoadWithOverviewMode(jboolean arg0)
	{
		callMethod<void>(
			"setLoadWithOverviewMode",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setLoadsImagesAutomatically(jboolean arg0)
	{
		callMethod<void>(
			"setLoadsImagesAutomatically",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setMediaPlaybackRequiresUserGesture(jboolean arg0)
	{
		callMethod<void>(
			"setMediaPlaybackRequiresUserGesture",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setMinimumFontSize(jint arg0)
	{
		callMethod<void>(
			"setMinimumFontSize",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setMinimumLogicalFontSize(jint arg0)
	{
		callMethod<void>(
			"setMinimumLogicalFontSize",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setMixedContentMode(jint arg0)
	{
		callMethod<void>(
			"setMixedContentMode",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setNeedInitialFocus(jboolean arg0)
	{
		callMethod<void>(
			"setNeedInitialFocus",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setOffscreenPreRaster(jboolean arg0)
	{
		callMethod<void>(
			"setOffscreenPreRaster",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setPluginState(android::webkit::WebSettings_PluginState arg0)
	{
		callMethod<void>(
			"setPluginState",
			"(Landroid/webkit/WebSettings$PluginState;)V",
			arg0.object()
		);
	}
	void WebSettings::setRenderPriority(android::webkit::WebSettings_RenderPriority arg0)
	{
		callMethod<void>(
			"setRenderPriority",
			"(Landroid/webkit/WebSettings$RenderPriority;)V",
			arg0.object()
		);
	}
	void WebSettings::setSafeBrowsingEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setSafeBrowsingEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setSansSerifFontFamily(jstring arg0)
	{
		callMethod<void>(
			"setSansSerifFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setSaveFormData(jboolean arg0)
	{
		callMethod<void>(
			"setSaveFormData",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setSavePassword(jboolean arg0)
	{
		callMethod<void>(
			"setSavePassword",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setSerifFontFamily(jstring arg0)
	{
		callMethod<void>(
			"setSerifFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setStandardFontFamily(jstring arg0)
	{
		callMethod<void>(
			"setStandardFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setSupportMultipleWindows(jboolean arg0)
	{
		callMethod<void>(
			"setSupportMultipleWindows",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setSupportZoom(jboolean arg0)
	{
		callMethod<void>(
			"setSupportZoom",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setTextSize(android::webkit::WebSettings_TextSize arg0)
	{
		callMethod<void>(
			"setTextSize",
			"(Landroid/webkit/WebSettings$TextSize;)V",
			arg0.object()
		);
	}
	void WebSettings::setTextZoom(jint arg0)
	{
		callMethod<void>(
			"setTextZoom",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setUseWideViewPort(jboolean arg0)
	{
		callMethod<void>(
			"setUseWideViewPort",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setUserAgentString(jstring arg0)
	{
		callMethod<void>(
			"setUserAgentString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean WebSettings::supportMultipleWindows()
	{
		return callMethod<jboolean>(
			"supportMultipleWindows",
			"()Z"
		);
	}
	jboolean WebSettings::supportZoom()
	{
		return callMethod<jboolean>(
			"supportZoom",
			"()Z"
		);
	}
} // namespace android::webkit

