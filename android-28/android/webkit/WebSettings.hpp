#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::webkit
{
	class WebSettings_LayoutAlgorithm;
}
namespace android::webkit
{
	class WebSettings_PluginState;
}
namespace android::webkit
{
	class WebSettings_RenderPriority;
}
namespace android::webkit
{
	class WebSettings_TextSize;
}
namespace android::webkit
{
	class WebSettings_ZoomDensity;
}

namespace android::webkit
{
	class WebSettings : public JObject
	{
	public:
		// Fields
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
		
		// QJniObject forward
		template<typename ...Ts> explicit WebSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings(QJniObject obj);
		
		// Constructors
		WebSettings();
		
		// Methods
		static jstring getDefaultUserAgent(android::content::Context arg0);
		jboolean enableSmoothTransition();
		jboolean getAllowContentAccess();
		jboolean getAllowFileAccess();
		jboolean getAllowFileAccessFromFileURLs();
		jboolean getAllowUniversalAccessFromFileURLs();
		jboolean getBlockNetworkImage();
		jboolean getBlockNetworkLoads();
		jboolean getBuiltInZoomControls();
		jint getCacheMode();
		jstring getCursiveFontFamily();
		jboolean getDatabaseEnabled();
		jstring getDatabasePath();
		jint getDefaultFixedFontSize();
		jint getDefaultFontSize();
		jstring getDefaultTextEncodingName();
		android::webkit::WebSettings_ZoomDensity getDefaultZoom();
		jint getDisabledActionModeMenuItems();
		jboolean getDisplayZoomControls();
		jboolean getDomStorageEnabled();
		jstring getFantasyFontFamily();
		jstring getFixedFontFamily();
		jboolean getJavaScriptCanOpenWindowsAutomatically();
		jboolean getJavaScriptEnabled();
		android::webkit::WebSettings_LayoutAlgorithm getLayoutAlgorithm();
		jboolean getLightTouchEnabled();
		jboolean getLoadWithOverviewMode();
		jboolean getLoadsImagesAutomatically();
		jboolean getMediaPlaybackRequiresUserGesture();
		jint getMinimumFontSize();
		jint getMinimumLogicalFontSize();
		jint getMixedContentMode();
		jboolean getOffscreenPreRaster();
		android::webkit::WebSettings_PluginState getPluginState();
		jboolean getSafeBrowsingEnabled();
		jstring getSansSerifFontFamily();
		jboolean getSaveFormData();
		jboolean getSavePassword();
		jstring getSerifFontFamily();
		jstring getStandardFontFamily();
		android::webkit::WebSettings_TextSize getTextSize();
		jint getTextZoom();
		jboolean getUseWideViewPort();
		jstring getUserAgentString();
		void setAllowContentAccess(jboolean arg0);
		void setAllowFileAccess(jboolean arg0);
		void setAllowFileAccessFromFileURLs(jboolean arg0);
		void setAllowUniversalAccessFromFileURLs(jboolean arg0);
		void setAppCacheEnabled(jboolean arg0);
		void setAppCacheMaxSize(jlong arg0);
		void setAppCachePath(jstring arg0);
		void setBlockNetworkImage(jboolean arg0);
		void setBlockNetworkLoads(jboolean arg0);
		void setBuiltInZoomControls(jboolean arg0);
		void setCacheMode(jint arg0);
		void setCursiveFontFamily(jstring arg0);
		void setDatabaseEnabled(jboolean arg0);
		void setDatabasePath(jstring arg0);
		void setDefaultFixedFontSize(jint arg0);
		void setDefaultFontSize(jint arg0);
		void setDefaultTextEncodingName(jstring arg0);
		void setDefaultZoom(android::webkit::WebSettings_ZoomDensity arg0);
		void setDisabledActionModeMenuItems(jint arg0);
		void setDisplayZoomControls(jboolean arg0);
		void setDomStorageEnabled(jboolean arg0);
		void setEnableSmoothTransition(jboolean arg0);
		void setFantasyFontFamily(jstring arg0);
		void setFixedFontFamily(jstring arg0);
		void setGeolocationDatabasePath(jstring arg0);
		void setGeolocationEnabled(jboolean arg0);
		void setJavaScriptCanOpenWindowsAutomatically(jboolean arg0);
		void setJavaScriptEnabled(jboolean arg0);
		void setLayoutAlgorithm(android::webkit::WebSettings_LayoutAlgorithm arg0);
		void setLightTouchEnabled(jboolean arg0);
		void setLoadWithOverviewMode(jboolean arg0);
		void setLoadsImagesAutomatically(jboolean arg0);
		void setMediaPlaybackRequiresUserGesture(jboolean arg0);
		void setMinimumFontSize(jint arg0);
		void setMinimumLogicalFontSize(jint arg0);
		void setMixedContentMode(jint arg0);
		void setNeedInitialFocus(jboolean arg0);
		void setOffscreenPreRaster(jboolean arg0);
		void setPluginState(android::webkit::WebSettings_PluginState arg0);
		void setRenderPriority(android::webkit::WebSettings_RenderPriority arg0);
		void setSafeBrowsingEnabled(jboolean arg0);
		void setSansSerifFontFamily(jstring arg0);
		void setSaveFormData(jboolean arg0);
		void setSavePassword(jboolean arg0);
		void setSerifFontFamily(jstring arg0);
		void setStandardFontFamily(jstring arg0);
		void setSupportMultipleWindows(jboolean arg0);
		void setSupportZoom(jboolean arg0);
		void setTextSize(android::webkit::WebSettings_TextSize arg0);
		void setTextZoom(jint arg0);
		void setUseWideViewPort(jboolean arg0);
		void setUserAgentString(jstring arg0);
		jboolean supportMultipleWindows();
		jboolean supportZoom();
	};
} // namespace android::webkit

