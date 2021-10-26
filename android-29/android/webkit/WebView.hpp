#pragma once

#ifndef ANDROID_WEBKIT_WEBVIEW
#define ANDROID_WEBKIT_WEBVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/AbsoluteLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::view
{
	class ViewStructure;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeProvider;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::view
{
	class DragEvent;
}
namespace __jni_impl::android::net::http
{
	class SslCertificate;
}
namespace __jni_impl::android::webkit
{
	class WebBackForwardList;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::webkit
{
	class WebView_VisualStateCallback;
}
namespace __jni_impl::android::graphics
{
	class Picture;
}
namespace __jni_impl::android::print
{
	class PrintDocumentAdapter;
}
namespace __jni_impl::android::webkit
{
	class WebView_HitTestResult;
}
namespace __jni_impl::android::os
{
	class Message;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::net
{
	class Uri;
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
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::content::pm
{
	class PackageInfo;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
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
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jboolean arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void destroy();
		void freeMemory();
		void reload();
		jint findAll(jstring arg0);
		jint findAll(const QString &arg0);
		void clearCache(jboolean arg0);
		QAndroidJniObject getHandler();
		jboolean requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2);
		QAndroidJniObject findFocus();
		jboolean requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1);
		jstring getAccessibilityClassName();
		jboolean shouldDelayChildPressedState();
		jboolean performLongClick();
		void onProvideVirtualStructure(__jni_impl::android::view::ViewStructure arg0);
		void onProvideAutofillVirtualStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		void autofill(__jni_impl::android::util::SparseArray arg0);
		jboolean isVisibleToUserForAutofill(jint arg0);
		QAndroidJniObject getAccessibilityNodeProvider();
		void onStartTemporaryDetach();
		void onFinishTemporaryDetach();
		jboolean onCheckIsTextEditor();
		QAndroidJniObject onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		jboolean onHoverEvent(__jni_impl::android::view::MotionEvent arg0);
		void setLayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void computeScroll();
		void setScrollBarStyle(jint arg0);
		void setLayerType(jint arg0, __jni_impl::android::graphics::Paint arg1);
		void setBackgroundColor(jint arg0);
		jboolean onDragEvent(__jni_impl::android::view::DragEvent arg0);
		void setOverScrollMode(jint arg0);
		void setHorizontalScrollbarOverlay(jboolean arg0);
		void setVerticalScrollbarOverlay(jboolean arg0);
		jboolean overlayHorizontalScrollbar();
		jboolean overlayVerticalScrollbar();
		QAndroidJniObject getCertificate();
		void setCertificate(__jni_impl::android::net::http::SslCertificate arg0);
		void savePassword(jstring arg0, jstring arg1, jstring arg2);
		void savePassword(const QString &arg0, const QString &arg1, const QString &arg2);
		void setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void setHttpAuthUsernamePassword(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		jarray getHttpAuthUsernamePassword(jstring arg0, jstring arg1);
		jarray getHttpAuthUsernamePassword(const QString &arg0, const QString &arg1);
		void setNetworkAvailable(jboolean arg0);
		QAndroidJniObject saveState(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject restoreState(__jni_impl::android::os::Bundle arg0);
		void loadUrl(jstring arg0);
		void loadUrl(const QString &arg0);
		void loadUrl(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void loadUrl(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void postUrl(jstring arg0, jbyteArray arg1);
		void postUrl(const QString &arg0, jbyteArray arg1);
		void loadData(jstring arg0, jstring arg1, jstring arg2);
		void loadData(const QString &arg0, const QString &arg1, const QString &arg2);
		void loadDataWithBaseURL(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void loadDataWithBaseURL(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4);
		void evaluateJavascript(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void evaluateJavascript(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void saveWebArchive(jstring arg0);
		void saveWebArchive(const QString &arg0);
		void saveWebArchive(jstring arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2);
		void saveWebArchive(const QString &arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2);
		void stopLoading();
		jboolean canGoBack();
		void goBack();
		jboolean canGoForward();
		void goForward();
		jboolean canGoBackOrForward(jint arg0);
		void goBackOrForward(jint arg0);
		jboolean isPrivateBrowsingEnabled();
		void postVisualStateCallback(jlong arg0, __jni_impl::android::webkit::WebView_VisualStateCallback arg1);
		void clearView();
		QAndroidJniObject capturePicture();
		QAndroidJniObject createPrintDocumentAdapter();
		QAndroidJniObject createPrintDocumentAdapter(jstring arg0);
		QAndroidJniObject createPrintDocumentAdapter(const QString &arg0);
		jfloat getScale();
		void setInitialScale(jint arg0);
		void invokeZoomPicker();
		QAndroidJniObject getHitTestResult();
		void requestFocusNodeHref(__jni_impl::android::os::Message arg0);
		void requestImageRef(__jni_impl::android::os::Message arg0);
		jstring getUrl();
		jstring getOriginalUrl();
		QAndroidJniObject getFavicon();
		jint getProgress();
		jint getContentHeight();
		void pauseTimers();
		void resumeTimers();
		void clearFormData();
		void clearHistory();
		void clearSslPreferences();
		static void clearClientCertPreferences(__jni_impl::__JniBaseClass arg0);
		static void startSafeBrowsing(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		static void setSafeBrowsingWhitelist(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getSafeBrowsingPrivacyPolicyUrl();
		QAndroidJniObject copyBackForwardList();
		void setFindListener(__jni_impl::__JniBaseClass arg0);
		void findNext(jboolean arg0);
		void findAllAsync(jstring arg0);
		void findAllAsync(const QString &arg0);
		jboolean showFindDialog(jstring arg0, jboolean arg1);
		jboolean showFindDialog(const QString &arg0, jboolean arg1);
		static jstring findAddress(jstring arg0);
		static jstring findAddress(const QString &arg0);
		static void enableSlowWholeDocumentDraw();
		void clearMatches();
		void documentHasImages(__jni_impl::android::os::Message arg0);
		void setWebViewClient(__jni_impl::android::webkit::WebViewClient arg0);
		QAndroidJniObject getWebViewClient();
		QAndroidJniObject getWebViewRenderProcess();
		void setWebViewRenderProcessClient(__jni_impl::__JniBaseClass arg0, __jni_impl::android::webkit::WebViewRenderProcessClient arg1);
		void setWebViewRenderProcessClient(__jni_impl::android::webkit::WebViewRenderProcessClient arg0);
		QAndroidJniObject getWebViewRenderProcessClient();
		void setDownloadListener(__jni_impl::__JniBaseClass arg0);
		void setWebChromeClient(__jni_impl::android::webkit::WebChromeClient arg0);
		QAndroidJniObject getWebChromeClient();
		void setPictureListener(__jni_impl::__JniBaseClass arg0);
		void addJavascriptInterface(jobject arg0, jstring arg1);
		void addJavascriptInterface(jobject arg0, const QString &arg1);
		void removeJavascriptInterface(jstring arg0);
		void removeJavascriptInterface(const QString &arg0);
		jarray createWebMessageChannel();
		void postWebMessage(__jni_impl::android::webkit::WebMessage arg0, __jni_impl::android::net::Uri arg1);
		QAndroidJniObject getSettings();
		static void setWebContentsDebuggingEnabled(jboolean arg0);
		static void setDataDirectorySuffix(jstring arg0);
		static void setDataDirectorySuffix(const QString &arg0);
		static void disableWebView();
		void onChildViewAdded(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		void onChildViewRemoved(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		void onGlobalFocusChanged(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		void setMapTrackballToArrowKeys(jboolean arg0);
		void flingScroll(jint arg0, jint arg1);
		jboolean canZoomIn();
		jboolean canZoomOut();
		void zoomBy(jfloat arg0);
		jboolean zoomIn();
		jboolean zoomOut();
		void setRendererPriorityPolicy(jint arg0, jboolean arg1);
		jint getRendererRequestedPriority();
		jboolean getRendererPriorityWaivedWhenNotVisible();
		static QAndroidJniObject getWebViewClassLoader();
		QAndroidJniObject getWebViewLooper();
		static QAndroidJniObject getCurrentWebViewPackage();
		jboolean pageUp(jboolean arg0);
		jboolean pageDown(jboolean arg0);
		void setTextClassifier(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getTextClassifier();
		void onResume();
		void onPause();
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onWindowFocusChanged(jboolean arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jstring getTitle();
	};
} // namespace __jni_impl::android::webkit

#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "../view/View.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/ViewStructure.hpp"
#include "../util/SparseArray.hpp"
#include "../view/accessibility/AccessibilityNodeProvider.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../graphics/Paint.hpp"
#include "../view/DragEvent.hpp"
#include "../net/http/SslCertificate.hpp"
#include "WebBackForwardList.hpp"
#include "../os/Bundle.hpp"
#include "WebView_VisualStateCallback.hpp"
#include "../graphics/Picture.hpp"
#include "../print/PrintDocumentAdapter.hpp"
#include "WebView_HitTestResult.hpp"
#include "../os/Message.hpp"
#include "../graphics/Bitmap.hpp"
#include "../net/Uri.hpp"
#include "WebViewClient.hpp"
#include "WebViewRenderProcess.hpp"
#include "WebViewRenderProcessClient.hpp"
#include "WebChromeClient.hpp"
#include "WebMessage.hpp"
#include "WebSettings.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../os/Looper.hpp"
#include "../content/pm/PackageInfo.hpp"
#include "../content/res/Configuration.hpp"
#include "../view/KeyEvent.hpp"

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
	void WebView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void WebView::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void WebView::freeMemory()
	{
		__thiz.callMethod<void>(
			"freeMemory",
			"()V"
		);
	}
	void WebView::reload()
	{
		__thiz.callMethod<void>(
			"reload",
			"()V"
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
	void WebView::clearCache(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"clearCache",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject WebView::getHandler()
	{
		return __thiz.callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
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
	QAndroidJniObject WebView::findFocus()
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
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
	jstring WebView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean WebView::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	jboolean WebView::performLongClick()
	{
		return __thiz.callMethod<jboolean>(
			"performLongClick",
			"()Z"
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
	void WebView::onProvideAutofillVirtualStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
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
	jboolean WebView::isVisibleToUserForAutofill(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject WebView::getAccessibilityNodeProvider()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	void WebView::onStartTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	void WebView::onFinishTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean WebView::onCheckIsTextEditor()
	{
		return __thiz.callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
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
	jboolean WebView::onHoverEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
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
	void WebView::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V"
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
	void WebView::setLayerType(jint arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
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
	jboolean WebView::onDragEvent(__jni_impl::android::view::DragEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.__jniObject().object()
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
	void WebView::setHorizontalScrollbarOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalScrollbarOverlay",
			"(Z)V",
			arg0
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
	QAndroidJniObject WebView::getCertificate()
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
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
	void WebView::setNetworkAvailable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNetworkAvailable",
			"(Z)V",
			arg0
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
	QAndroidJniObject WebView::restoreState(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;",
			arg0.__jniObject().object()
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
	void WebView::stopLoading()
	{
		__thiz.callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	jboolean WebView::canGoBack()
	{
		return __thiz.callMethod<jboolean>(
			"canGoBack",
			"()Z"
		);
	}
	void WebView::goBack()
	{
		__thiz.callMethod<void>(
			"goBack",
			"()V"
		);
	}
	jboolean WebView::canGoForward()
	{
		return __thiz.callMethod<jboolean>(
			"canGoForward",
			"()Z"
		);
	}
	void WebView::goForward()
	{
		__thiz.callMethod<void>(
			"goForward",
			"()V"
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
	void WebView::goBackOrForward(jint arg0)
	{
		__thiz.callMethod<void>(
			"goBackOrForward",
			"(I)V",
			arg0
		);
	}
	jboolean WebView::isPrivateBrowsingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isPrivateBrowsingEnabled",
			"()Z"
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
	void WebView::clearView()
	{
		__thiz.callMethod<void>(
			"clearView",
			"()V"
		);
	}
	QAndroidJniObject WebView::capturePicture()
	{
		return __thiz.callObjectMethod(
			"capturePicture",
			"()Landroid/graphics/Picture;"
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
	jfloat WebView::getScale()
	{
		return __thiz.callMethod<jfloat>(
			"getScale",
			"()F"
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
	void WebView::invokeZoomPicker()
	{
		__thiz.callMethod<void>(
			"invokeZoomPicker",
			"()V"
		);
	}
	QAndroidJniObject WebView::getHitTestResult()
	{
		return __thiz.callObjectMethod(
			"getHitTestResult",
			"()Landroid/webkit/WebView$HitTestResult;"
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
	jstring WebView::getUrl()
	{
		return __thiz.callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebView::getOriginalUrl()
	{
		return __thiz.callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WebView::getFavicon()
	{
		return __thiz.callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint WebView::getProgress()
	{
		return __thiz.callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	jint WebView::getContentHeight()
	{
		return __thiz.callMethod<jint>(
			"getContentHeight",
			"()I"
		);
	}
	void WebView::pauseTimers()
	{
		__thiz.callMethod<void>(
			"pauseTimers",
			"()V"
		);
	}
	void WebView::resumeTimers()
	{
		__thiz.callMethod<void>(
			"resumeTimers",
			"()V"
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
	void WebView::clearSslPreferences()
	{
		__thiz.callMethod<void>(
			"clearSslPreferences",
			"()V"
		);
	}
	void WebView::clearClientCertPreferences(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"clearClientCertPreferences",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject WebView::getSafeBrowsingPrivacyPolicyUrl()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebView",
			"getSafeBrowsingPrivacyPolicyUrl",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject WebView::copyBackForwardList()
	{
		return __thiz.callObjectMethod(
			"copyBackForwardList",
			"()Landroid/webkit/WebBackForwardList;"
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
	void WebView::findNext(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"findNext",
			"(Z)V",
			arg0
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
	void WebView::enableSlowWholeDocumentDraw()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"enableSlowWholeDocumentDraw",
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
	void WebView::documentHasImages(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"documentHasImages",
			"(Landroid/os/Message;)V",
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
	QAndroidJniObject WebView::getWebViewClient()
	{
		return __thiz.callObjectMethod(
			"getWebViewClient",
			"()Landroid/webkit/WebViewClient;"
		);
	}
	QAndroidJniObject WebView::getWebViewRenderProcess()
	{
		return __thiz.callObjectMethod(
			"getWebViewRenderProcess",
			"()Landroid/webkit/WebViewRenderProcess;"
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
	void WebView::setWebViewRenderProcessClient(__jni_impl::android::webkit::WebViewRenderProcessClient arg0)
	{
		__thiz.callMethod<void>(
			"setWebViewRenderProcessClient",
			"(Landroid/webkit/WebViewRenderProcessClient;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WebView::getWebViewRenderProcessClient()
	{
		return __thiz.callObjectMethod(
			"getWebViewRenderProcessClient",
			"()Landroid/webkit/WebViewRenderProcessClient;"
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
	void WebView::setWebChromeClient(__jni_impl::android::webkit::WebChromeClient arg0)
	{
		__thiz.callMethod<void>(
			"setWebChromeClient",
			"(Landroid/webkit/WebChromeClient;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WebView::getWebChromeClient()
	{
		return __thiz.callObjectMethod(
			"getWebChromeClient",
			"()Landroid/webkit/WebChromeClient;"
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
	jarray WebView::createWebMessageChannel()
	{
		return __thiz.callObjectMethod(
			"createWebMessageChannel",
			"()[Landroid/webkit/WebMessagePort;"
		).object<jarray>();
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
	QAndroidJniObject WebView::getSettings()
	{
		return __thiz.callObjectMethod(
			"getSettings",
			"()Landroid/webkit/WebSettings;"
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
	void WebView::disableWebView()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.WebView",
			"disableWebView",
			"()V"
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
	void WebView::onGlobalFocusChanged(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onGlobalFocusChanged",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	void WebView::flingScroll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"flingScroll",
			"(II)V",
			arg0,
			arg1
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
	void WebView::setRendererPriorityPolicy(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setRendererPriorityPolicy",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	jint WebView::getRendererRequestedPriority()
	{
		return __thiz.callMethod<jint>(
			"getRendererRequestedPriority",
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
	QAndroidJniObject WebView::getWebViewClassLoader()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebView",
			"getWebViewClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	QAndroidJniObject WebView::getWebViewLooper()
	{
		return __thiz.callObjectMethod(
			"getWebViewLooper",
			"()Landroid/os/Looper;"
		);
	}
	QAndroidJniObject WebView::getCurrentWebViewPackage()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebView",
			"getCurrentWebViewPackage",
			"()Landroid/content/pm/PackageInfo;"
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
	jboolean WebView::pageDown(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"pageDown",
			"(Z)Z",
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
	QAndroidJniObject WebView::getTextClassifier()
	{
		return __thiz.callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	void WebView::onResume()
	{
		__thiz.callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void WebView::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V"
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
	jboolean WebView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
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
	jboolean WebView::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
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
	jboolean WebView::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring WebView::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebView : public __jni_impl::android::webkit::WebView
	{
	public:
		WebView(QAndroidJniObject obj) { __thiz = obj; }
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
		WebView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		WebView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		WebView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBVIEW

