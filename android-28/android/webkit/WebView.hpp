#pragma once

#include "../widget/AbsoluteLayout.hpp"

class JByteArray;
class JArray;
class JArray;
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class PackageInfo;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Picture;
}
namespace android::graphics
{
	class Rect;
}
namespace android::net
{
	class Uri;
}
namespace android::net::http
{
	class SslCertificate;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Looper;
}
namespace android::os
{
	class Message;
}
namespace android::print
{
	class PrintDocumentAdapter;
}
namespace android::util
{
	class SparseArray;
}
namespace android::view
{
	class DragEvent;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view::accessibility
{
	class AccessibilityNodeProvider;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace android::webkit
{
	class WebBackForwardList;
}
namespace android::webkit
{
	class WebChromeClient;
}
namespace android::webkit
{
	class WebMessage;
}
namespace android::webkit
{
	class WebSettings;
}
namespace android::webkit
{
	class WebView_HitTestResult;
}
namespace android::webkit
{
	class WebView_VisualStateCallback;
}
namespace android::webkit
{
	class WebViewClient;
}
class JString;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;

namespace android::webkit
{
	class WebView : public android::widget::AbsoluteLayout
	{
	public:
		// Fields
		static jint RENDERER_PRIORITY_BOUND();
		static jint RENDERER_PRIORITY_IMPORTANT();
		static jint RENDERER_PRIORITY_WAIVED();
		static JString SCHEME_GEO();
		static JString SCHEME_MAILTO();
		static JString SCHEME_TEL();
		
		// QJniObject forward
		template<typename ...Ts> explicit WebView(const char *className, const char *sig, Ts...agv) : android::widget::AbsoluteLayout(className, sig, std::forward<Ts>(agv)...) {}
		WebView(QJniObject obj);
		
		// Constructors
		WebView(android::content::Context arg0);
		WebView(android::content::Context arg0, JObject arg1);
		WebView(android::content::Context arg0, JObject arg1, jint arg2);
		WebView(android::content::Context arg0, JObject arg1, jint arg2, jboolean arg3);
		WebView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		static void clearClientCertPreferences(JObject arg0);
		static void disableWebView();
		static void enableSlowWholeDocumentDraw();
		static JString findAddress(JString arg0);
		static android::content::pm::PackageInfo getCurrentWebViewPackage();
		static android::net::Uri getSafeBrowsingPrivacyPolicyUrl();
		static java::lang::ClassLoader getWebViewClassLoader();
		static void setDataDirectorySuffix(JString arg0);
		static void setSafeBrowsingWhitelist(JObject arg0, JObject arg1);
		static void setWebContentsDebuggingEnabled(jboolean arg0);
		static void startSafeBrowsing(android::content::Context arg0, JObject arg1);
		void addJavascriptInterface(JObject arg0, JString arg1) const;
		void autofill(android::util::SparseArray arg0) const;
		jboolean canGoBack() const;
		jboolean canGoBackOrForward(jint arg0) const;
		jboolean canGoForward() const;
		jboolean canZoomIn() const;
		jboolean canZoomOut() const;
		android::graphics::Picture capturePicture() const;
		void clearCache(jboolean arg0) const;
		void clearFormData() const;
		void clearHistory() const;
		void clearMatches() const;
		void clearSslPreferences() const;
		void clearView() const;
		void computeScroll() const;
		android::webkit::WebBackForwardList copyBackForwardList() const;
		android::print::PrintDocumentAdapter createPrintDocumentAdapter() const;
		android::print::PrintDocumentAdapter createPrintDocumentAdapter(JString arg0) const;
		JArray createWebMessageChannel() const;
		void destroy() const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		void documentHasImages(android::os::Message arg0) const;
		void evaluateJavascript(JString arg0, JObject arg1) const;
		jint findAll(JString arg0) const;
		void findAllAsync(JString arg0) const;
		android::view::View findFocus() const;
		void findNext(jboolean arg0) const;
		void flingScroll(jint arg0, jint arg1) const;
		void freeMemory() const;
		JString getAccessibilityClassName() const;
		android::view::accessibility::AccessibilityNodeProvider getAccessibilityNodeProvider() const;
		android::net::http::SslCertificate getCertificate() const;
		jint getContentHeight() const;
		android::graphics::Bitmap getFavicon() const;
		android::os::Handler getHandler() const;
		android::webkit::WebView_HitTestResult getHitTestResult() const;
		JArray getHttpAuthUsernamePassword(JString arg0, JString arg1) const;
		JString getOriginalUrl() const;
		jint getProgress() const;
		jboolean getRendererPriorityWaivedWhenNotVisible() const;
		jint getRendererRequestedPriority() const;
		jfloat getScale() const;
		android::webkit::WebSettings getSettings() const;
		JObject getTextClassifier() const;
		JString getTitle() const;
		JString getUrl() const;
		android::webkit::WebChromeClient getWebChromeClient() const;
		android::webkit::WebViewClient getWebViewClient() const;
		android::os::Looper getWebViewLooper() const;
		void goBack() const;
		void goBackOrForward(jint arg0) const;
		void goForward() const;
		void invokeZoomPicker() const;
		jboolean isPrivateBrowsingEnabled() const;
		jboolean isVisibleToUserForAutofill(jint arg0) const;
		void loadData(JString arg0, JString arg1, JString arg2) const;
		void loadDataWithBaseURL(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const;
		void loadUrl(JString arg0) const;
		void loadUrl(JString arg0, JObject arg1) const;
		jboolean onCheckIsTextEditor() const;
		void onChildViewAdded(android::view::View arg0, android::view::View arg1) const;
		void onChildViewRemoved(android::view::View arg0, android::view::View arg1) const;
		JObject onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const;
		jboolean onDragEvent(android::view::DragEvent arg0) const;
		void onFinishTemporaryDetach() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		void onGlobalFocusChanged(android::view::View arg0, android::view::View arg1) const;
		jboolean onHoverEvent(android::view::MotionEvent arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onPause() const;
		void onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1) const;
		void onProvideVirtualStructure(android::view::ViewStructure arg0) const;
		void onResume() const;
		void onStartTemporaryDetach() const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void onWindowFocusChanged(jboolean arg0) const;
		jboolean overlayHorizontalScrollbar() const;
		jboolean overlayVerticalScrollbar() const;
		jboolean pageDown(jboolean arg0) const;
		jboolean pageUp(jboolean arg0) const;
		void pauseTimers() const;
		jboolean performLongClick() const;
		void postUrl(JString arg0, JByteArray arg1) const;
		void postVisualStateCallback(jlong arg0, android::webkit::WebView_VisualStateCallback arg1) const;
		void postWebMessage(android::webkit::WebMessage arg0, android::net::Uri arg1) const;
		void reload() const;
		void removeJavascriptInterface(JString arg0) const;
		jboolean requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const;
		jboolean requestFocus(jint arg0, android::graphics::Rect arg1) const;
		void requestFocusNodeHref(android::os::Message arg0) const;
		void requestImageRef(android::os::Message arg0) const;
		android::webkit::WebBackForwardList restoreState(android::os::Bundle arg0) const;
		void resumeTimers() const;
		void savePassword(JString arg0, JString arg1, JString arg2) const;
		android::webkit::WebBackForwardList saveState(android::os::Bundle arg0) const;
		void saveWebArchive(JString arg0) const;
		void saveWebArchive(JString arg0, jboolean arg1, JObject arg2) const;
		void setBackgroundColor(jint arg0) const;
		void setCertificate(android::net::http::SslCertificate arg0) const;
		void setDownloadListener(JObject arg0) const;
		void setFindListener(JObject arg0) const;
		void setHorizontalScrollbarOverlay(jboolean arg0) const;
		void setHttpAuthUsernamePassword(JString arg0, JString arg1, JString arg2, JString arg3) const;
		void setInitialScale(jint arg0) const;
		void setLayerType(jint arg0, android::graphics::Paint arg1) const;
		void setLayoutParams(android::view::ViewGroup_LayoutParams arg0) const;
		void setMapTrackballToArrowKeys(jboolean arg0) const;
		void setNetworkAvailable(jboolean arg0) const;
		void setOverScrollMode(jint arg0) const;
		void setPictureListener(JObject arg0) const;
		void setRendererPriorityPolicy(jint arg0, jboolean arg1) const;
		void setScrollBarStyle(jint arg0) const;
		void setTextClassifier(JObject arg0) const;
		void setVerticalScrollbarOverlay(jboolean arg0) const;
		void setWebChromeClient(android::webkit::WebChromeClient arg0) const;
		void setWebViewClient(android::webkit::WebViewClient arg0) const;
		jboolean shouldDelayChildPressedState() const;
		jboolean showFindDialog(JString arg0, jboolean arg1) const;
		void stopLoading() const;
		void zoomBy(jfloat arg0) const;
		jboolean zoomIn() const;
		jboolean zoomOut() const;
	};
} // namespace android::webkit

