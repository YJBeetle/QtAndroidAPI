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
#include "../../java/lang/ClassLoader.hpp"
#include "./WebView.hpp"

namespace android::webkit
{
	// Fields
	jint WebView::RENDERER_PRIORITY_BOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_BOUND"
		);
	}
	jint WebView::RENDERER_PRIORITY_IMPORTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_IMPORTANT"
		);
	}
	jint WebView::RENDERER_PRIORITY_WAIVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.WebView",
			"RENDERER_PRIORITY_WAIVED"
		);
	}
	jstring WebView::SCHEME_GEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_GEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebView::SCHEME_MAILTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_MAILTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebView::SCHEME_TEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebView",
			"SCHEME_TEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	WebView::WebView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebView::WebView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	WebView::WebView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	WebView::WebView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	WebView::WebView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jboolean &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	WebView::WebView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void WebView::clearClientCertPreferences(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"clearClientCertPreferences",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::disableWebView()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"disableWebView",
			"()V"
		);
	}
	void WebView::enableSlowWholeDocumentDraw()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"enableSlowWholeDocumentDraw",
			"()V"
		);
	}
	jstring WebView::findAddress(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebView",
			"findAddress",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring WebView::findAddress(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebView",
			"findAddress",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject WebView::getCurrentWebViewPackage()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebView",
			"getCurrentWebViewPackage",
			"()Landroid/content/pm/PackageInfo;"
		);
	}
	QAndroidJniObject WebView::getSafeBrowsingPrivacyPolicyUrl()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebView",
			"getSafeBrowsingPrivacyPolicyUrl",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject WebView::getWebViewClassLoader()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebView",
			"getWebViewClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	void WebView::setDataDirectorySuffix(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"setDataDirectorySuffix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebView::setDataDirectorySuffix(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"setDataDirectorySuffix",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebView::setSafeBrowsingWhitelist(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"setSafeBrowsingWhitelist",
			"(Ljava/util/List;Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebView::setWebContentsDebuggingEnabled(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"setWebContentsDebuggingEnabled",
			"(Z)V",
			arg0
		);
	}
	void WebView::startSafeBrowsing(android::content::Context arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"startSafeBrowsing",
			"(Landroid/content/Context;Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebView::addJavascriptInterface(jobject arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addJavascriptInterface",
			"(Ljava/lang/Object;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void WebView::addJavascriptInterface(jobject arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"addJavascriptInterface",
			"(Ljava/lang/Object;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void WebView::autofill(android::util::SparseArray arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/util/SparseArray;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean WebView::canGoBack()
	{
		return __thiz.callMethod<jboolean>(
			"canGoBack",
			"()Z"
		);
	}
	jboolean WebView::canGoBackOrForward(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canGoBackOrForward",
			"(I)Z",
			arg0
		);
	}
	jboolean WebView::canGoForward()
	{
		return __thiz.callMethod<jboolean>(
			"canGoForward",
			"()Z"
		);
	}
	jboolean WebView::canZoomIn()
	{
		return __thiz.callMethod<jboolean>(
			"canZoomIn",
			"()Z"
		);
	}
	jboolean WebView::canZoomOut()
	{
		return __thiz.callMethod<jboolean>(
			"canZoomOut",
			"()Z"
		);
	}
	QAndroidJniObject WebView::capturePicture()
	{
		return __thiz.callObjectMethod(
			"capturePicture",
			"()Landroid/graphics/Picture;"
		);
	}
	void WebView::clearCache(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"clearCache",
			"(Z)V",
			arg0
		);
	}
	void WebView::clearFormData()
	{
		__thiz.callMethod<void>(
			"clearFormData",
			"()V"
		);
	}
	void WebView::clearHistory()
	{
		__thiz.callMethod<void>(
			"clearHistory",
			"()V"
		);
	}
	void WebView::clearMatches()
	{
		__thiz.callMethod<void>(
			"clearMatches",
			"()V"
		);
	}
	void WebView::clearSslPreferences()
	{
		__thiz.callMethod<void>(
			"clearSslPreferences",
			"()V"
		);
	}
	void WebView::clearView()
	{
		__thiz.callMethod<void>(
			"clearView",
			"()V"
		);
	}
	void WebView::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	QAndroidJniObject WebView::copyBackForwardList()
	{
		return __thiz.callObjectMethod(
			"copyBackForwardList",
			"()Landroid/webkit/WebBackForwardList;"
		);
	}
	QAndroidJniObject WebView::createPrintDocumentAdapter()
	{
		return __thiz.callObjectMethod(
			"createPrintDocumentAdapter",
			"()Landroid/print/PrintDocumentAdapter;"
		);
	}
	QAndroidJniObject WebView::createPrintDocumentAdapter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createPrintDocumentAdapter",
			"(Ljava/lang/String;)Landroid/print/PrintDocumentAdapter;",
			arg0
		);
	}
	QAndroidJniObject WebView::createPrintDocumentAdapter(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"createPrintDocumentAdapter",
			"(Ljava/lang/String;)Landroid/print/PrintDocumentAdapter;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray WebView::createWebMessageChannel()
	{
		return __thiz.callObjectMethod(
			"createWebMessageChannel",
			"()[Landroid/webkit/WebMessagePort;"
		).object<jarray>();
	}
	void WebView::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean WebView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void WebView::documentHasImages(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"documentHasImages",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::evaluateJavascript(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"evaluateJavascript",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::evaluateJavascript(const QString &arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"evaluateJavascript",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint WebView::findAll(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"findAll",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint WebView::findAll(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"findAll",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebView::findAllAsync(jstring arg0)
	{
		__thiz.callMethod<void>(
			"findAllAsync",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebView::findAllAsync(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"findAllAsync",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WebView::findFocus()
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	void WebView::findNext(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"findNext",
			"(Z)V",
			arg0
		);
	}
	void WebView::flingScroll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"flingScroll",
			"(II)V",
			arg0,
			arg1
		);
	}
	void WebView::freeMemory()
	{
		__thiz.callMethod<void>(
			"freeMemory",
			"()V"
		);
	}
	jstring WebView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject WebView::getAccessibilityNodeProvider()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	QAndroidJniObject WebView::getCertificate()
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
		);
	}
	jint WebView::getContentHeight()
	{
		return __thiz.callMethod<jint>(
			"getContentHeight",
			"()I"
		);
	}
	QAndroidJniObject WebView::getFavicon()
	{
		return __thiz.callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject WebView::getHandler()
	{
		return __thiz.callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	QAndroidJniObject WebView::getHitTestResult()
	{
		return __thiz.callObjectMethod(
			"getHitTestResult",
			"()Landroid/webkit/WebView$HitTestResult;"
		);
	}
	jarray WebView::getHttpAuthUsernamePassword(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray WebView::getHttpAuthUsernamePassword(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jarray>();
	}
	jstring WebView::getOriginalUrl()
	{
		return __thiz.callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WebView::getProgress()
	{
		return __thiz.callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	jboolean WebView::getRendererPriorityWaivedWhenNotVisible()
	{
		return __thiz.callMethod<jboolean>(
			"getRendererPriorityWaivedWhenNotVisible",
			"()Z"
		);
	}
	jint WebView::getRendererRequestedPriority()
	{
		return __thiz.callMethod<jint>(
			"getRendererRequestedPriority",
			"()I"
		);
	}
	jfloat WebView::getScale()
	{
		return __thiz.callMethod<jfloat>(
			"getScale",
			"()F"
		);
	}
	QAndroidJniObject WebView::getSettings()
	{
		return __thiz.callObjectMethod(
			"getSettings",
			"()Landroid/webkit/WebSettings;"
		);
	}
	QAndroidJniObject WebView::getTextClassifier()
	{
		return __thiz.callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	jstring WebView::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebView::getUrl()
	{
		return __thiz.callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WebView::getWebChromeClient()
	{
		return __thiz.callObjectMethod(
			"getWebChromeClient",
			"()Landroid/webkit/WebChromeClient;"
		);
	}
	QAndroidJniObject WebView::getWebViewClient()
	{
		return __thiz.callObjectMethod(
			"getWebViewClient",
			"()Landroid/webkit/WebViewClient;"
		);
	}
	QAndroidJniObject WebView::getWebViewLooper()
	{
		return __thiz.callObjectMethod(
			"getWebViewLooper",
			"()Landroid/os/Looper;"
		);
	}
	QAndroidJniObject WebView::getWebViewRenderProcess()
	{
		return __thiz.callObjectMethod(
			"getWebViewRenderProcess",
			"()Landroid/webkit/WebViewRenderProcess;"
		);
	}
	QAndroidJniObject WebView::getWebViewRenderProcessClient()
	{
		return __thiz.callObjectMethod(
			"getWebViewRenderProcessClient",
			"()Landroid/webkit/WebViewRenderProcessClient;"
		);
	}
	void WebView::goBack()
	{
		__thiz.callMethod<void>(
			"goBack",
			"()V"
		);
	}
	void WebView::goBackOrForward(jint arg0)
	{
		__thiz.callMethod<void>(
			"goBackOrForward",
			"(I)V",
			arg0
		);
	}
	void WebView::goForward()
	{
		__thiz.callMethod<void>(
			"goForward",
			"()V"
		);
	}
	void WebView::invokeZoomPicker()
	{
		__thiz.callMethod<void>(
			"invokeZoomPicker",
			"()V"
		);
	}
	jboolean WebView::isPrivateBrowsingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isPrivateBrowsingEnabled",
			"()Z"
		);
	}
	jboolean WebView::isVisibleToUserForAutofill(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	void WebView::loadData(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"loadData",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void WebView::loadData(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"loadData",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void WebView::loadDataWithBaseURL(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz.callMethod<void>(
			"loadDataWithBaseURL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void WebView::loadDataWithBaseURL(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4)
	{
		__thiz.callMethod<void>(
			"loadDataWithBaseURL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	void WebView::loadUrl(jstring arg0)
	{
		__thiz.callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebView::loadUrl(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebView::loadUrl(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::loadUrl(const QString &arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean WebView::onCheckIsTextEditor()
	{
		return __thiz.callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	void WebView::onChildViewAdded(android::view::View arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onChildViewAdded",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebView::onChildViewRemoved(android::view::View arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onChildViewRemoved",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject WebView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.__jniObject().object()
		);
	}
	jboolean WebView::onDragEvent(android::view::DragEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void WebView::onFinishTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean WebView::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void WebView::onGlobalFocusChanged(android::view::View arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onGlobalFocusChanged",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean WebView::onHoverEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean WebView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean WebView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean WebView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void WebView::onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebView::onProvideVirtualStructure(android::view::ViewStructure arg0)
	{
		__thiz.callMethod<void>(
			"onProvideVirtualStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::onResume()
	{
		__thiz.callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void WebView::onStartTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	jboolean WebView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean WebView::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void WebView::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean WebView::overlayHorizontalScrollbar()
	{
		return __thiz.callMethod<jboolean>(
			"overlayHorizontalScrollbar",
			"()Z"
		);
	}
	jboolean WebView::overlayVerticalScrollbar()
	{
		return __thiz.callMethod<jboolean>(
			"overlayVerticalScrollbar",
			"()Z"
		);
	}
	jboolean WebView::pageDown(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"pageDown",
			"(Z)Z",
			arg0
		);
	}
	jboolean WebView::pageUp(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"pageUp",
			"(Z)Z",
			arg0
		);
	}
	void WebView::pauseTimers()
	{
		__thiz.callMethod<void>(
			"pauseTimers",
			"()V"
		);
	}
	jboolean WebView::performLongClick()
	{
		return __thiz.callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	void WebView::postUrl(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"postUrl",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void WebView::postUrl(const QString &arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"postUrl",
			"(Ljava/lang/String;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void WebView::postVisualStateCallback(jlong arg0, android::webkit::WebView_VisualStateCallback arg1)
	{
		__thiz.callMethod<void>(
			"postVisualStateCallback",
			"(JLandroid/webkit/WebView$VisualStateCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::postWebMessage(android::webkit::WebMessage arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"postWebMessage",
			"(Landroid/webkit/WebMessage;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebView::reload()
	{
		__thiz.callMethod<void>(
			"reload",
			"()V"
		);
	}
	void WebView::removeJavascriptInterface(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeJavascriptInterface",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebView::removeJavascriptInterface(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removeJavascriptInterface",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean WebView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean WebView::requestFocus(jint arg0, android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::requestFocusNodeHref(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"requestFocusNodeHref",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::requestImageRef(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"requestImageRef",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WebView::restoreState(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.__jniObject().object()
		);
	}
	void WebView::resumeTimers()
	{
		__thiz.callMethod<void>(
			"resumeTimers",
			"()V"
		);
	}
	void WebView::savePassword(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"savePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void WebView::savePassword(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"savePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject WebView::saveState(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"saveState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.__jniObject().object()
		);
	}
	void WebView::saveWebArchive(jstring arg0)
	{
		__thiz.callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebView::saveWebArchive(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebView::saveWebArchive(jstring arg0, jboolean arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;ZLandroid/webkit/ValueCallback;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void WebView::saveWebArchive(const QString &arg0, jboolean arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;ZLandroid/webkit/ValueCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void WebView::setBackgroundColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void WebView::setCertificate(android::net::http::SslCertificate arg0)
	{
		__thiz.callMethod<void>(
			"setCertificate",
			"(Landroid/net/http/SslCertificate;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setDownloadListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDownloadListener",
			"(Landroid/webkit/DownloadListener;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setFindListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFindListener",
			"(Landroid/webkit/WebView$FindListener;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setHorizontalScrollbarOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalScrollbarOverlay",
			"(Z)V",
			arg0
		);
	}
	void WebView::setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void WebView::setHttpAuthUsernamePassword(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void WebView::setInitialScale(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInitialScale",
			"(I)V",
			arg0
		);
	}
	void WebView::setLayerType(jint arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::setLayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setMapTrackballToArrowKeys(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMapTrackballToArrowKeys",
			"(Z)V",
			arg0
		);
	}
	void WebView::setNetworkAvailable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNetworkAvailable",
			"(Z)V",
			arg0
		);
	}
	void WebView::setOverScrollMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	void WebView::setPictureListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPictureListener",
			"(Landroid/webkit/WebView$PictureListener;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setRendererPriorityPolicy(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setRendererPriorityPolicy",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void WebView::setScrollBarStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	void WebView::setTextClassifier(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setVerticalScrollbarOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalScrollbarOverlay",
			"(Z)V",
			arg0
		);
	}
	void WebView::setWebChromeClient(android::webkit::WebChromeClient arg0)
	{
		__thiz.callMethod<void>(
			"setWebChromeClient",
			"(Landroid/webkit/WebChromeClient;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setWebViewClient(android::webkit::WebViewClient arg0)
	{
		__thiz.callMethod<void>(
			"setWebViewClient",
			"(Landroid/webkit/WebViewClient;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setWebViewRenderProcessClient(android::webkit::WebViewRenderProcessClient arg0)
	{
		__thiz.callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setWebViewRenderProcessClient(__JniBaseClass arg0, android::webkit::WebViewRenderProcessClient arg1)
	{
		__thiz.callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Ljava/util/concurrent/Executor;Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean WebView::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	jboolean WebView::showFindDialog(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showFindDialog",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean WebView::showFindDialog(const QString &arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showFindDialog",
			"(Ljava/lang/String;Z)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void WebView::stopLoading()
	{
		__thiz.callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	void WebView::zoomBy(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"zoomBy",
			"(F)V",
			arg0
		);
	}
	jboolean WebView::zoomIn()
	{
		return __thiz.callMethod<jboolean>(
			"zoomIn",
			"()Z"
		);
	}
	jboolean WebView::zoomOut()
	{
		return __thiz.callMethod<jboolean>(
			"zoomOut",
			"()Z"
		);
	}
} // namespace android::webkit

