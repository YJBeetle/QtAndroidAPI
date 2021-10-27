#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/AbsoluteLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class PackageInfo;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Picture;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::net::http
{
	class SslCertificate;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::os
{
	class Message;
}
namespace __jni_impl::android::print
{
	class PrintDocumentAdapter;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::view
{
	class DragEvent;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view
{
	class ViewStructure;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeProvider;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::android::webkit
{
	class WebBackForwardList;
}
namespace __jni_impl::android::webkit
{
	class WebChromeClient;
}
namespace __jni_impl::android::webkit
{
	class WebMessage;
}
namespace __jni_impl::android::webkit
{
	class WebSettings;
}
namespace __jni_impl::android::webkit
{
	class WebView_HitTestResult;
}
namespace __jni_impl::android::webkit
{
	class WebView_VisualStateCallback;
}
namespace __jni_impl::android::webkit
{
	class WebViewClient;
}
namespace __jni_impl::android::webkit
{
	class WebViewRenderProcess;
}
namespace __jni_impl::android::webkit
{
	class WebViewRenderProcessClient;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::android::webkit
{
	class WebView : public __jni_impl::android::widget::AbsoluteLayout
	{
	public:
		// Fields
		static jint RENDERER_PRIORITY_BOUND();
		static jint RENDERER_PRIORITY_IMPORTANT();
		static jint RENDERER_PRIORITY_WAIVED();
		static jstring SCHEME_GEO();
		static jstring SCHEME_MAILTO();
		static jstring SCHEME_TEL();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jboolean arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		static void clearClientCertPreferences(__jni_impl::__JniBaseClass arg0);
		static void disableWebView();
		static void enableSlowWholeDocumentDraw();
		static jstring findAddress(jstring arg0);
		static jstring findAddress(const QString &arg0);
		static QAndroidJniObject getCurrentWebViewPackage();
		static QAndroidJniObject getSafeBrowsingPrivacyPolicyUrl();
		static QAndroidJniObject getWebViewClassLoader();
		static void setDataDirectorySuffix(jstring arg0);
		static void setDataDirectorySuffix(const QString &arg0);
		static void setSafeBrowsingWhitelist(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static void setWebContentsDebuggingEnabled(jboolean arg0);
		static void startSafeBrowsing(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void addJavascriptInterface(jobject arg0, jstring arg1);
		void addJavascriptInterface(jobject arg0, const QString &arg1);
		void autofill(__jni_impl::android::util::SparseArray arg0);
		jboolean canGoBack();
		jboolean canGoBackOrForward(jint arg0);
		jboolean canGoForward();
		jboolean canZoomIn();
		jboolean canZoomOut();
		QAndroidJniObject capturePicture();
		void clearCache(jboolean arg0);
		void clearFormData();
		void clearHistory();
		void clearMatches();
		void clearSslPreferences();
		void clearView();
		void computeScroll();
		QAndroidJniObject copyBackForwardList();
		QAndroidJniObject createPrintDocumentAdapter();
		QAndroidJniObject createPrintDocumentAdapter(jstring arg0);
		QAndroidJniObject createPrintDocumentAdapter(const QString &arg0);
		jarray createWebMessageChannel();
		void destroy();
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		void documentHasImages(__jni_impl::android::os::Message arg0);
		void evaluateJavascript(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void evaluateJavascript(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		jint findAll(jstring arg0);
		jint findAll(const QString &arg0);
		void findAllAsync(jstring arg0);
		void findAllAsync(const QString &arg0);
		QAndroidJniObject findFocus();
		void findNext(jboolean arg0);
		void flingScroll(jint arg0, jint arg1);
		void freeMemory();
		jstring getAccessibilityClassName();
		QAndroidJniObject getAccessibilityNodeProvider();
		QAndroidJniObject getCertificate();
		jint getContentHeight();
		QAndroidJniObject getFavicon();
		QAndroidJniObject getHandler();
		QAndroidJniObject getHitTestResult();
		jarray getHttpAuthUsernamePassword(jstring arg0, jstring arg1);
		jarray getHttpAuthUsernamePassword(const QString &arg0, const QString &arg1);
		jstring getOriginalUrl();
		jint getProgress();
		jboolean getRendererPriorityWaivedWhenNotVisible();
		jint getRendererRequestedPriority();
		jfloat getScale();
		QAndroidJniObject getSettings();
		QAndroidJniObject getTextClassifier();
		jstring getTitle();
		jstring getUrl();
		QAndroidJniObject getWebChromeClient();
		QAndroidJniObject getWebViewClient();
		QAndroidJniObject getWebViewLooper();
		QAndroidJniObject getWebViewRenderProcess();
		QAndroidJniObject getWebViewRenderProcessClient();
		void goBack();
		void goBackOrForward(jint arg0);
		void goForward();
		void invokeZoomPicker();
		jboolean isPrivateBrowsingEnabled();
		jboolean isVisibleToUserForAutofill(jint arg0);
		void loadData(jstring arg0, jstring arg1, jstring arg2);
		void loadData(const QString &arg0, const QString &arg1, const QString &arg2);
		void loadDataWithBaseURL(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void loadDataWithBaseURL(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4);
		void loadUrl(jstring arg0);
		void loadUrl(const QString &arg0);
		void loadUrl(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void loadUrl(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onCheckIsTextEditor();
		void onChildViewAdded(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		void onChildViewRemoved(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		QAndroidJniObject onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		jboolean onDragEvent(__jni_impl::android::view::DragEvent arg0);
		void onFinishTemporaryDetach();
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onGlobalFocusChanged(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		jboolean onHoverEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void onPause();
		void onProvideAutofillVirtualStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		void onProvideVirtualStructure(__jni_impl::android::view::ViewStructure arg0);
		void onResume();
		void onStartTemporaryDetach();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		void onWindowFocusChanged(jboolean arg0);
		jboolean overlayHorizontalScrollbar();
		jboolean overlayVerticalScrollbar();
		jboolean pageDown(jboolean arg0);
		jboolean pageUp(jboolean arg0);
		void pauseTimers();
		jboolean performLongClick();
		void postUrl(jstring arg0, jbyteArray arg1);
		void postUrl(const QString &arg0, jbyteArray arg1);
		void postVisualStateCallback(jlong arg0, __jni_impl::android::webkit::WebView_VisualStateCallback arg1);
		void postWebMessage(__jni_impl::android::webkit::WebMessage arg0, __jni_impl::android::net::Uri arg1);
		void reload();
		void removeJavascriptInterface(jstring arg0);
		void removeJavascriptInterface(const QString &arg0);
		jboolean requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2);
		jboolean requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1);
		void requestFocusNodeHref(__jni_impl::android::os::Message arg0);
		void requestImageRef(__jni_impl::android::os::Message arg0);
		QAndroidJniObject restoreState(__jni_impl::android::os::Bundle arg0);
		void resumeTimers();
		void savePassword(jstring arg0, jstring arg1, jstring arg2);
		void savePassword(const QString &arg0, const QString &arg1, const QString &arg2);
		QAndroidJniObject saveState(__jni_impl::android::os::Bundle arg0);
		void saveWebArchive(jstring arg0);
		void saveWebArchive(const QString &arg0);
		void saveWebArchive(jstring arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2);
		void saveWebArchive(const QString &arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2);
		void setBackgroundColor(jint arg0);
		void setCertificate(__jni_impl::android::net::http::SslCertificate arg0);
		void setDownloadListener(__jni_impl::__JniBaseClass arg0);
		void setFindListener(__jni_impl::__JniBaseClass arg0);
		void setHorizontalScrollbarOverlay(jboolean arg0);
		void setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void setHttpAuthUsernamePassword(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		void setInitialScale(jint arg0);
		void setLayerType(jint arg0, __jni_impl::android::graphics::Paint arg1);
		void setLayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void setMapTrackballToArrowKeys(jboolean arg0);
		void setNetworkAvailable(jboolean arg0);
		void setOverScrollMode(jint arg0);
		void setPictureListener(__jni_impl::__JniBaseClass arg0);
		void setRendererPriorityPolicy(jint arg0, jboolean arg1);
		void setScrollBarStyle(jint arg0);
		void setTextClassifier(__jni_impl::__JniBaseClass arg0);
		void setVerticalScrollbarOverlay(jboolean arg0);
		void setWebChromeClient(__jni_impl::android::webkit::WebChromeClient arg0);
		void setWebViewClient(__jni_impl::android::webkit::WebViewClient arg0);
		void setWebViewRenderProcessClient(__jni_impl::android::webkit::WebViewRenderProcessClient arg0);
		void setWebViewRenderProcessClient(__jni_impl::__JniBaseClass arg0, __jni_impl::android::webkit::WebViewRenderProcessClient arg1);
		jboolean shouldDelayChildPressedState();
		jboolean showFindDialog(jstring arg0, jboolean arg1);
		jboolean showFindDialog(const QString &arg0, jboolean arg1);
		void stopLoading();
		void zoomBy(jfloat arg0);
		jboolean zoomIn();
		jboolean zoomOut();
	};
} // namespace __jni_impl::android::webkit

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
#include "WebBackForwardList.hpp"
#include "WebChromeClient.hpp"
#include "WebMessage.hpp"
#include "WebSettings.hpp"
#include "WebView_HitTestResult.hpp"
#include "WebView_VisualStateCallback.hpp"
#include "WebViewClient.hpp"
#include "WebViewRenderProcess.hpp"
#include "WebViewRenderProcessClient.hpp"
#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::android::webkit
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
	
	// Constructors
	void WebView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void WebView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jboolean arg3)
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
	void WebView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
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
	void WebView::clearClientCertPreferences(__jni_impl::__JniBaseClass arg0)
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
	void WebView::setSafeBrowsingWhitelist(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
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
	void WebView::startSafeBrowsing(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
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
	void WebView::autofill(__jni_impl::android::util::SparseArray arg0)
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
	jboolean WebView::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void WebView::documentHasImages(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"documentHasImages",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::evaluateJavascript(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"evaluateJavascript",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::evaluateJavascript(const QString &arg0, __jni_impl::__JniBaseClass arg1)
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
	void WebView::loadUrl(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"loadUrl",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::loadUrl(const QString &arg0, __jni_impl::__JniBaseClass arg1)
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
	void WebView::onChildViewAdded(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onChildViewAdded",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebView::onChildViewRemoved(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onChildViewRemoved",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject WebView::onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.__jniObject().object()
		);
	}
	jboolean WebView::onDragEvent(__jni_impl::android::view::DragEvent arg0)
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
	jboolean WebView::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void WebView::onGlobalFocusChanged(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onGlobalFocusChanged",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean WebView::onHoverEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean WebView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean WebView::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean WebView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
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
	void WebView::onProvideAutofillVirtualStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void WebView::onProvideVirtualStructure(__jni_impl::android::view::ViewStructure arg0)
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
	jboolean WebView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean WebView::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
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
	void WebView::postVisualStateCallback(jlong arg0, __jni_impl::android::webkit::WebView_VisualStateCallback arg1)
	{
		__thiz.callMethod<void>(
			"postVisualStateCallback",
			"(JLandroid/webkit/WebView$VisualStateCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::postWebMessage(__jni_impl::android::webkit::WebMessage arg0, __jni_impl::android::net::Uri arg1)
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
	jboolean WebView::requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean WebView::requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::requestFocusNodeHref(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"requestFocusNodeHref",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::requestImageRef(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"requestImageRef",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WebView::restoreState(__jni_impl::android::os::Bundle arg0)
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
	QAndroidJniObject WebView::saveState(__jni_impl::android::os::Bundle arg0)
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
	void WebView::saveWebArchive(jstring arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"saveWebArchive",
			"(Ljava/lang/String;ZLandroid/webkit/ValueCallback;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void WebView::saveWebArchive(const QString &arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2)
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
	void WebView::setCertificate(__jni_impl::android::net::http::SslCertificate arg0)
	{
		__thiz.callMethod<void>(
			"setCertificate",
			"(Landroid/net/http/SslCertificate;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setDownloadListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDownloadListener",
			"(Landroid/webkit/DownloadListener;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setFindListener(__jni_impl::__JniBaseClass arg0)
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
	void WebView::setLayerType(jint arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebView::setLayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
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
	void WebView::setPictureListener(__jni_impl::__JniBaseClass arg0)
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
	void WebView::setTextClassifier(__jni_impl::__JniBaseClass arg0)
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
	void WebView::setWebChromeClient(__jni_impl::android::webkit::WebChromeClient arg0)
	{
		__thiz.callMethod<void>(
			"setWebChromeClient",
			"(Landroid/webkit/WebChromeClient;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setWebViewClient(__jni_impl::android::webkit::WebViewClient arg0)
	{
		__thiz.callMethod<void>(
			"setWebViewClient",
			"(Landroid/webkit/WebViewClient;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setWebViewRenderProcessClient(__jni_impl::android::webkit::WebViewRenderProcessClient arg0)
	{
		__thiz.callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.__jniObject().object()
		);
	}
	void WebView::setWebViewRenderProcessClient(__jni_impl::__JniBaseClass arg0, __jni_impl::android::webkit::WebViewRenderProcessClient arg1)
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
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebView : public __jni_impl::android::webkit::WebView
	{
	public:
		WebView(QAndroidJniObject obj) { __thiz = obj; }
		WebView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		WebView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		WebView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		WebView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		WebView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::webkit

