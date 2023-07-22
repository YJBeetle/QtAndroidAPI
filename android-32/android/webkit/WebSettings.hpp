#pragma once

#include "../content/Context.def.hpp"
#include "./WebSettings_LayoutAlgorithm.def.hpp"
#include "./WebSettings_PluginState.def.hpp"
#include "./WebSettings_RenderPriority.def.hpp"
#include "./WebSettings_TextSize.def.hpp"
#include "./WebSettings_ZoomDensity.def.hpp"
#include "../../JString.hpp"
#include "./WebSettings.def.hpp"

namespace android::webkit
{
	// Fields
	inline jint WebSettings::FORCE_DARK_AUTO()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_AUTO"
		);
	}
	inline jint WebSettings::FORCE_DARK_OFF()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_OFF"
		);
	}
	inline jint WebSettings::FORCE_DARK_ON()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_ON"
		);
	}
	inline jint WebSettings::LOAD_CACHE_ELSE_NETWORK()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_CACHE_ELSE_NETWORK"
		);
	}
	inline jint WebSettings::LOAD_CACHE_ONLY()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_CACHE_ONLY"
		);
	}
	inline jint WebSettings::LOAD_DEFAULT()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_DEFAULT"
		);
	}
	inline jint WebSettings::LOAD_NORMAL()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_NORMAL"
		);
	}
	inline jint WebSettings::LOAD_NO_CACHE()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_NO_CACHE"
		);
	}
	inline jint WebSettings::MENU_ITEM_NONE()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_NONE"
		);
	}
	inline jint WebSettings::MENU_ITEM_PROCESS_TEXT()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_PROCESS_TEXT"
		);
	}
	inline jint WebSettings::MENU_ITEM_SHARE()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_SHARE"
		);
	}
	inline jint WebSettings::MENU_ITEM_WEB_SEARCH()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_WEB_SEARCH"
		);
	}
	inline jint WebSettings::MIXED_CONTENT_ALWAYS_ALLOW()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_ALWAYS_ALLOW"
		);
	}
	inline jint WebSettings::MIXED_CONTENT_COMPATIBILITY_MODE()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_COMPATIBILITY_MODE"
		);
	}
	inline jint WebSettings::MIXED_CONTENT_NEVER_ALLOW()
	{
		return getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_NEVER_ALLOW"
		);
	}
	
	// Constructors
	inline WebSettings::WebSettings()
		: JObject(
			"android.webkit.WebSettings",
			"()V"
		) {}
	
	// Methods
	inline JString WebSettings::getDefaultUserAgent(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings",
			"getDefaultUserAgent",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean WebSettings::enableSmoothTransition() const
	{
		return callMethod<jboolean>(
			"enableSmoothTransition",
			"()Z"
		);
	}
	inline jboolean WebSettings::getAllowContentAccess() const
	{
		return callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
		);
	}
	inline jboolean WebSettings::getAllowFileAccess() const
	{
		return callMethod<jboolean>(
			"getAllowFileAccess",
			"()Z"
		);
	}
	inline jboolean WebSettings::getAllowFileAccessFromFileURLs() const
	{
		return callMethod<jboolean>(
			"getAllowFileAccessFromFileURLs",
			"()Z"
		);
	}
	inline jboolean WebSettings::getAllowUniversalAccessFromFileURLs() const
	{
		return callMethod<jboolean>(
			"getAllowUniversalAccessFromFileURLs",
			"()Z"
		);
	}
	inline jboolean WebSettings::getBlockNetworkImage() const
	{
		return callMethod<jboolean>(
			"getBlockNetworkImage",
			"()Z"
		);
	}
	inline jboolean WebSettings::getBlockNetworkLoads() const
	{
		return callMethod<jboolean>(
			"getBlockNetworkLoads",
			"()Z"
		);
	}
	inline jboolean WebSettings::getBuiltInZoomControls() const
	{
		return callMethod<jboolean>(
			"getBuiltInZoomControls",
			"()Z"
		);
	}
	inline jint WebSettings::getCacheMode() const
	{
		return callMethod<jint>(
			"getCacheMode",
			"()I"
		);
	}
	inline JString WebSettings::getCursiveFontFamily() const
	{
		return callObjectMethod(
			"getCursiveFontFamily",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean WebSettings::getDatabaseEnabled() const
	{
		return callMethod<jboolean>(
			"getDatabaseEnabled",
			"()Z"
		);
	}
	inline JString WebSettings::getDatabasePath() const
	{
		return callObjectMethod(
			"getDatabasePath",
			"()Ljava/lang/String;"
		);
	}
	inline jint WebSettings::getDefaultFixedFontSize() const
	{
		return callMethod<jint>(
			"getDefaultFixedFontSize",
			"()I"
		);
	}
	inline jint WebSettings::getDefaultFontSize() const
	{
		return callMethod<jint>(
			"getDefaultFontSize",
			"()I"
		);
	}
	inline JString WebSettings::getDefaultTextEncodingName() const
	{
		return callObjectMethod(
			"getDefaultTextEncodingName",
			"()Ljava/lang/String;"
		);
	}
	inline android::webkit::WebSettings_ZoomDensity WebSettings::getDefaultZoom() const
	{
		return callObjectMethod(
			"getDefaultZoom",
			"()Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	inline jint WebSettings::getDisabledActionModeMenuItems() const
	{
		return callMethod<jint>(
			"getDisabledActionModeMenuItems",
			"()I"
		);
	}
	inline jboolean WebSettings::getDisplayZoomControls() const
	{
		return callMethod<jboolean>(
			"getDisplayZoomControls",
			"()Z"
		);
	}
	inline jboolean WebSettings::getDomStorageEnabled() const
	{
		return callMethod<jboolean>(
			"getDomStorageEnabled",
			"()Z"
		);
	}
	inline JString WebSettings::getFantasyFontFamily() const
	{
		return callObjectMethod(
			"getFantasyFontFamily",
			"()Ljava/lang/String;"
		);
	}
	inline JString WebSettings::getFixedFontFamily() const
	{
		return callObjectMethod(
			"getFixedFontFamily",
			"()Ljava/lang/String;"
		);
	}
	inline jint WebSettings::getForceDark() const
	{
		return callMethod<jint>(
			"getForceDark",
			"()I"
		);
	}
	inline jboolean WebSettings::getJavaScriptCanOpenWindowsAutomatically() const
	{
		return callMethod<jboolean>(
			"getJavaScriptCanOpenWindowsAutomatically",
			"()Z"
		);
	}
	inline jboolean WebSettings::getJavaScriptEnabled() const
	{
		return callMethod<jboolean>(
			"getJavaScriptEnabled",
			"()Z"
		);
	}
	inline android::webkit::WebSettings_LayoutAlgorithm WebSettings::getLayoutAlgorithm() const
	{
		return callObjectMethod(
			"getLayoutAlgorithm",
			"()Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	inline jboolean WebSettings::getLightTouchEnabled() const
	{
		return callMethod<jboolean>(
			"getLightTouchEnabled",
			"()Z"
		);
	}
	inline jboolean WebSettings::getLoadWithOverviewMode() const
	{
		return callMethod<jboolean>(
			"getLoadWithOverviewMode",
			"()Z"
		);
	}
	inline jboolean WebSettings::getLoadsImagesAutomatically() const
	{
		return callMethod<jboolean>(
			"getLoadsImagesAutomatically",
			"()Z"
		);
	}
	inline jboolean WebSettings::getMediaPlaybackRequiresUserGesture() const
	{
		return callMethod<jboolean>(
			"getMediaPlaybackRequiresUserGesture",
			"()Z"
		);
	}
	inline jint WebSettings::getMinimumFontSize() const
	{
		return callMethod<jint>(
			"getMinimumFontSize",
			"()I"
		);
	}
	inline jint WebSettings::getMinimumLogicalFontSize() const
	{
		return callMethod<jint>(
			"getMinimumLogicalFontSize",
			"()I"
		);
	}
	inline jint WebSettings::getMixedContentMode() const
	{
		return callMethod<jint>(
			"getMixedContentMode",
			"()I"
		);
	}
	inline jboolean WebSettings::getOffscreenPreRaster() const
	{
		return callMethod<jboolean>(
			"getOffscreenPreRaster",
			"()Z"
		);
	}
	inline android::webkit::WebSettings_PluginState WebSettings::getPluginState() const
	{
		return callObjectMethod(
			"getPluginState",
			"()Landroid/webkit/WebSettings$PluginState;"
		);
	}
	inline jboolean WebSettings::getSafeBrowsingEnabled() const
	{
		return callMethod<jboolean>(
			"getSafeBrowsingEnabled",
			"()Z"
		);
	}
	inline JString WebSettings::getSansSerifFontFamily() const
	{
		return callObjectMethod(
			"getSansSerifFontFamily",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean WebSettings::getSaveFormData() const
	{
		return callMethod<jboolean>(
			"getSaveFormData",
			"()Z"
		);
	}
	inline jboolean WebSettings::getSavePassword() const
	{
		return callMethod<jboolean>(
			"getSavePassword",
			"()Z"
		);
	}
	inline JString WebSettings::getSerifFontFamily() const
	{
		return callObjectMethod(
			"getSerifFontFamily",
			"()Ljava/lang/String;"
		);
	}
	inline JString WebSettings::getStandardFontFamily() const
	{
		return callObjectMethod(
			"getStandardFontFamily",
			"()Ljava/lang/String;"
		);
	}
	inline android::webkit::WebSettings_TextSize WebSettings::getTextSize() const
	{
		return callObjectMethod(
			"getTextSize",
			"()Landroid/webkit/WebSettings$TextSize;"
		);
	}
	inline jint WebSettings::getTextZoom() const
	{
		return callMethod<jint>(
			"getTextZoom",
			"()I"
		);
	}
	inline jboolean WebSettings::getUseWideViewPort() const
	{
		return callMethod<jboolean>(
			"getUseWideViewPort",
			"()Z"
		);
	}
	inline JString WebSettings::getUserAgentString() const
	{
		return callObjectMethod(
			"getUserAgentString",
			"()Ljava/lang/String;"
		);
	}
	inline void WebSettings::setAllowContentAccess(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setAllowFileAccess(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowFileAccess",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setAllowFileAccessFromFileURLs(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowFileAccessFromFileURLs",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setAllowUniversalAccessFromFileURLs(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowUniversalAccessFromFileURLs",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setAppCacheEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setAppCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setAppCacheMaxSize(jlong arg0) const
	{
		callMethod<void>(
			"setAppCacheMaxSize",
			"(J)V",
			arg0
		);
	}
	inline void WebSettings::setAppCachePath(JString arg0) const
	{
		callMethod<void>(
			"setAppCachePath",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setBlockNetworkImage(jboolean arg0) const
	{
		callMethod<void>(
			"setBlockNetworkImage",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setBlockNetworkLoads(jboolean arg0) const
	{
		callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setBuiltInZoomControls(jboolean arg0) const
	{
		callMethod<void>(
			"setBuiltInZoomControls",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setCacheMode(jint arg0) const
	{
		callMethod<void>(
			"setCacheMode",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setCursiveFontFamily(JString arg0) const
	{
		callMethod<void>(
			"setCursiveFontFamily",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setDatabaseEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDatabaseEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setDatabasePath(JString arg0) const
	{
		callMethod<void>(
			"setDatabasePath",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setDefaultFixedFontSize(jint arg0) const
	{
		callMethod<void>(
			"setDefaultFixedFontSize",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setDefaultFontSize(jint arg0) const
	{
		callMethod<void>(
			"setDefaultFontSize",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setDefaultTextEncodingName(JString arg0) const
	{
		callMethod<void>(
			"setDefaultTextEncodingName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setDefaultZoom(android::webkit::WebSettings_ZoomDensity arg0) const
	{
		callMethod<void>(
			"setDefaultZoom",
			"(Landroid/webkit/WebSettings$ZoomDensity;)V",
			arg0.object()
		);
	}
	inline void WebSettings::setDisabledActionModeMenuItems(jint arg0) const
	{
		callMethod<void>(
			"setDisabledActionModeMenuItems",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setDisplayZoomControls(jboolean arg0) const
	{
		callMethod<void>(
			"setDisplayZoomControls",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setDomStorageEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDomStorageEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setEnableSmoothTransition(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableSmoothTransition",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setFantasyFontFamily(JString arg0) const
	{
		callMethod<void>(
			"setFantasyFontFamily",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setFixedFontFamily(JString arg0) const
	{
		callMethod<void>(
			"setFixedFontFamily",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setForceDark(jint arg0) const
	{
		callMethod<void>(
			"setForceDark",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setGeolocationDatabasePath(JString arg0) const
	{
		callMethod<void>(
			"setGeolocationDatabasePath",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setGeolocationEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setGeolocationEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setJavaScriptCanOpenWindowsAutomatically(jboolean arg0) const
	{
		callMethod<void>(
			"setJavaScriptCanOpenWindowsAutomatically",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setJavaScriptEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setJavaScriptEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setLayoutAlgorithm(android::webkit::WebSettings_LayoutAlgorithm arg0) const
	{
		callMethod<void>(
			"setLayoutAlgorithm",
			"(Landroid/webkit/WebSettings$LayoutAlgorithm;)V",
			arg0.object()
		);
	}
	inline void WebSettings::setLightTouchEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setLightTouchEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setLoadWithOverviewMode(jboolean arg0) const
	{
		callMethod<void>(
			"setLoadWithOverviewMode",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setLoadsImagesAutomatically(jboolean arg0) const
	{
		callMethod<void>(
			"setLoadsImagesAutomatically",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setMediaPlaybackRequiresUserGesture(jboolean arg0) const
	{
		callMethod<void>(
			"setMediaPlaybackRequiresUserGesture",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setMinimumFontSize(jint arg0) const
	{
		callMethod<void>(
			"setMinimumFontSize",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setMinimumLogicalFontSize(jint arg0) const
	{
		callMethod<void>(
			"setMinimumLogicalFontSize",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setMixedContentMode(jint arg0) const
	{
		callMethod<void>(
			"setMixedContentMode",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setNeedInitialFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedInitialFocus",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setOffscreenPreRaster(jboolean arg0) const
	{
		callMethod<void>(
			"setOffscreenPreRaster",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setPluginState(android::webkit::WebSettings_PluginState arg0) const
	{
		callMethod<void>(
			"setPluginState",
			"(Landroid/webkit/WebSettings$PluginState;)V",
			arg0.object()
		);
	}
	inline void WebSettings::setRenderPriority(android::webkit::WebSettings_RenderPriority arg0) const
	{
		callMethod<void>(
			"setRenderPriority",
			"(Landroid/webkit/WebSettings$RenderPriority;)V",
			arg0.object()
		);
	}
	inline void WebSettings::setSafeBrowsingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSafeBrowsingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setSansSerifFontFamily(JString arg0) const
	{
		callMethod<void>(
			"setSansSerifFontFamily",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setSaveFormData(jboolean arg0) const
	{
		callMethod<void>(
			"setSaveFormData",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setSavePassword(jboolean arg0) const
	{
		callMethod<void>(
			"setSavePassword",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setSerifFontFamily(JString arg0) const
	{
		callMethod<void>(
			"setSerifFontFamily",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setStandardFontFamily(JString arg0) const
	{
		callMethod<void>(
			"setStandardFontFamily",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebSettings::setSupportMultipleWindows(jboolean arg0) const
	{
		callMethod<void>(
			"setSupportMultipleWindows",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setSupportZoom(jboolean arg0) const
	{
		callMethod<void>(
			"setSupportZoom",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setTextSize(android::webkit::WebSettings_TextSize arg0) const
	{
		callMethod<void>(
			"setTextSize",
			"(Landroid/webkit/WebSettings$TextSize;)V",
			arg0.object()
		);
	}
	inline void WebSettings::setTextZoom(jint arg0) const
	{
		callMethod<void>(
			"setTextZoom",
			"(I)V",
			arg0
		);
	}
	inline void WebSettings::setUseWideViewPort(jboolean arg0) const
	{
		callMethod<void>(
			"setUseWideViewPort",
			"(Z)V",
			arg0
		);
	}
	inline void WebSettings::setUserAgentString(JString arg0) const
	{
		callMethod<void>(
			"setUserAgentString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean WebSettings::supportMultipleWindows() const
	{
		return callMethod<jboolean>(
			"supportMultipleWindows",
			"()Z"
		);
	}
	inline jboolean WebSettings::supportZoom() const
	{
		return callMethod<jboolean>(
			"supportZoom",
			"()Z"
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
