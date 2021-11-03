#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../content/pm/PackageInfo.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/Picture.hpp"
#include "../graphics/Rect.hpp"
#include "../net/Uri.hpp"
#include "../net/http/SslCertificate.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/Looper.hpp"
#include "../os/Message.hpp"
#include "../print/PrintDocumentAdapter.hpp"
#include "../util/SparseArray.hpp"
#include "../view/DragEvent.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewStructure.hpp"
#include "../view/accessibility/AccessibilityNodeProvider.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "./WebBackForwardList.hpp"
#include "./WebChromeClient.hpp"
#include "./WebMessage.hpp"
#include "./WebSettings.hpp"
#include "./WebView_HitTestResult.hpp"
#include "./WebView_VisualStateCallback.hpp"
#include "./WebViewClient.hpp"
#include "./WebViewRenderProcess.hpp"
#include "./WebViewRenderProcessClient.hpp"
#include "../../JString.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WebView.hpp"

namespace android::webkit
{
	// Fields
	jint WebView::RENDERER_PRIORITY_BOUND()
	{
		return getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_BOUND"
		);
	}
	jint WebView::RENDERER_PRIORITY_IMPORTANT()
	{
		return getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_IMPORTANT"
		);
	}
	jint WebView::RENDERER_PRIORITY_WAIVED()
	{
		return getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_WAIVED"
		);
	}
	JString WebView::SCHEME_GEO()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_GEO",
			"Ljava/lang/String;"
		);
	}
	JString WebView::SCHEME_MAILTO()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_MAILTO",
			"Ljava/lang/String;"
		);
	}
	JString WebView::SCHEME_TEL()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_TEL",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	WebView::WebView(QAndroidJniObject obj) : android::widget::AbsoluteLayout(obj) {}
	
	// Constructors
	WebView::WebView(android::content::Context arg0)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	WebView::WebView(android::content::Context arg0, JObject arg1)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	WebView::WebView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	WebView::WebView(android::content::Context arg0, JObject arg1, jint arg2, jboolean arg3)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	WebView::WebView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void WebView::clearClientCertPreferences(JObject arg0)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"clearClientCertPreferences",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void WebView::disableWebView()
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"disableWebView",
			"()V"
		);
	}
	void WebView::enableSlowWholeDocumentDraw()
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"enableSlowWholeDocumentDraw",
			"()V"
		);
	}
	JString WebView::findAddress(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"findAddress",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::content::pm::PackageInfo WebView::getCurrentWebViewPackage()
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"getCurrentWebViewPackage",
			"()Landroid/content/pm/PackageInfo;"
		);
	}
	android::net::Uri WebView::getSafeBrowsingPrivacyPolicyUrl()
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"getSafeBrowsingPrivacyPolicyUrl",
			"()Landroid/net/Uri;"
		);
	}
	java::lang::ClassLoader WebView::getWebViewClassLoader()
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"getWebViewClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	void WebView::setDataDirectorySuffix(JString arg0)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"setDataDirectorySuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WebView::setSafeBrowsingWhitelist(JObject arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"setSafeBrowsingWhitelist",
			"(Ljava/util/List;Landroid/webkit/ValueCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebView::setWebContentsDebuggingEnabled(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"setWebContentsDebuggingEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebView::startSafeBrowsing(android::content::Context arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"startSafeBrowsing",
			"(Landroid/content/Context;Landroid/webkit/ValueCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebView::addJavascriptInterface(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"addJavascriptInterface",
			"(Ljava/lang/Object;Ljava/lang/String;)V",
			arg0.object<jobject>(),
			arg1.object<jstring>()
		);
	}
	void WebView::autofill(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	jboolean WebView::canGoBack() const
	{
		return callMethod<jboolean>(
			"canGoBack",
			"()Z"
		);
	}
	jboolean WebView::canGoBackOrForward(jint arg0) const
	{
		return callMethod<jboolean>(
			"canGoBackOrForward",
			"(I)Z",
			arg0
		);
	}
	jboolean WebView::canGoForward() const
	{
		return callMethod<jboolean>(
			"canGoForward",
			"()Z"
		);
	}
	jboolean WebView::canZoomIn() const
	{
		return callMethod<jboolean>(
			"canZoomIn",
			"()Z"
		);
	}
	jboolean WebView::canZoomOut() const
	{
		return callMethod<jboolean>(
			"canZoomOut",
			"()Z"
		);
	}
	android::graphics::Picture WebView::capturePicture() const
	{
		return callObjectMethod(
			"capturePicture",
			"()Landroid/graphics/Picture;"
		);
	}
	void WebView::clearCache(jboolean arg0) const
	{
		callMethod<void>(
			"clearCache",
			"(Z)V",
			arg0
		);
	}
	void WebView::clearFormData() const
	{
		callMethod<void>(
			"clearFormData",
			"()V"
		);
	}
	void WebView::clearHistory() const
	{
		callMethod<void>(
			"clearHistory",
			"()V"
		);
	}
	void WebView::clearMatches() const
	{
		callMethod<void>(
			"clearMatches",
			"()V"
		);
	}
	void WebView::clearSslPreferences() const
	{
		callMethod<void>(
			"clearSslPreferences",
			"()V"
		);
	}
	void WebView::clearView() const
	{
		callMethod<void>(
			"clearView",
			"()V"
		);
	}
	void WebView::computeScroll() const
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	android::webkit::WebBackForwardList WebView::copyBackForwardList() const
	{
		return callObjectMethod(
			"copyBackForwardList",
			"()Landroid/webkit/WebBackForwardList;"
		);
	}
	android::print::PrintDocumentAdapter WebView::createPrintDocumentAdapter() const
	{
		return callObjectMethod(
			"createPrintDocumentAdapter",
			"()Landroid/print/PrintDocumentAdapter;"
		);
	}
	android::print::PrintDocumentAdapter WebView::createPrintDocumentAdapter(JString arg0) const
	{
		return callObjectMethod(
			"createPrintDocumentAdapter",
			"(Ljava/lang/String;)Landroid/print/PrintDocumentAdapter;",
			arg0.object<jstring>()
		);
	}
	JArray WebView::createWebMessageChannel() const
	{
		return callObjectMethod(
			"createWebMessageChannel",
			"()[Landroid/webkit/WebMessagePort;"
		);
	}
	void WebView::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean WebView::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void WebView::documentHasImages(android::os::Message arg0) const
	{
		callMethod<void>(
			"documentHasImages",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void WebView::evaluateJavascript(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"evaluateJavascript",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint WebView::findAll(JString arg0) const
	{
		return callMethod<jint>(
			"findAll",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	void WebView::findAllAsync(JString arg0) const
	{
		callMethod<void>(
			"findAllAsync",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	android::view::View WebView::findFocus() const
	{
		return callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	void WebView::findNext(jboolean arg0) const
	{
		callMethod<void>(
			"findNext",
			"(Z)V",
			arg0
		);
	}
	void WebView::flingScroll(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"flingScroll",
			"(II)V",
			arg0,
			arg1
		);
	}
	void WebView::freeMemory() const
	{
		callMethod<void>(
			"freeMemory",
			"()V"
		);
	}
	JString WebView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::accessibility::AccessibilityNodeProvider WebView::getAccessibilityNodeProvider() const
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	android::net::http::SslCertificate WebView::getCertificate() const
	{
		return callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
		);
	}
	jint WebView::getContentHeight() const
	{
		return callMethod<jint>(
			"getContentHeight",
			"()I"
		);
	}
	android::graphics::Bitmap WebView::getFavicon() const
	{
		return callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::os::Handler WebView::getHandler() const
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	android::webkit::WebView_HitTestResult WebView::getHitTestResult() const
	{
		return callObjectMethod(
			"getHitTestResult",
			"()Landroid/webkit/WebView$HitTestResult;"
		);
	}
	JArray WebView::getHttpAuthUsernamePassword(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString WebView::getOriginalUrl() const
	{
		return callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		);
	}
	jint WebView::getProgress() const
	{
		return callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	jboolean WebView::getRendererPriorityWaivedWhenNotVisible() const
	{
		return callMethod<jboolean>(
			"getRendererPriorityWaivedWhenNotVisible",
			"()Z"
		);
	}
	jint WebView::getRendererRequestedPriority() const
	{
		return callMethod<jint>(
			"getRendererRequestedPriority",
			"()I"
		);
	}
	jfloat WebView::getScale() const
	{
		return callMethod<jfloat>(
			"getScale",
			"()F"
		);
	}
	android::webkit::WebSettings WebView::getSettings() const
	{
		return callObjectMethod(
			"getSettings",
			"()Landroid/webkit/WebSettings;"
		);
	}
	JObject WebView::getTextClassifier() const
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	JString WebView::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		);
	}
	JString WebView::getUrl() const
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
	android::webkit::WebChromeClient WebView::getWebChromeClient() const
	{
		return callObjectMethod(
			"getWebChromeClient",
			"()Landroid/webkit/WebChromeClient;"
		);
	}
	android::webkit::WebViewClient WebView::getWebViewClient() const
	{
		return callObjectMethod(
			"getWebViewClient",
			"()Landroid/webkit/WebViewClient;"
		);
	}
	android::os::Looper WebView::getWebViewLooper() const
	{
		return callObjectMethod(
			"getWebViewLooper",
			"()Landroid/os/Looper;"
		);
	}
	android::webkit::WebViewRenderProcess WebView::getWebViewRenderProcess() const
	{
		return callObjectMethod(
			"getWebViewRenderProcess",
			"()Landroid/webkit/WebViewRenderProcess;"
		);
	}
	android::webkit::WebViewRenderProcessClient WebView::getWebViewRenderProcessClient() const
	{
		return callObjectMethod(
			"getWebViewRenderProcessClient",
			"()Landroid/webkit/WebViewRenderProcessClient;"
		);
	}
	void WebView::goBack() const
	{
		callMethod<void>(
			"goBack",
			"()V"
		);
	}
	void WebView::goBackOrForward(jint arg0) const
	{
		callMethod<void>(
			"goBackOrForward",
			"(I)V",
			arg0
		);
	}
	void WebView::goForward() const
	{
		callMethod<void>(
			"goForward",
			"()V"
		);
	}
	void WebView::invokeZoomPicker() const
	{
		callMethod<void>(
			"invokeZoomPicker",
			"()V"
		);
	}
	jboolean WebView::isPrivateBrowsingEnabled() const
	{
		return callMethod<jboolean>(
			"isPrivateBrowsingEnabled",
			"()Z"
		);
	}
	jboolean WebView::isVisibleToUserForAutofill(jint arg0) const
	{
		return callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	void WebView::loadData(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"loadData",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void WebView::loadDataWithBaseURL(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const
	{
		callMethod<void>(
			"loadDataWithBaseURL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	void WebView::loadUrl(JString arg0) const
	{
		callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WebView::loadUrl(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean WebView::onCheckIsTextEditor() const
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	void WebView::onChildViewAdded(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"onChildViewAdded",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebView::onChildViewRemoved(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"onChildViewRemoved",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject WebView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	jboolean WebView::onDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void WebView::onFinishTemporaryDetach() const
	{
		callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean WebView::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void WebView::onGlobalFocusChanged(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"onGlobalFocusChanged",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean WebView::onHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean WebView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean WebView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean WebView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void WebView::onPause() const
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void WebView::onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void WebView::onProvideContentCaptureStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideContentCaptureStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void WebView::onProvideVirtualStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"onProvideVirtualStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void WebView::onResume() const
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void WebView::onStartTemporaryDetach() const
	{
		callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	jboolean WebView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean WebView::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void WebView::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean WebView::overlayHorizontalScrollbar() const
	{
		return callMethod<jboolean>(
			"overlayHorizontalScrollbar",
			"()Z"
		);
	}
	jboolean WebView::overlayVerticalScrollbar() const
	{
		return callMethod<jboolean>(
			"overlayVerticalScrollbar",
			"()Z"
		);
	}
	jboolean WebView::pageDown(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"pageDown",
			"(Z)Z",
			arg0
		);
	}
	jboolean WebView::pageUp(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"pageUp",
			"(Z)Z",
			arg0
		);
	}
	void WebView::pauseTimers() const
	{
		callMethod<void>(
			"pauseTimers",
			"()V"
		);
	}
	jboolean WebView::performLongClick() const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	void WebView::postUrl(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"postUrl",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void WebView::postVisualStateCallback(jlong arg0, android::webkit::WebView_VisualStateCallback arg1) const
	{
		callMethod<void>(
			"postVisualStateCallback",
			"(JLandroid/webkit/WebView$VisualStateCallback;)V",
			arg0,
			arg1.object()
		);
	}
	void WebView::postWebMessage(android::webkit::WebMessage arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"postWebMessage",
			"(Landroid/webkit/WebMessage;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebView::reload() const
	{
		callMethod<void>(
			"reload",
			"()V"
		);
	}
	void WebView::removeJavascriptInterface(JString arg0) const
	{
		callMethod<void>(
			"removeJavascriptInterface",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean WebView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean WebView::requestFocus(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	void WebView::requestFocusNodeHref(android::os::Message arg0) const
	{
		callMethod<void>(
			"requestFocusNodeHref",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void WebView::requestImageRef(android::os::Message arg0) const
	{
		callMethod<void>(
			"requestImageRef",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	android::webkit::WebBackForwardList WebView::restoreState(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.object()
		);
	}
	void WebView::resumeTimers() const
	{
		callMethod<void>(
			"resumeTimers",
			"()V"
		);
	}
	void WebView::savePassword(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"savePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	android::webkit::WebBackForwardList WebView::saveState(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"saveState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.object()
		);
	}
	void WebView::saveWebArchive(JString arg0) const
	{
		callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WebView::saveWebArchive(JString arg0, jboolean arg1, JObject arg2) const
	{
		callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;ZLandroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	void WebView::setBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void WebView::setCertificate(android::net::http::SslCertificate arg0) const
	{
		callMethod<void>(
			"setCertificate",
			"(Landroid/net/http/SslCertificate;)V",
			arg0.object()
		);
	}
	void WebView::setDownloadListener(JObject arg0) const
	{
		callMethod<void>(
			"setDownloadListener",
			"(Landroid/webkit/DownloadListener;)V",
			arg0.object()
		);
	}
	void WebView::setFindListener(JObject arg0) const
	{
		callMethod<void>(
			"setFindListener",
			"(Landroid/webkit/WebView$FindListener;)V",
			arg0.object()
		);
	}
	void WebView::setHorizontalScrollbarOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setHorizontalScrollbarOverlay",
			"(Z)V",
			arg0
		);
	}
	void WebView::setHttpAuthUsernamePassword(JString arg0, JString arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	void WebView::setInitialScale(jint arg0) const
	{
		callMethod<void>(
			"setInitialScale",
			"(I)V",
			arg0
		);
	}
	void WebView::setLayerType(jint arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.object()
		);
	}
	void WebView::setLayoutParams(android::view::ViewGroup_LayoutParams arg0) const
	{
		callMethod<void>(
			"setLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		);
	}
	void WebView::setMapTrackballToArrowKeys(jboolean arg0) const
	{
		callMethod<void>(
			"setMapTrackballToArrowKeys",
			"(Z)V",
			arg0
		);
	}
	void WebView::setNetworkAvailable(jboolean arg0) const
	{
		callMethod<void>(
			"setNetworkAvailable",
			"(Z)V",
			arg0
		);
	}
	void WebView::setOverScrollMode(jint arg0) const
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	void WebView::setPictureListener(JObject arg0) const
	{
		callMethod<void>(
			"setPictureListener",
			"(Landroid/webkit/WebView$PictureListener;)V",
			arg0.object()
		);
	}
	void WebView::setRendererPriorityPolicy(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setRendererPriorityPolicy",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void WebView::setScrollBarStyle(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	void WebView::setTextClassifier(JObject arg0) const
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
	void WebView::setVerticalScrollbarOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setVerticalScrollbarOverlay",
			"(Z)V",
			arg0
		);
	}
	void WebView::setWebChromeClient(android::webkit::WebChromeClient arg0) const
	{
		callMethod<void>(
			"setWebChromeClient",
			"(Landroid/webkit/WebChromeClient;)V",
			arg0.object()
		);
	}
	void WebView::setWebViewClient(android::webkit::WebViewClient arg0) const
	{
		callMethod<void>(
			"setWebViewClient",
			"(Landroid/webkit/WebViewClient;)V",
			arg0.object()
		);
	}
	void WebView::setWebViewRenderProcessClient(android::webkit::WebViewRenderProcessClient arg0) const
	{
		callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.object()
		);
	}
	void WebView::setWebViewRenderProcessClient(JObject arg0, android::webkit::WebViewRenderProcessClient arg1) const
	{
		callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Ljava/util/concurrent/Executor;Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean WebView::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	jboolean WebView::showFindDialog(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"showFindDialog",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	void WebView::stopLoading() const
	{
		callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	void WebView::zoomBy(jfloat arg0) const
	{
		callMethod<void>(
			"zoomBy",
			"(F)V",
			arg0
		);
	}
	jboolean WebView::zoomIn() const
	{
		return callMethod<jboolean>(
			"zoomIn",
			"()Z"
		);
	}
	jboolean WebView::zoomOut() const
	{
		return callMethod<jboolean>(
			"zoomOut",
			"()Z"
		);
	}
} // namespace android::webkit

