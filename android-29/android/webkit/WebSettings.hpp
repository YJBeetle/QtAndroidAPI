#pragma once

#ifndef ANDROID_WEBKIT_WEBSETTINGS
#define ANDROID_WEBKIT_WEBSETTINGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebSettings_TextSize;
}
namespace __jni_impl::android::webkit
{
	class WebSettings_ZoomDensity;
}
namespace __jni_impl::android::webkit
{
	class WebSettings_LayoutAlgorithm;
}
namespace __jni_impl::android::webkit
{
	class WebSettings_PluginState;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::webkit
{
	class WebSettings_RenderPriority;
}

namespace __jni_impl::android::webkit
{
	class WebSettings : public __JniBaseClass
	{
	public:
		// Fields
		static jint FORCE_DARK_AUTO();
		static jint FORCE_DARK_OFF();
		static jint FORCE_DARK_ON();
		static jint LOAD_CACHE_ELSE_NETWORK();
		static jint LOAD_CACHE_ONLY();
		static jint LOAD_DEFAULT();
		static jint LOAD_NORMAL();
		static jint LOAD_NO_CACHE();
		static jint MENU_ITEM_NONE();
		static jint MENU_ITEM_PROCESS_TEXT();
		static jint MENU_ITEM_SHARE();
		static jint MENU_ITEM_WEB_SEARCH();
		static jint MIXED_CONTENT_ALWAYS_ALLOW();
		static jint MIXED_CONTENT_COMPATIBILITY_MODE();
		static jint MIXED_CONTENT_NEVER_ALLOW();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getTextSize();
		void setTextSize(__jni_impl::android::webkit::WebSettings_TextSize arg0);
		void setCacheMode(jint arg0);
		void setBlockNetworkLoads(jboolean arg0);
		jboolean getBlockNetworkLoads();
		jint getCacheMode();
		void setAllowContentAccess(jboolean arg0);
		jboolean getAllowContentAccess();
		void setAllowFileAccess(jboolean arg0);
		jboolean getAllowFileAccess();
		jstring getDatabasePath();
		void setSupportZoom(jboolean arg0);
		jboolean supportZoom();
		void setMediaPlaybackRequiresUserGesture(jboolean arg0);
		jboolean getMediaPlaybackRequiresUserGesture();
		void setBuiltInZoomControls(jboolean arg0);
		jboolean getBuiltInZoomControls();
		void setDisplayZoomControls(jboolean arg0);
		jboolean getDisplayZoomControls();
		void setLoadWithOverviewMode(jboolean arg0);
		jboolean getLoadWithOverviewMode();
		void setEnableSmoothTransition(jboolean arg0);
		jboolean enableSmoothTransition();
		void setSaveFormData(jboolean arg0);
		jboolean getSaveFormData();
		void setSavePassword(jboolean arg0);
		jboolean getSavePassword();
		void setTextZoom(jint arg0);
		jint getTextZoom();
		void setDefaultZoom(__jni_impl::android::webkit::WebSettings_ZoomDensity arg0);
		QAndroidJniObject getDefaultZoom();
		void setLightTouchEnabled(jboolean arg0);
		jboolean getLightTouchEnabled();
		void setUseWideViewPort(jboolean arg0);
		jboolean getUseWideViewPort();
		void setSupportMultipleWindows(jboolean arg0);
		jboolean supportMultipleWindows();
		void setLayoutAlgorithm(__jni_impl::android::webkit::WebSettings_LayoutAlgorithm arg0);
		QAndroidJniObject getLayoutAlgorithm();
		void setStandardFontFamily(jstring arg0);
		void setStandardFontFamily(const QString &arg0);
		jstring getStandardFontFamily();
		void setFixedFontFamily(jstring arg0);
		void setFixedFontFamily(const QString &arg0);
		jstring getFixedFontFamily();
		void setSansSerifFontFamily(jstring arg0);
		void setSansSerifFontFamily(const QString &arg0);
		jstring getSansSerifFontFamily();
		void setSerifFontFamily(jstring arg0);
		void setSerifFontFamily(const QString &arg0);
		jstring getSerifFontFamily();
		void setCursiveFontFamily(jstring arg0);
		void setCursiveFontFamily(const QString &arg0);
		jstring getCursiveFontFamily();
		void setFantasyFontFamily(jstring arg0);
		void setFantasyFontFamily(const QString &arg0);
		jstring getFantasyFontFamily();
		void setMinimumFontSize(jint arg0);
		jint getMinimumFontSize();
		void setMinimumLogicalFontSize(jint arg0);
		jint getMinimumLogicalFontSize();
		void setDefaultFontSize(jint arg0);
		jint getDefaultFontSize();
		void setDefaultFixedFontSize(jint arg0);
		jint getDefaultFixedFontSize();
		void setLoadsImagesAutomatically(jboolean arg0);
		jboolean getLoadsImagesAutomatically();
		void setBlockNetworkImage(jboolean arg0);
		jboolean getBlockNetworkImage();
		void setJavaScriptEnabled(jboolean arg0);
		void setAllowUniversalAccessFromFileURLs(jboolean arg0);
		void setAllowFileAccessFromFileURLs(jboolean arg0);
		void setPluginState(__jni_impl::android::webkit::WebSettings_PluginState arg0);
		void setDatabasePath(jstring arg0);
		void setDatabasePath(const QString &arg0);
		void setGeolocationDatabasePath(jstring arg0);
		void setGeolocationDatabasePath(const QString &arg0);
		void setAppCacheEnabled(jboolean arg0);
		void setAppCachePath(jstring arg0);
		void setAppCachePath(const QString &arg0);
		void setAppCacheMaxSize(jlong arg0);
		void setDatabaseEnabled(jboolean arg0);
		void setDomStorageEnabled(jboolean arg0);
		jboolean getDomStorageEnabled();
		jboolean getDatabaseEnabled();
		void setGeolocationEnabled(jboolean arg0);
		jboolean getJavaScriptEnabled();
		jboolean getAllowUniversalAccessFromFileURLs();
		jboolean getAllowFileAccessFromFileURLs();
		QAndroidJniObject getPluginState();
		void setJavaScriptCanOpenWindowsAutomatically(jboolean arg0);
		jboolean getJavaScriptCanOpenWindowsAutomatically();
		void setDefaultTextEncodingName(jstring arg0);
		void setDefaultTextEncodingName(const QString &arg0);
		jstring getDefaultTextEncodingName();
		void setUserAgentString(jstring arg0);
		void setUserAgentString(const QString &arg0);
		jstring getUserAgentString();
		static jstring getDefaultUserAgent(__jni_impl::android::content::Context arg0);
		void setNeedInitialFocus(jboolean arg0);
		void setRenderPriority(__jni_impl::android::webkit::WebSettings_RenderPriority arg0);
		void setMixedContentMode(jint arg0);
		jint getMixedContentMode();
		void setOffscreenPreRaster(jboolean arg0);
		jboolean getOffscreenPreRaster();
		void setSafeBrowsingEnabled(jboolean arg0);
		jboolean getSafeBrowsingEnabled();
		void setForceDark(jint arg0);
		jint getForceDark();
		void setDisabledActionModeMenuItems(jint arg0);
		jint getDisabledActionModeMenuItems();
	};
} // namespace __jni_impl::android::webkit

#include "WebSettings_TextSize.hpp"
#include "WebSettings_ZoomDensity.hpp"
#include "WebSettings_LayoutAlgorithm.hpp"
#include "WebSettings_PluginState.hpp"
#include "../content/Context.hpp"
#include "WebSettings_RenderPriority.hpp"

namespace __jni_impl::android::webkit
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
	
	// Constructors
	void WebSettings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebSettings",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WebSettings::getTextSize()
	{
		return __thiz.callObjectMethod(
			"getTextSize",
			"()Landroid/webkit/WebSettings$TextSize;"
		);
	}
	void WebSettings::setTextSize(__jni_impl::android::webkit::WebSettings_TextSize arg0)
	{
		__thiz.callMethod<void>(
			"setTextSize",
			"(Landroid/webkit/WebSettings$TextSize;)V",
			arg0.__jniObject().object()
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
	void WebSettings::setBlockNetworkLoads(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	jboolean WebSettings::getBlockNetworkLoads()
	{
		return __thiz.callMethod<jboolean>(
			"getBlockNetworkLoads",
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
	void WebSettings::setAllowContentAccess(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	jboolean WebSettings::getAllowContentAccess()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
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
	jboolean WebSettings::getAllowFileAccess()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowFileAccess",
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
	void WebSettings::setSupportZoom(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSupportZoom",
			"(Z)V",
			arg0
		);
	}
	jboolean WebSettings::supportZoom()
	{
		return __thiz.callMethod<jboolean>(
			"supportZoom",
			"()Z"
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
	jboolean WebSettings::getMediaPlaybackRequiresUserGesture()
	{
		return __thiz.callMethod<jboolean>(
			"getMediaPlaybackRequiresUserGesture",
			"()Z"
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
	jboolean WebSettings::getBuiltInZoomControls()
	{
		return __thiz.callMethod<jboolean>(
			"getBuiltInZoomControls",
			"()Z"
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
	jboolean WebSettings::getDisplayZoomControls()
	{
		return __thiz.callMethod<jboolean>(
			"getDisplayZoomControls",
			"()Z"
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
	jboolean WebSettings::getLoadWithOverviewMode()
	{
		return __thiz.callMethod<jboolean>(
			"getLoadWithOverviewMode",
			"()Z"
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
	jboolean WebSettings::enableSmoothTransition()
	{
		return __thiz.callMethod<jboolean>(
			"enableSmoothTransition",
			"()Z"
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
	jboolean WebSettings::getSaveFormData()
	{
		return __thiz.callMethod<jboolean>(
			"getSaveFormData",
			"()Z"
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
	jboolean WebSettings::getSavePassword()
	{
		return __thiz.callMethod<jboolean>(
			"getSavePassword",
			"()Z"
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
	jint WebSettings::getTextZoom()
	{
		return __thiz.callMethod<jint>(
			"getTextZoom",
			"()I"
		);
	}
	void WebSettings::setDefaultZoom(__jni_impl::android::webkit::WebSettings_ZoomDensity arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultZoom",
			"(Landroid/webkit/WebSettings$ZoomDensity;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WebSettings::getDefaultZoom()
	{
		return __thiz.callObjectMethod(
			"getDefaultZoom",
			"()Landroid/webkit/WebSettings$ZoomDensity;"
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
	jboolean WebSettings::getLightTouchEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getLightTouchEnabled",
			"()Z"
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
	jboolean WebSettings::getUseWideViewPort()
	{
		return __thiz.callMethod<jboolean>(
			"getUseWideViewPort",
			"()Z"
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
	jboolean WebSettings::supportMultipleWindows()
	{
		return __thiz.callMethod<jboolean>(
			"supportMultipleWindows",
			"()Z"
		);
	}
	void WebSettings::setLayoutAlgorithm(__jni_impl::android::webkit::WebSettings_LayoutAlgorithm arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutAlgorithm",
			"(Landroid/webkit/WebSettings$LayoutAlgorithm;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WebSettings::getLayoutAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getLayoutAlgorithm",
			"()Landroid/webkit/WebSettings$LayoutAlgorithm;"
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
	jstring WebSettings::getStandardFontFamily()
	{
		return __thiz.callObjectMethod(
			"getStandardFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring WebSettings::getFixedFontFamily()
	{
		return __thiz.callObjectMethod(
			"getFixedFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring WebSettings::getSansSerifFontFamily()
	{
		return __thiz.callObjectMethod(
			"getSansSerifFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring WebSettings::getSerifFontFamily()
	{
		return __thiz.callObjectMethod(
			"getSerifFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring WebSettings::getCursiveFontFamily()
	{
		return __thiz.callObjectMethod(
			"getCursiveFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring WebSettings::getFantasyFontFamily()
	{
		return __thiz.callObjectMethod(
			"getFantasyFontFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WebSettings::setMinimumFontSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumFontSize",
			"(I)V",
			arg0
		);
	}
	jint WebSettings::getMinimumFontSize()
	{
		return __thiz.callMethod<jint>(
			"getMinimumFontSize",
			"()I"
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
	jint WebSettings::getMinimumLogicalFontSize()
	{
		return __thiz.callMethod<jint>(
			"getMinimumLogicalFontSize",
			"()I"
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
	jint WebSettings::getDefaultFontSize()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFontSize",
			"()I"
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
	jint WebSettings::getDefaultFixedFontSize()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFixedFontSize",
			"()I"
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
	jboolean WebSettings::getLoadsImagesAutomatically()
	{
		return __thiz.callMethod<jboolean>(
			"getLoadsImagesAutomatically",
			"()Z"
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
	jboolean WebSettings::getBlockNetworkImage()
	{
		return __thiz.callMethod<jboolean>(
			"getBlockNetworkImage",
			"()Z"
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
	void WebSettings::setAllowUniversalAccessFromFileURLs(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowUniversalAccessFromFileURLs",
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
	void WebSettings::setPluginState(__jni_impl::android::webkit::WebSettings_PluginState arg0)
	{
		__thiz.callMethod<void>(
			"setPluginState",
			"(Landroid/webkit/WebSettings$PluginState;)V",
			arg0.__jniObject().object()
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
	void WebSettings::setAppCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAppCacheEnabled",
			"(Z)V",
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
	void WebSettings::setAppCacheMaxSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setAppCacheMaxSize",
			"(J)V",
			arg0
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
	void WebSettings::setDomStorageEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDomStorageEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean WebSettings::getDomStorageEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getDomStorageEnabled",
			"()Z"
		);
	}
	jboolean WebSettings::getDatabaseEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getDatabaseEnabled",
			"()Z"
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
	jboolean WebSettings::getJavaScriptEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getJavaScriptEnabled",
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
	jboolean WebSettings::getAllowFileAccessFromFileURLs()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowFileAccessFromFileURLs",
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
	void WebSettings::setJavaScriptCanOpenWindowsAutomatically(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setJavaScriptCanOpenWindowsAutomatically",
			"(Z)V",
			arg0
		);
	}
	jboolean WebSettings::getJavaScriptCanOpenWindowsAutomatically()
	{
		return __thiz.callMethod<jboolean>(
			"getJavaScriptCanOpenWindowsAutomatically",
			"()Z"
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
	jstring WebSettings::getDefaultTextEncodingName()
	{
		return __thiz.callObjectMethod(
			"getDefaultTextEncodingName",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring WebSettings::getUserAgentString()
	{
		return __thiz.callObjectMethod(
			"getUserAgentString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebSettings::getDefaultUserAgent(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings",
			"getDefaultUserAgent",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void WebSettings::setNeedInitialFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedInitialFocus",
			"(Z)V",
			arg0
		);
	}
	void WebSettings::setRenderPriority(__jni_impl::android::webkit::WebSettings_RenderPriority arg0)
	{
		__thiz.callMethod<void>(
			"setRenderPriority",
			"(Landroid/webkit/WebSettings$RenderPriority;)V",
			arg0.__jniObject().object()
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
	jint WebSettings::getMixedContentMode()
	{
		return __thiz.callMethod<jint>(
			"getMixedContentMode",
			"()I"
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
	jboolean WebSettings::getOffscreenPreRaster()
	{
		return __thiz.callMethod<jboolean>(
			"getOffscreenPreRaster",
			"()Z"
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
	jboolean WebSettings::getSafeBrowsingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getSafeBrowsingEnabled",
			"()Z"
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
	jint WebSettings::getForceDark()
	{
		return __thiz.callMethod<jint>(
			"getForceDark",
			"()I"
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
	jint WebSettings::getDisabledActionModeMenuItems()
	{
		return __thiz.callMethod<jint>(
			"getDisabledActionModeMenuItems",
			"()I"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebSettings : public __jni_impl::android::webkit::WebSettings
	{
	public:
		WebSettings(QAndroidJniObject obj) { __thiz = obj; }
		WebSettings()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBSETTINGS

