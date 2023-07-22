#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/pm/PackageInfo.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Paint.def.hpp"
#include "../graphics/Picture.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../net/Uri.def.hpp"
#include "../net/http/SslCertificate.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/Looper.def.hpp"
#include "../os/Message.def.hpp"
#include "../print/PrintDocumentAdapter.def.hpp"
#include "../util/LongSparseArray.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "../view/DragEvent.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewStructure.def.hpp"
#include "../view/WindowInsets.def.hpp"
#include "../view/accessibility/AccessibilityNodeProvider.def.hpp"
#include "../view/inputmethod/EditorInfo.def.hpp"
#include "../view/translation/TranslationCapability.def.hpp"
#include "./WebBackForwardList.def.hpp"
#include "./WebChromeClient.def.hpp"
#include "./WebMessage.def.hpp"
#include "./WebSettings.def.hpp"
#include "./WebView_HitTestResult.def.hpp"
#include "./WebView_VisualStateCallback.def.hpp"
#include "./WebViewClient.def.hpp"
#include "./WebViewRenderProcess.def.hpp"
#include "./WebViewRenderProcessClient.def.hpp"
#include "../../JString.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WebView.def.hpp"

namespace android::webkit
{
	// Fields
	inline jint WebView::RENDERER_PRIORITY_BOUND()
	{
		return getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_BOUND"
		);
	}
	inline jint WebView::RENDERER_PRIORITY_IMPORTANT()
	{
		return getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_IMPORTANT"
		);
	}
	inline jint WebView::RENDERER_PRIORITY_WAIVED()
	{
		return getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_WAIVED"
		);
	}
	inline JString WebView::SCHEME_GEO()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_GEO",
			"Ljava/lang/String;"
		);
	}
	inline JString WebView::SCHEME_MAILTO()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_MAILTO",
			"Ljava/lang/String;"
		);
	}
	inline JString WebView::SCHEME_TEL()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_TEL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline WebView::WebView(android::content::Context arg0)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline WebView::WebView(android::content::Context arg0, JObject arg1)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline WebView::WebView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline WebView::WebView(android::content::Context arg0, JObject arg1, jint arg2, jboolean arg3)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	inline WebView::WebView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void WebView::clearClientCertPreferences(JObject arg0)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"clearClientCertPreferences",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void WebView::disableWebView()
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"disableWebView",
			"()V"
		);
	}
	inline void WebView::enableSlowWholeDocumentDraw()
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"enableSlowWholeDocumentDraw",
			"()V"
		);
	}
	inline JString WebView::findAddress(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"findAddress",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::PackageInfo WebView::getCurrentWebViewPackage()
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"getCurrentWebViewPackage",
			"()Landroid/content/pm/PackageInfo;"
		);
	}
	inline android::net::Uri WebView::getSafeBrowsingPrivacyPolicyUrl()
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"getSafeBrowsingPrivacyPolicyUrl",
			"()Landroid/net/Uri;"
		);
	}
	inline java::lang::ClassLoader WebView::getWebViewClassLoader()
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"getWebViewClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	inline void WebView::setDataDirectorySuffix(JString arg0)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"setDataDirectorySuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebView::setSafeBrowsingWhitelist(JObject arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"setSafeBrowsingWhitelist",
			"(Ljava/util/List;Landroid/webkit/ValueCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebView::setWebContentsDebuggingEnabled(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"setWebContentsDebuggingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WebView::startSafeBrowsing(android::content::Context arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"startSafeBrowsing",
			"(Landroid/content/Context;Landroid/webkit/ValueCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebView::addJavascriptInterface(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"addJavascriptInterface",
			"(Ljava/lang/Object;Ljava/lang/String;)V",
			arg0.object<jobject>(),
			arg1.object<jstring>()
		);
	}
	inline void WebView::autofill(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	inline jboolean WebView::canGoBack() const
	{
		return callMethod<jboolean>(
			"canGoBack",
			"()Z"
		);
	}
	inline jboolean WebView::canGoBackOrForward(jint arg0) const
	{
		return callMethod<jboolean>(
			"canGoBackOrForward",
			"(I)Z",
			arg0
		);
	}
	inline jboolean WebView::canGoForward() const
	{
		return callMethod<jboolean>(
			"canGoForward",
			"()Z"
		);
	}
	inline jboolean WebView::canZoomIn() const
	{
		return callMethod<jboolean>(
			"canZoomIn",
			"()Z"
		);
	}
	inline jboolean WebView::canZoomOut() const
	{
		return callMethod<jboolean>(
			"canZoomOut",
			"()Z"
		);
	}
	inline android::graphics::Picture WebView::capturePicture() const
	{
		return callObjectMethod(
			"capturePicture",
			"()Landroid/graphics/Picture;"
		);
	}
	inline void WebView::clearCache(jboolean arg0) const
	{
		callMethod<void>(
			"clearCache",
			"(Z)V",
			arg0
		);
	}
	inline void WebView::clearFormData() const
	{
		callMethod<void>(
			"clearFormData",
			"()V"
		);
	}
	inline void WebView::clearHistory() const
	{
		callMethod<void>(
			"clearHistory",
			"()V"
		);
	}
	inline void WebView::clearMatches() const
	{
		callMethod<void>(
			"clearMatches",
			"()V"
		);
	}
	inline void WebView::clearSslPreferences() const
	{
		callMethod<void>(
			"clearSslPreferences",
			"()V"
		);
	}
	inline void WebView::clearView() const
	{
		callMethod<void>(
			"clearView",
			"()V"
		);
	}
	inline void WebView::computeScroll() const
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	inline android::webkit::WebBackForwardList WebView::copyBackForwardList() const
	{
		return callObjectMethod(
			"copyBackForwardList",
			"()Landroid/webkit/WebBackForwardList;"
		);
	}
	inline android::print::PrintDocumentAdapter WebView::createPrintDocumentAdapter() const
	{
		return callObjectMethod(
			"createPrintDocumentAdapter",
			"()Landroid/print/PrintDocumentAdapter;"
		);
	}
	inline android::print::PrintDocumentAdapter WebView::createPrintDocumentAdapter(JString arg0) const
	{
		return callObjectMethod(
			"createPrintDocumentAdapter",
			"(Ljava/lang/String;)Landroid/print/PrintDocumentAdapter;",
			arg0.object<jstring>()
		);
	}
	inline JArray WebView::createWebMessageChannel() const
	{
		return callObjectMethod(
			"createWebMessageChannel",
			"()[Landroid/webkit/WebMessagePort;"
		);
	}
	inline void WebView::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline void WebView::dispatchCreateViewTranslationRequest(JObject arg0, JIntArray arg1, android::view::translation::TranslationCapability arg2, JObject arg3) const
	{
		callMethod<void>(
			"dispatchCreateViewTranslationRequest",
			"(Ljava/util/Map;[ILandroid/view/translation/TranslationCapability;Ljava/util/List;)V",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean WebView::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline void WebView::documentHasImages(android::os::Message arg0) const
	{
		callMethod<void>(
			"documentHasImages",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline void WebView::evaluateJavascript(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"evaluateJavascript",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint WebView::findAll(JString arg0) const
	{
		return callMethod<jint>(
			"findAll",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline void WebView::findAllAsync(JString arg0) const
	{
		callMethod<void>(
			"findAllAsync",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline android::view::View WebView::findFocus() const
	{
		return callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	inline void WebView::findNext(jboolean arg0) const
	{
		callMethod<void>(
			"findNext",
			"(Z)V",
			arg0
		);
	}
	inline void WebView::flingScroll(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"flingScroll",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void WebView::freeMemory() const
	{
		callMethod<void>(
			"freeMemory",
			"()V"
		);
	}
	inline JString WebView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeProvider WebView::getAccessibilityNodeProvider() const
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	inline android::net::http::SslCertificate WebView::getCertificate() const
	{
		return callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
		);
	}
	inline jint WebView::getContentHeight() const
	{
		return callMethod<jint>(
			"getContentHeight",
			"()I"
		);
	}
	inline android::graphics::Bitmap WebView::getFavicon() const
	{
		return callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::os::Handler WebView::getHandler() const
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	inline android::webkit::WebView_HitTestResult WebView::getHitTestResult() const
	{
		return callObjectMethod(
			"getHitTestResult",
			"()Landroid/webkit/WebView$HitTestResult;"
		);
	}
	inline JArray WebView::getHttpAuthUsernamePassword(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString WebView::getOriginalUrl() const
	{
		return callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		);
	}
	inline jint WebView::getProgress() const
	{
		return callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	inline jboolean WebView::getRendererPriorityWaivedWhenNotVisible() const
	{
		return callMethod<jboolean>(
			"getRendererPriorityWaivedWhenNotVisible",
			"()Z"
		);
	}
	inline jint WebView::getRendererRequestedPriority() const
	{
		return callMethod<jint>(
			"getRendererRequestedPriority",
			"()I"
		);
	}
	inline jfloat WebView::getScale() const
	{
		return callMethod<jfloat>(
			"getScale",
			"()F"
		);
	}
	inline android::webkit::WebSettings WebView::getSettings() const
	{
		return callObjectMethod(
			"getSettings",
			"()Landroid/webkit/WebSettings;"
		);
	}
	inline JObject WebView::getTextClassifier() const
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	inline JString WebView::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		);
	}
	inline JString WebView::getUrl() const
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
	inline android::webkit::WebChromeClient WebView::getWebChromeClient() const
	{
		return callObjectMethod(
			"getWebChromeClient",
			"()Landroid/webkit/WebChromeClient;"
		);
	}
	inline android::webkit::WebViewClient WebView::getWebViewClient() const
	{
		return callObjectMethod(
			"getWebViewClient",
			"()Landroid/webkit/WebViewClient;"
		);
	}
	inline android::os::Looper WebView::getWebViewLooper() const
	{
		return callObjectMethod(
			"getWebViewLooper",
			"()Landroid/os/Looper;"
		);
	}
	inline android::webkit::WebViewRenderProcess WebView::getWebViewRenderProcess() const
	{
		return callObjectMethod(
			"getWebViewRenderProcess",
			"()Landroid/webkit/WebViewRenderProcess;"
		);
	}
	inline android::webkit::WebViewRenderProcessClient WebView::getWebViewRenderProcessClient() const
	{
		return callObjectMethod(
			"getWebViewRenderProcessClient",
			"()Landroid/webkit/WebViewRenderProcessClient;"
		);
	}
	inline void WebView::goBack() const
	{
		callMethod<void>(
			"goBack",
			"()V"
		);
	}
	inline void WebView::goBackOrForward(jint arg0) const
	{
		callMethod<void>(
			"goBackOrForward",
			"(I)V",
			arg0
		);
	}
	inline void WebView::goForward() const
	{
		callMethod<void>(
			"goForward",
			"()V"
		);
	}
	inline void WebView::invokeZoomPicker() const
	{
		callMethod<void>(
			"invokeZoomPicker",
			"()V"
		);
	}
	inline jboolean WebView::isPrivateBrowsingEnabled() const
	{
		return callMethod<jboolean>(
			"isPrivateBrowsingEnabled",
			"()Z"
		);
	}
	inline jboolean WebView::isVisibleToUserForAutofill(jint arg0) const
	{
		return callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	inline void WebView::loadData(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"loadData",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void WebView::loadDataWithBaseURL(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const
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
	inline void WebView::loadUrl(JString arg0) const
	{
		callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebView::loadUrl(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::view::WindowInsets WebView::onApplyWindowInsets(android::view::WindowInsets arg0) const
	{
		return callObjectMethod(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	inline jboolean WebView::onCheckIsTextEditor() const
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	inline void WebView::onChildViewAdded(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"onChildViewAdded",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebView::onChildViewRemoved(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"onChildViewRemoved",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject WebView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	inline void WebView::onCreateVirtualViewTranslationRequests(JLongArray arg0, JIntArray arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateVirtualViewTranslationRequests",
			"([J[ILjava/util/function/Consumer;)V",
			arg0.object<jlongArray>(),
			arg1.object<jintArray>(),
			arg2.object()
		);
	}
	inline jboolean WebView::onDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	inline void WebView::onFinishTemporaryDetach() const
	{
		callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	inline jboolean WebView::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void WebView::onGlobalFocusChanged(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"onGlobalFocusChanged",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean WebView::onHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean WebView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean WebView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean WebView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void WebView::onPause() const
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	inline void WebView::onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void WebView::onProvideContentCaptureStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideContentCaptureStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void WebView::onProvideVirtualStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"onProvideVirtualStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	inline void WebView::onResume() const
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
	inline void WebView::onStartTemporaryDetach() const
	{
		callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	inline jboolean WebView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean WebView::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void WebView::onVirtualViewTranslationResponses(android::util::LongSparseArray arg0) const
	{
		callMethod<void>(
			"onVirtualViewTranslationResponses",
			"(Landroid/util/LongSparseArray;)V",
			arg0.object()
		);
	}
	inline void WebView::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline jboolean WebView::overlayHorizontalScrollbar() const
	{
		return callMethod<jboolean>(
			"overlayHorizontalScrollbar",
			"()Z"
		);
	}
	inline jboolean WebView::overlayVerticalScrollbar() const
	{
		return callMethod<jboolean>(
			"overlayVerticalScrollbar",
			"()Z"
		);
	}
	inline jboolean WebView::pageDown(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"pageDown",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean WebView::pageUp(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"pageUp",
			"(Z)Z",
			arg0
		);
	}
	inline void WebView::pauseTimers() const
	{
		callMethod<void>(
			"pauseTimers",
			"()V"
		);
	}
	inline jboolean WebView::performLongClick() const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	inline void WebView::postUrl(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"postUrl",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void WebView::postVisualStateCallback(jlong arg0, android::webkit::WebView_VisualStateCallback arg1) const
	{
		callMethod<void>(
			"postVisualStateCallback",
			"(JLandroid/webkit/WebView$VisualStateCallback;)V",
			arg0,
			arg1.object()
		);
	}
	inline void WebView::postWebMessage(android::webkit::WebMessage arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"postWebMessage",
			"(Landroid/webkit/WebMessage;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebView::reload() const
	{
		callMethod<void>(
			"reload",
			"()V"
		);
	}
	inline void WebView::removeJavascriptInterface(JString arg0) const
	{
		callMethod<void>(
			"removeJavascriptInterface",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean WebView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean WebView::requestFocus(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void WebView::requestFocusNodeHref(android::os::Message arg0) const
	{
		callMethod<void>(
			"requestFocusNodeHref",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline void WebView::requestImageRef(android::os::Message arg0) const
	{
		callMethod<void>(
			"requestImageRef",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline android::webkit::WebBackForwardList WebView::restoreState(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.object()
		);
	}
	inline void WebView::resumeTimers() const
	{
		callMethod<void>(
			"resumeTimers",
			"()V"
		);
	}
	inline void WebView::savePassword(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"savePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::webkit::WebBackForwardList WebView::saveState(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"saveState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.object()
		);
	}
	inline void WebView::saveWebArchive(JString arg0) const
	{
		callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebView::saveWebArchive(JString arg0, jboolean arg1, JObject arg2) const
	{
		callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;ZLandroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline void WebView::setBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	inline void WebView::setCertificate(android::net::http::SslCertificate arg0) const
	{
		callMethod<void>(
			"setCertificate",
			"(Landroid/net/http/SslCertificate;)V",
			arg0.object()
		);
	}
	inline void WebView::setDownloadListener(JObject arg0) const
	{
		callMethod<void>(
			"setDownloadListener",
			"(Landroid/webkit/DownloadListener;)V",
			arg0.object()
		);
	}
	inline void WebView::setFindListener(JObject arg0) const
	{
		callMethod<void>(
			"setFindListener",
			"(Landroid/webkit/WebView$FindListener;)V",
			arg0.object()
		);
	}
	inline void WebView::setHorizontalScrollbarOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setHorizontalScrollbarOverlay",
			"(Z)V",
			arg0
		);
	}
	inline void WebView::setHttpAuthUsernamePassword(JString arg0, JString arg1, JString arg2, JString arg3) const
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
	inline void WebView::setInitialScale(jint arg0) const
	{
		callMethod<void>(
			"setInitialScale",
			"(I)V",
			arg0
		);
	}
	inline void WebView::setLayerType(jint arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.object()
		);
	}
	inline void WebView::setLayoutParams(android::view::ViewGroup_LayoutParams arg0) const
	{
		callMethod<void>(
			"setLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		);
	}
	inline void WebView::setMapTrackballToArrowKeys(jboolean arg0) const
	{
		callMethod<void>(
			"setMapTrackballToArrowKeys",
			"(Z)V",
			arg0
		);
	}
	inline void WebView::setNetworkAvailable(jboolean arg0) const
	{
		callMethod<void>(
			"setNetworkAvailable",
			"(Z)V",
			arg0
		);
	}
	inline void WebView::setOverScrollMode(jint arg0) const
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	inline void WebView::setPictureListener(JObject arg0) const
	{
		callMethod<void>(
			"setPictureListener",
			"(Landroid/webkit/WebView$PictureListener;)V",
			arg0.object()
		);
	}
	inline void WebView::setRendererPriorityPolicy(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setRendererPriorityPolicy",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void WebView::setScrollBarStyle(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	inline void WebView::setTextClassifier(JObject arg0) const
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
	inline void WebView::setVerticalScrollbarOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setVerticalScrollbarOverlay",
			"(Z)V",
			arg0
		);
	}
	inline void WebView::setWebChromeClient(android::webkit::WebChromeClient arg0) const
	{
		callMethod<void>(
			"setWebChromeClient",
			"(Landroid/webkit/WebChromeClient;)V",
			arg0.object()
		);
	}
	inline void WebView::setWebViewClient(android::webkit::WebViewClient arg0) const
	{
		callMethod<void>(
			"setWebViewClient",
			"(Landroid/webkit/WebViewClient;)V",
			arg0.object()
		);
	}
	inline void WebView::setWebViewRenderProcessClient(android::webkit::WebViewRenderProcessClient arg0) const
	{
		callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.object()
		);
	}
	inline void WebView::setWebViewRenderProcessClient(JObject arg0, android::webkit::WebViewRenderProcessClient arg1) const
	{
		callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Ljava/util/concurrent/Executor;Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean WebView::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	inline jboolean WebView::showFindDialog(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"showFindDialog",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void WebView::stopLoading() const
	{
		callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	inline void WebView::zoomBy(jfloat arg0) const
	{
		callMethod<void>(
			"zoomBy",
			"(F)V",
			arg0
		);
	}
	inline jboolean WebView::zoomIn() const
	{
		return callMethod<jboolean>(
			"zoomIn",
			"()Z"
		);
	}
	inline jboolean WebView::zoomOut() const
	{
		return callMethod<jboolean>(
			"zoomOut",
			"()Z"
		);
	}
} // namespace android::webkit

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/AbsoluteLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
