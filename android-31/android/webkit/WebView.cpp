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
#include "../util/LongSparseArray.hpp"
#include "../util/SparseArray.hpp"
#include "../view/DragEvent.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewStructure.hpp"
#include "../view/WindowInsets.hpp"
#include "../view/accessibility/AccessibilityNodeProvider.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/translation/TranslationCapability.hpp"
#include "./WebBackForwardList.hpp"
#include "./WebChromeClient.hpp"
#include "./WebMessage.hpp"
#include "./WebSettings.hpp"
#include "./WebView_HitTestResult.hpp"
#include "./WebView_VisualStateCallback.hpp"
#include "./WebViewClient.hpp"
#include "./WebViewRenderProcess.hpp"
#include "./WebViewRenderProcessClient.hpp"
#include "../../java/lang/ClassLoader.hpp"
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
	jstring WebView::SCHEME_GEO()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_GEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebView::SCHEME_MAILTO()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_MAILTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebView::SCHEME_TEL()
	{
		return getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_TEL",
			"Ljava/lang/String;"
		).object<jstring>();
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
	WebView::WebView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	WebView::WebView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	WebView::WebView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jboolean arg3)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	WebView::WebView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::AbsoluteLayout(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void WebView::clearClientCertPreferences(__JniBaseClass arg0)
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
	jstring WebView::findAddress(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebView",
			"findAddress",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
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
	void WebView::setDataDirectorySuffix(jstring arg0)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"setDataDirectorySuffix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebView::setSafeBrowsingWhitelist(__JniBaseClass arg0, __JniBaseClass arg1)
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
	void WebView::startSafeBrowsing(android::content::Context arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"android.webkit.WebView",
			"startSafeBrowsing",
			"(Landroid/content/Context;Landroid/webkit/ValueCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebView::addJavascriptInterface(jobject arg0, jstring arg1)
	{
		callMethod<void>(
			"addJavascriptInterface",
			"(Ljava/lang/Object;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void WebView::autofill(android::util::SparseArray arg0)
	{
		callMethod<void>(
			"autofill",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	jboolean WebView::canGoBack()
	{
		return callMethod<jboolean>(
			"canGoBack",
			"()Z"
		);
	}
	jboolean WebView::canGoBackOrForward(jint arg0)
	{
		return callMethod<jboolean>(
			"canGoBackOrForward",
			"(I)Z",
			arg0
		);
	}
	jboolean WebView::canGoForward()
	{
		return callMethod<jboolean>(
			"canGoForward",
			"()Z"
		);
	}
	jboolean WebView::canZoomIn()
	{
		return callMethod<jboolean>(
			"canZoomIn",
			"()Z"
		);
	}
	jboolean WebView::canZoomOut()
	{
		return callMethod<jboolean>(
			"canZoomOut",
			"()Z"
		);
	}
	android::graphics::Picture WebView::capturePicture()
	{
		return callObjectMethod(
			"capturePicture",
			"()Landroid/graphics/Picture;"
		);
	}
	void WebView::clearCache(jboolean arg0)
	{
		callMethod<void>(
			"clearCache",
			"(Z)V",
			arg0
		);
	}
	void WebView::clearFormData()
	{
		callMethod<void>(
			"clearFormData",
			"()V"
		);
	}
	void WebView::clearHistory()
	{
		callMethod<void>(
			"clearHistory",
			"()V"
		);
	}
	void WebView::clearMatches()
	{
		callMethod<void>(
			"clearMatches",
			"()V"
		);
	}
	void WebView::clearSslPreferences()
	{
		callMethod<void>(
			"clearSslPreferences",
			"()V"
		);
	}
	void WebView::clearView()
	{
		callMethod<void>(
			"clearView",
			"()V"
		);
	}
	void WebView::computeScroll()
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	android::webkit::WebBackForwardList WebView::copyBackForwardList()
	{
		return callObjectMethod(
			"copyBackForwardList",
			"()Landroid/webkit/WebBackForwardList;"
		);
	}
	android::print::PrintDocumentAdapter WebView::createPrintDocumentAdapter()
	{
		return callObjectMethod(
			"createPrintDocumentAdapter",
			"()Landroid/print/PrintDocumentAdapter;"
		);
	}
	android::print::PrintDocumentAdapter WebView::createPrintDocumentAdapter(jstring arg0)
	{
		return callObjectMethod(
			"createPrintDocumentAdapter",
			"(Ljava/lang/String;)Landroid/print/PrintDocumentAdapter;",
			arg0
		);
	}
	jarray WebView::createWebMessageChannel()
	{
		return callObjectMethod(
			"createWebMessageChannel",
			"()[Landroid/webkit/WebMessagePort;"
		).object<jarray>();
	}
	void WebView::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void WebView::dispatchCreateViewTranslationRequest(__JniBaseClass arg0, jintArray arg1, android::view::translation::TranslationCapability arg2, __JniBaseClass arg3)
	{
		callMethod<void>(
			"dispatchCreateViewTranslationRequest",
			"(Ljava/util/Map;[ILandroid/view/translation/TranslationCapability;Ljava/util/List;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	jboolean WebView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void WebView::documentHasImages(android::os::Message arg0)
	{
		callMethod<void>(
			"documentHasImages",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void WebView::evaluateJavascript(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"evaluateJavascript",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.object()
		);
	}
	jint WebView::findAll(jstring arg0)
	{
		return callMethod<jint>(
			"findAll",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	void WebView::findAllAsync(jstring arg0)
	{
		callMethod<void>(
			"findAllAsync",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	android::view::View WebView::findFocus()
	{
		return callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	void WebView::findNext(jboolean arg0)
	{
		callMethod<void>(
			"findNext",
			"(Z)V",
			arg0
		);
	}
	void WebView::flingScroll(jint arg0, jint arg1)
	{
		callMethod<void>(
			"flingScroll",
			"(II)V",
			arg0,
			arg1
		);
	}
	void WebView::freeMemory()
	{
		callMethod<void>(
			"freeMemory",
			"()V"
		);
	}
	jstring WebView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::accessibility::AccessibilityNodeProvider WebView::getAccessibilityNodeProvider()
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	android::net::http::SslCertificate WebView::getCertificate()
	{
		return callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
		);
	}
	jint WebView::getContentHeight()
	{
		return callMethod<jint>(
			"getContentHeight",
			"()I"
		);
	}
	android::graphics::Bitmap WebView::getFavicon()
	{
		return callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::os::Handler WebView::getHandler()
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	android::webkit::WebView_HitTestResult WebView::getHitTestResult()
	{
		return callObjectMethod(
			"getHitTestResult",
			"()Landroid/webkit/WebView$HitTestResult;"
		);
	}
	jarray WebView::getHttpAuthUsernamePassword(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jstring WebView::getOriginalUrl()
	{
		return callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebView::getProgress()
	{
		return callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	jboolean WebView::getRendererPriorityWaivedWhenNotVisible()
	{
		return callMethod<jboolean>(
			"getRendererPriorityWaivedWhenNotVisible",
			"()Z"
		);
	}
	jint WebView::getRendererRequestedPriority()
	{
		return callMethod<jint>(
			"getRendererRequestedPriority",
			"()I"
		);
	}
	jfloat WebView::getScale()
	{
		return callMethod<jfloat>(
			"getScale",
			"()F"
		);
	}
	android::webkit::WebSettings WebView::getSettings()
	{
		return callObjectMethod(
			"getSettings",
			"()Landroid/webkit/WebSettings;"
		);
	}
	__JniBaseClass WebView::getTextClassifier()
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	jstring WebView::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebView::getUrl()
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::webkit::WebChromeClient WebView::getWebChromeClient()
	{
		return callObjectMethod(
			"getWebChromeClient",
			"()Landroid/webkit/WebChromeClient;"
		);
	}
	android::webkit::WebViewClient WebView::getWebViewClient()
	{
		return callObjectMethod(
			"getWebViewClient",
			"()Landroid/webkit/WebViewClient;"
		);
	}
	android::os::Looper WebView::getWebViewLooper()
	{
		return callObjectMethod(
			"getWebViewLooper",
			"()Landroid/os/Looper;"
		);
	}
	android::webkit::WebViewRenderProcess WebView::getWebViewRenderProcess()
	{
		return callObjectMethod(
			"getWebViewRenderProcess",
			"()Landroid/webkit/WebViewRenderProcess;"
		);
	}
	android::webkit::WebViewRenderProcessClient WebView::getWebViewRenderProcessClient()
	{
		return callObjectMethod(
			"getWebViewRenderProcessClient",
			"()Landroid/webkit/WebViewRenderProcessClient;"
		);
	}
	void WebView::goBack()
	{
		callMethod<void>(
			"goBack",
			"()V"
		);
	}
	void WebView::goBackOrForward(jint arg0)
	{
		callMethod<void>(
			"goBackOrForward",
			"(I)V",
			arg0
		);
	}
	void WebView::goForward()
	{
		callMethod<void>(
			"goForward",
			"()V"
		);
	}
	void WebView::invokeZoomPicker()
	{
		callMethod<void>(
			"invokeZoomPicker",
			"()V"
		);
	}
	jboolean WebView::isPrivateBrowsingEnabled()
	{
		return callMethod<jboolean>(
			"isPrivateBrowsingEnabled",
			"()Z"
		);
	}
	jboolean WebView::isVisibleToUserForAutofill(jint arg0)
	{
		return callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	void WebView::loadData(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"loadData",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void WebView::loadDataWithBaseURL(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		callMethod<void>(
			"loadDataWithBaseURL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void WebView::loadUrl(jstring arg0)
	{
		callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebView::loadUrl(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.object()
		);
	}
	android::view::WindowInsets WebView::onApplyWindowInsets(android::view::WindowInsets arg0)
	{
		return callObjectMethod(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	jboolean WebView::onCheckIsTextEditor()
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	void WebView::onChildViewAdded(android::view::View arg0, android::view::View arg1)
	{
		callMethod<void>(
			"onChildViewAdded",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebView::onChildViewRemoved(android::view::View arg0, android::view::View arg1)
	{
		callMethod<void>(
			"onChildViewRemoved",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass WebView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0)
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	void WebView::onCreateVirtualViewTranslationRequests(jlongArray arg0, jintArray arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"onCreateVirtualViewTranslationRequests",
			"([J[ILjava/util/function/Consumer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean WebView::onDragEvent(android::view::DragEvent arg0)
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void WebView::onFinishTemporaryDetach()
	{
		callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean WebView::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void WebView::onGlobalFocusChanged(android::view::View arg0, android::view::View arg1)
	{
		callMethod<void>(
			"onGlobalFocusChanged",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean WebView::onHoverEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean WebView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean WebView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean WebView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void WebView::onPause()
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void WebView::onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void WebView::onProvideContentCaptureStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"onProvideContentCaptureStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void WebView::onProvideVirtualStructure(android::view::ViewStructure arg0)
	{
		callMethod<void>(
			"onProvideVirtualStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void WebView::onResume()
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void WebView::onStartTemporaryDetach()
	{
		callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	jboolean WebView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean WebView::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void WebView::onVirtualViewTranslationResponses(android::util::LongSparseArray arg0)
	{
		callMethod<void>(
			"onVirtualViewTranslationResponses",
			"(Landroid/util/LongSparseArray;)V",
			arg0.object()
		);
	}
	void WebView::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean WebView::overlayHorizontalScrollbar()
	{
		return callMethod<jboolean>(
			"overlayHorizontalScrollbar",
			"()Z"
		);
	}
	jboolean WebView::overlayVerticalScrollbar()
	{
		return callMethod<jboolean>(
			"overlayVerticalScrollbar",
			"()Z"
		);
	}
	jboolean WebView::pageDown(jboolean arg0)
	{
		return callMethod<jboolean>(
			"pageDown",
			"(Z)Z",
			arg0
		);
	}
	jboolean WebView::pageUp(jboolean arg0)
	{
		return callMethod<jboolean>(
			"pageUp",
			"(Z)Z",
			arg0
		);
	}
	void WebView::pauseTimers()
	{
		callMethod<void>(
			"pauseTimers",
			"()V"
		);
	}
	jboolean WebView::performLongClick()
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	void WebView::postUrl(jstring arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"postUrl",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void WebView::postVisualStateCallback(jlong arg0, android::webkit::WebView_VisualStateCallback arg1)
	{
		callMethod<void>(
			"postVisualStateCallback",
			"(JLandroid/webkit/WebView$VisualStateCallback;)V",
			arg0,
			arg1.object()
		);
	}
	void WebView::postWebMessage(android::webkit::WebMessage arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"postWebMessage",
			"(Landroid/webkit/WebMessage;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebView::reload()
	{
		callMethod<void>(
			"reload",
			"()V"
		);
	}
	void WebView::removeJavascriptInterface(jstring arg0)
	{
		callMethod<void>(
			"removeJavascriptInterface",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean WebView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean WebView::requestFocus(jint arg0, android::graphics::Rect arg1)
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	void WebView::requestFocusNodeHref(android::os::Message arg0)
	{
		callMethod<void>(
			"requestFocusNodeHref",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void WebView::requestImageRef(android::os::Message arg0)
	{
		callMethod<void>(
			"requestImageRef",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	android::webkit::WebBackForwardList WebView::restoreState(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.object()
		);
	}
	void WebView::resumeTimers()
	{
		callMethod<void>(
			"resumeTimers",
			"()V"
		);
	}
	void WebView::savePassword(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"savePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	android::webkit::WebBackForwardList WebView::saveState(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"saveState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.object()
		);
	}
	void WebView::saveWebArchive(jstring arg0)
	{
		callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebView::saveWebArchive(jstring arg0, jboolean arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;ZLandroid/webkit/ValueCallback;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void WebView::setBackgroundColor(jint arg0)
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void WebView::setCertificate(android::net::http::SslCertificate arg0)
	{
		callMethod<void>(
			"setCertificate",
			"(Landroid/net/http/SslCertificate;)V",
			arg0.object()
		);
	}
	void WebView::setDownloadListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setDownloadListener",
			"(Landroid/webkit/DownloadListener;)V",
			arg0.object()
		);
	}
	void WebView::setFindListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setFindListener",
			"(Landroid/webkit/WebView$FindListener;)V",
			arg0.object()
		);
	}
	void WebView::setHorizontalScrollbarOverlay(jboolean arg0)
	{
		callMethod<void>(
			"setHorizontalScrollbarOverlay",
			"(Z)V",
			arg0
		);
	}
	void WebView::setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void WebView::setInitialScale(jint arg0)
	{
		callMethod<void>(
			"setInitialScale",
			"(I)V",
			arg0
		);
	}
	void WebView::setLayerType(jint arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.object()
		);
	}
	void WebView::setLayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		callMethod<void>(
			"setLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		);
	}
	void WebView::setMapTrackballToArrowKeys(jboolean arg0)
	{
		callMethod<void>(
			"setMapTrackballToArrowKeys",
			"(Z)V",
			arg0
		);
	}
	void WebView::setNetworkAvailable(jboolean arg0)
	{
		callMethod<void>(
			"setNetworkAvailable",
			"(Z)V",
			arg0
		);
	}
	void WebView::setOverScrollMode(jint arg0)
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	void WebView::setPictureListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setPictureListener",
			"(Landroid/webkit/WebView$PictureListener;)V",
			arg0.object()
		);
	}
	void WebView::setRendererPriorityPolicy(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setRendererPriorityPolicy",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void WebView::setScrollBarStyle(jint arg0)
	{
		callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	void WebView::setTextClassifier(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
	void WebView::setVerticalScrollbarOverlay(jboolean arg0)
	{
		callMethod<void>(
			"setVerticalScrollbarOverlay",
			"(Z)V",
			arg0
		);
	}
	void WebView::setWebChromeClient(android::webkit::WebChromeClient arg0)
	{
		callMethod<void>(
			"setWebChromeClient",
			"(Landroid/webkit/WebChromeClient;)V",
			arg0.object()
		);
	}
	void WebView::setWebViewClient(android::webkit::WebViewClient arg0)
	{
		callMethod<void>(
			"setWebViewClient",
			"(Landroid/webkit/WebViewClient;)V",
			arg0.object()
		);
	}
	void WebView::setWebViewRenderProcessClient(android::webkit::WebViewRenderProcessClient arg0)
	{
		callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.object()
		);
	}
	void WebView::setWebViewRenderProcessClient(__JniBaseClass arg0, android::webkit::WebViewRenderProcessClient arg1)
	{
		callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Ljava/util/concurrent/Executor;Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean WebView::shouldDelayChildPressedState()
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	jboolean WebView::showFindDialog(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"showFindDialog",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	void WebView::stopLoading()
	{
		callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	void WebView::zoomBy(jfloat arg0)
	{
		callMethod<void>(
			"zoomBy",
			"(F)V",
			arg0
		);
	}
	jboolean WebView::zoomIn()
	{
		return callMethod<jboolean>(
			"zoomIn",
			"()Z"
		);
	}
	jboolean WebView::zoomOut()
	{
		return callMethod<jboolean>(
			"zoomOut",
			"()Z"
		);
	}
} // namespace android::webkit

