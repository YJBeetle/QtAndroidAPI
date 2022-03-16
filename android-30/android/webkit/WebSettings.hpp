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
class JString;

namespace android::webkit
{
	class WebSettings : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebSettings();
		
		// Methods
		static JString getDefaultUserAgent(android::content::Context arg0);
		jboolean enableSmoothTransition() const;
		jboolean getAllowContentAccess() const;
		jboolean getAllowFileAccess() const;
		jboolean getAllowFileAccessFromFileURLs() const;
		jboolean getAllowUniversalAccessFromFileURLs() const;
		jboolean getBlockNetworkImage() const;
		jboolean getBlockNetworkLoads() const;
		jboolean getBuiltInZoomControls() const;
		jint getCacheMode() const;
		JString getCursiveFontFamily() const;
		jboolean getDatabaseEnabled() const;
		JString getDatabasePath() const;
		jint getDefaultFixedFontSize() const;
		jint getDefaultFontSize() const;
		JString getDefaultTextEncodingName() const;
		android::webkit::WebSettings_ZoomDensity getDefaultZoom() const;
		jint getDisabledActionModeMenuItems() const;
		jboolean getDisplayZoomControls() const;
		jboolean getDomStorageEnabled() const;
		JString getFantasyFontFamily() const;
		JString getFixedFontFamily() const;
		jint getForceDark() const;
		jboolean getJavaScriptCanOpenWindowsAutomatically() const;
		jboolean getJavaScriptEnabled() const;
		android::webkit::WebSettings_LayoutAlgorithm getLayoutAlgorithm() const;
		jboolean getLightTouchEnabled() const;
		jboolean getLoadWithOverviewMode() const;
		jboolean getLoadsImagesAutomatically() const;
		jboolean getMediaPlaybackRequiresUserGesture() const;
		jint getMinimumFontSize() const;
		jint getMinimumLogicalFontSize() const;
		jint getMixedContentMode() const;
		jboolean getOffscreenPreRaster() const;
		android::webkit::WebSettings_PluginState getPluginState() const;
		jboolean getSafeBrowsingEnabled() const;
		JString getSansSerifFontFamily() const;
		jboolean getSaveFormData() const;
		jboolean getSavePassword() const;
		JString getSerifFontFamily() const;
		JString getStandardFontFamily() const;
		android::webkit::WebSettings_TextSize getTextSize() const;
		jint getTextZoom() const;
		jboolean getUseWideViewPort() const;
		JString getUserAgentString() const;
		void setAllowContentAccess(jboolean arg0) const;
		void setAllowFileAccess(jboolean arg0) const;
		void setAllowFileAccessFromFileURLs(jboolean arg0) const;
		void setAllowUniversalAccessFromFileURLs(jboolean arg0) const;
		void setAppCacheEnabled(jboolean arg0) const;
		void setAppCacheMaxSize(jlong arg0) const;
		void setAppCachePath(JString arg0) const;
		void setBlockNetworkImage(jboolean arg0) const;
		void setBlockNetworkLoads(jboolean arg0) const;
		void setBuiltInZoomControls(jboolean arg0) const;
		void setCacheMode(jint arg0) const;
		void setCursiveFontFamily(JString arg0) const;
		void setDatabaseEnabled(jboolean arg0) const;
		void setDatabasePath(JString arg0) const;
		void setDefaultFixedFontSize(jint arg0) const;
		void setDefaultFontSize(jint arg0) const;
		void setDefaultTextEncodingName(JString arg0) const;
		void setDefaultZoom(android::webkit::WebSettings_ZoomDensity arg0) const;
		void setDisabledActionModeMenuItems(jint arg0) const;
		void setDisplayZoomControls(jboolean arg0) const;
		void setDomStorageEnabled(jboolean arg0) const;
		void setEnableSmoothTransition(jboolean arg0) const;
		void setFantasyFontFamily(JString arg0) const;
		void setFixedFontFamily(JString arg0) const;
		void setForceDark(jint arg0) const;
		void setGeolocationDatabasePath(JString arg0) const;
		void setGeolocationEnabled(jboolean arg0) const;
		void setJavaScriptCanOpenWindowsAutomatically(jboolean arg0) const;
		void setJavaScriptEnabled(jboolean arg0) const;
		void setLayoutAlgorithm(android::webkit::WebSettings_LayoutAlgorithm arg0) const;
		void setLightTouchEnabled(jboolean arg0) const;
		void setLoadWithOverviewMode(jboolean arg0) const;
		void setLoadsImagesAutomatically(jboolean arg0) const;
		void setMediaPlaybackRequiresUserGesture(jboolean arg0) const;
		void setMinimumFontSize(jint arg0) const;
		void setMinimumLogicalFontSize(jint arg0) const;
		void setMixedContentMode(jint arg0) const;
		void setNeedInitialFocus(jboolean arg0) const;
		void setOffscreenPreRaster(jboolean arg0) const;
		void setPluginState(android::webkit::WebSettings_PluginState arg0) const;
		void setRenderPriority(android::webkit::WebSettings_RenderPriority arg0) const;
		void setSafeBrowsingEnabled(jboolean arg0) const;
		void setSansSerifFontFamily(JString arg0) const;
		void setSaveFormData(jboolean arg0) const;
		void setSavePassword(jboolean arg0) const;
		void setSerifFontFamily(JString arg0) const;
		void setStandardFontFamily(JString arg0) const;
		void setSupportMultipleWindows(jboolean arg0) const;
		void setSupportZoom(jboolean arg0) const;
		void setTextSize(android::webkit::WebSettings_TextSize arg0) const;
		void setTextZoom(jint arg0) const;
		void setUseWideViewPort(jboolean arg0) const;
		void setUserAgentString(JString arg0) const;
		jboolean supportMultipleWindows() const;
		jboolean supportZoom() const;
	};
} // namespace android::webkit

