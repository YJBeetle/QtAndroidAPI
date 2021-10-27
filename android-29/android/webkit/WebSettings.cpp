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
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_AUTO"
		);
	}
	jint WebSettings::FORCE_DARK_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_OFF"
		);
	}
	jint WebSettings::FORCE_DARK_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"FORCE_DARK_ON"
		);
	}
	jint WebSettings::LOAD_CACHE_ELSE_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_CACHE_ELSE_NETWORK"
		);
	}
	jint WebSettings::LOAD_CACHE_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_CACHE_ONLY"
		);
	}
	jint WebSettings::LOAD_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_DEFAULT"
		);
	}
	jint WebSettings::LOAD_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_NORMAL"
		);
	}
	jint WebSettings::LOAD_NO_CACHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"LOAD_NO_CACHE"
		);
	}
	jint WebSettings::MENU_ITEM_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_NONE"
		);
	}
	jint WebSettings::MENU_ITEM_PROCESS_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_PROCESS_TEXT"
		);
	}
	jint WebSettings::MENU_ITEM_SHARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_SHARE"
		);
	}
	jint WebSettings::MENU_ITEM_WEB_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"MENU_ITEM_WEB_SEARCH"
		);
	}
	jint WebSettings::MIXED_CONTENT_ALWAYS_ALLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_ALWAYS_ALLOW"
		);
	}
	jint WebSettings::MIXED_CONTENT_COMPATIBILITY_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_COMPATIBILITY_MODE"
		);
	}
	jint WebSettings::MIXED_CONTENT_NEVER_ALLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebSettings",
			"MIXED_CONTENT_NEVER_ALLOW"
		);
	}
	
	WebSettings::WebSettings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebSettings::WebSettings()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebSettings",
			"()V"
		);
	}
	
	// Methods
	jstring WebSettings::getDefaultUserAgent(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings",
			"getDefaultUserAgent",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean WebSettings::enableSmoothTransition()
	{
		return __thiz.callMethod<jboolean>(
			"enableSmoothTransition",
			"()Z"
		);
	}
	jboolean WebSettings::getAllowContentAccess()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
		);
	}
	jboolean WebSettings::getAllowFileAccess()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowFileAccess",
			"()Z"
		);
	}
	jboolean WebSettings::getAllowFileAccessFromFileURLs()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowFileAccessFromFileURLs",
			"()Z"
		);
	}
	jboolean WebSettings::getAllowUniversalAccessFromFileURLs()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowUniversalAccessFromFileURLs",
			"()Z"
		);
	}
	jboolean WebSettings::getBlockNetworkImage()
	{
		return __thiz.callMethod<jboolean>(
			"getBlockNetworkImage",
			"()Z"
		);
	}
	jboolean WebSettings::getBlockNetworkLoads()
	{
		return __thiz.callMethod<jboolean>(
			"getBlockNetworkLoads",
			"()Z"
		);
	}
	jboolean WebSettings::getBuiltInZoomControls()
	{
		return __thiz.callMethod<jboolean>(
			"getBuiltInZoomControls",
			"()Z"
		);
	}
	jint WebSettings::getCacheMode()
	{
		return __thiz.callMethod<jint>(
			"getCacheMode",
			"()I"
		);
	}
	jstring WebSettings::getCursiveFontFamily()
	{
		return __thiz.callObjectMethod(
			"getCursiveFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean WebSettings::getDatabaseEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getDatabaseEnabled",
			"()Z"
		);
	}
	jstring WebSettings::getDatabasePath()
	{
		return __thiz.callObjectMethod(
			"getDatabasePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebSettings::getDefaultFixedFontSize()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFixedFontSize",
			"()I"
		);
	}
	jint WebSettings::getDefaultFontSize()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFontSize",
			"()I"
		);
	}
	jstring WebSettings::getDefaultTextEncodingName()
	{
		return __thiz.callObjectMethod(
			"getDefaultTextEncodingName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WebSettings::getDefaultZoom()
	{
		return __thiz.callObjectMethod(
			"getDefaultZoom",
			"()Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	jint WebSettings::getDisabledActionModeMenuItems()
	{
		return __thiz.callMethod<jint>(
			"getDisabledActionModeMenuItems",
			"()I"
		);
	}
	jboolean WebSettings::getDisplayZoomControls()
	{
		return __thiz.callMethod<jboolean>(
			"getDisplayZoomControls",
			"()Z"
		);
	}
	jboolean WebSettings::getDomStorageEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getDomStorageEnabled",
			"()Z"
		);
	}
	jstring WebSettings::getFantasyFontFamily()
	{
		return __thiz.callObjectMethod(
			"getFantasyFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebSettings::getFixedFontFamily()
	{
		return __thiz.callObjectMethod(
			"getFixedFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebSettings::getForceDark()
	{
		return __thiz.callMethod<jint>(
			"getForceDark",
			"()I"
		);
	}
	jboolean WebSettings::getJavaScriptCanOpenWindowsAutomatically()
	{
		return __thiz.callMethod<jboolean>(
			"getJavaScriptCanOpenWindowsAutomatically",
			"()Z"
		);
	}
	jboolean WebSettings::getJavaScriptEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getJavaScriptEnabled",
			"()Z"
		);
	}
	QAndroidJniObject WebSettings::getLayoutAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getLayoutAlgorithm",
			"()Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	jboolean WebSettings::getLightTouchEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getLightTouchEnabled",
			"()Z"
		);
	}
	jboolean WebSettings::getLoadWithOverviewMode()
	{
		return __thiz.callMethod<jboolean>(
			"getLoadWithOverviewMode",
			"()Z"
		);
	}
	jboolean WebSettings::getLoadsImagesAutomatically()
	{
		return __thiz.callMethod<jboolean>(
			"getLoadsImagesAutomatically",
			"()Z"
		);
	}
	jboolean WebSettings::getMediaPlaybackRequiresUserGesture()
	{
		return __thiz.callMethod<jboolean>(
			"getMediaPlaybackRequiresUserGesture",
			"()Z"
		);
	}
	jint WebSettings::getMinimumFontSize()
	{
		return __thiz.callMethod<jint>(
			"getMinimumFontSize",
			"()I"
		);
	}
	jint WebSettings::getMinimumLogicalFontSize()
	{
		return __thiz.callMethod<jint>(
			"getMinimumLogicalFontSize",
			"()I"
		);
	}
	jint WebSettings::getMixedContentMode()
	{
		return __thiz.callMethod<jint>(
			"getMixedContentMode",
			"()I"
		);
	}
	jboolean WebSettings::getOffscreenPreRaster()
	{
		return __thiz.callMethod<jboolean>(
			"getOffscreenPreRaster",
			"()Z"
		);
	}
	QAndroidJniObject WebSettings::getPluginState()
	{
		return __thiz.callObjectMethod(
			"getPluginState",
			"()Landroid/webkit/WebSettings$PluginState;"
		);
	}
	jboolean WebSettings::getSafeBrowsingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getSafeBrowsingEnabled",
			"()Z"
		);
	}
	jstring WebSettings::getSansSerifFontFamily()
	{
		return __thiz.callObjectMethod(
			"getSansSerifFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean WebSettings::getSaveFormData()
	{
		return __thiz.callMethod<jboolean>(
			"getSaveFormData",
			"()Z"
		);
	}
	jboolean WebSettings::getSavePassword()
	{
		return __thiz.callMethod<jboolean>(
			"getSavePassword",
			"()Z"
		);
	}
	jstring WebSettings::getSerifFontFamily()
	{
		return __thiz.callObjectMethod(
			"getSerifFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebSettings::getStandardFontFamily()
	{
		return __thiz.callObjectMethod(
			"getStandardFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WebSettings::getTextSize()
	{
		return __thiz.callObjectMethod(
			"getTextSize",
			"()Landroid/webkit/WebSettings$TextSize;"
		);
	}
	jint WebSettings::getTextZoom()
	{
		return __thiz.callMethod<jint>(
			"getTextZoom",
			"()I"
		);
	}
	jboolean WebSettings::getUseWideViewPort()
	{
		return __thiz.callMethod<jboolean>(
			"getUseWideViewPort",
			"()Z"
		);
	}
	jstring WebSettings::getUserAgentString()
	{
		return __thiz.callObjectMethod(
			"getUserAgentString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WebSettings::setAllowContentAccess(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAllowFileAccess(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowFileAccess",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAllowFileAccessFromFileURLs(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowFileAccessFromFileURLs",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAllowUniversalAccessFromFileURLs(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowUniversalAccessFromFileURLs",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAppCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAppCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setAppCacheMaxSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setAppCacheMaxSize",
			"(J)V",
			arg0
		);
	}
	void WebSettings::setAppCachePath(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAppCachePath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setAppCachePath(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAppCachePath",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setBlockNetworkImage(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBlockNetworkImage",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setBlockNetworkLoads(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setBuiltInZoomControls(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBuiltInZoomControls",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setCacheMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCacheMode",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setCursiveFontFamily(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCursiveFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setCursiveFontFamily(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCursiveFontFamily",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setDatabaseEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDatabaseEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setDatabasePath(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDatabasePath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setDatabasePath(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDatabasePath",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setDefaultFixedFontSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultFixedFontSize",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setDefaultFontSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultFontSize",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setDefaultTextEncodingName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultTextEncodingName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setDefaultTextEncodingName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultTextEncodingName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setDefaultZoom(android::webkit::WebSettings_ZoomDensity arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultZoom",
			"(Landroid/webkit/WebSettings$ZoomDensity;)V",
			arg0.__jniObject().object()
		);
	}
	void WebSettings::setDisabledActionModeMenuItems(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisabledActionModeMenuItems",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setDisplayZoomControls(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayZoomControls",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setDomStorageEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDomStorageEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setEnableSmoothTransition(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnableSmoothTransition",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setFantasyFontFamily(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFantasyFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setFantasyFontFamily(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFantasyFontFamily",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setFixedFontFamily(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFixedFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setFixedFontFamily(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFixedFontFamily",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setForceDark(jint arg0)
	{
		__thiz.callMethod<void>(
			"setForceDark",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setGeolocationDatabasePath(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setGeolocationDatabasePath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setGeolocationDatabasePath(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setGeolocationDatabasePath",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setGeolocationEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setGeolocationEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setJavaScriptCanOpenWindowsAutomatically(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setJavaScriptCanOpenWindowsAutomatically",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setJavaScriptEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setJavaScriptEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setLayoutAlgorithm(android::webkit::WebSettings_LayoutAlgorithm arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutAlgorithm",
			"(Landroid/webkit/WebSettings$LayoutAlgorithm;)V",
			arg0.__jniObject().object()
		);
	}
	void WebSettings::setLightTouchEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLightTouchEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setLoadWithOverviewMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLoadWithOverviewMode",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setLoadsImagesAutomatically(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLoadsImagesAutomatically",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setMediaPlaybackRequiresUserGesture(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMediaPlaybackRequiresUserGesture",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setMinimumFontSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumFontSize",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setMinimumLogicalFontSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumLogicalFontSize",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setMixedContentMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMixedContentMode",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setNeedInitialFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedInitialFocus",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setOffscreenPreRaster(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOffscreenPreRaster",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setPluginState(android::webkit::WebSettings_PluginState arg0)
	{
		__thiz.callMethod<void>(
			"setPluginState",
			"(Landroid/webkit/WebSettings$PluginState;)V",
			arg0.__jniObject().object()
		);
	}
	void WebSettings::setRenderPriority(android::webkit::WebSettings_RenderPriority arg0)
	{
		__thiz.callMethod<void>(
			"setRenderPriority",
			"(Landroid/webkit/WebSettings$RenderPriority;)V",
			arg0.__jniObject().object()
		);
	}
	void WebSettings::setSafeBrowsingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSafeBrowsingEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setSansSerifFontFamily(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSansSerifFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setSansSerifFontFamily(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSansSerifFontFamily",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setSaveFormData(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSaveFormData",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setSavePassword(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSavePassword",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setSerifFontFamily(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSerifFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setSerifFontFamily(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSerifFontFamily",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setStandardFontFamily(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setStandardFontFamily",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setStandardFontFamily(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setStandardFontFamily",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebSettings::setSupportMultipleWindows(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSupportMultipleWindows",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setSupportZoom(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSupportZoom",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setTextSize(android::webkit::WebSettings_TextSize arg0)
	{
		__thiz.callMethod<void>(
			"setTextSize",
			"(Landroid/webkit/WebSettings$TextSize;)V",
			arg0.__jniObject().object()
		);
	}
	void WebSettings::setTextZoom(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextZoom",
			"(I)V",
			arg0
		);
	}
	void WebSettings::setUseWideViewPort(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseWideViewPort",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setUserAgentString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setUserAgentString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebSettings::setUserAgentString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setUserAgentString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean WebSettings::supportMultipleWindows()
	{
		return __thiz.callMethod<jboolean>(
			"supportMultipleWindows",
			"()Z"
		);
	}
	jboolean WebSettings::supportZoom()
	{
		return __thiz.callMethod<jboolean>(
			"supportZoom",
			"()Z"
		);
	}
} // namespace android::webkit

