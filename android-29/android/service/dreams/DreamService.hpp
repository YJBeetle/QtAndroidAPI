#pragma once

#ifndef ANDROID_SERVICE_DREAMS_DREAMSERVICE
#define ANDROID_SERVICE_DREAMS_DREAMSERVICE

#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::view
{
	class Window;
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
	class WindowManager_LayoutParams;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::view
{
	class SearchEvent;
}
namespace __jni_impl::android::view
{
	class ActionMode;
}

namespace __jni_impl::android::service::dreams
{
	class DreamService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject DREAM_META_DATA();
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void finish();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void wakeUp();
		QAndroidJniObject getWindowManager();
		QAndroidJniObject getWindow();
		void onCreate();
		void onDestroy();
		QAndroidJniObject findViewById(jint arg0);
		QAndroidJniObject requireViewById(jint arg0);
		void setContentView(jint arg0);
		void setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void setContentView(__jni_impl::android::view::View arg0);
		void addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void onWindowAttributesChanged(__jni_impl::android::view::WindowManager_LayoutParams arg0);
		void onContentChanged();
		void onWindowFocusChanged(jboolean arg0);
		void onAttachedToWindow();
		void onDetachedFromWindow();
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		QAndroidJniObject onCreatePanelView(jint arg0);
		jboolean onCreatePanelMenu(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onPreparePanel(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2);
		jboolean onMenuOpened(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onMenuItemSelected(jint arg0, __jni_impl::__JniBaseClass arg1);
		void onPanelClosed(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onSearchRequested();
		jboolean onSearchRequested(__jni_impl::android::view::SearchEvent arg0);
		QAndroidJniObject onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0);
		void onActionModeStarted(__jni_impl::android::view::ActionMode arg0);
		void onActionModeFinished(__jni_impl::android::view::ActionMode arg0);
		void setInteractive(jboolean arg0);
		jboolean isInteractive();
		void setFullscreen(jboolean arg0);
		jboolean isFullscreen();
		void setScreenBright(jboolean arg0);
		jboolean isScreenBright();
		void onDreamingStarted();
		void onDreamingStopped();
		void onWakeUp();
	};
} // namespace __jni_impl::android::service::dreams

#include "../../content/Intent.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../view/Window.hpp"
#include "../../view/View.hpp"
#include "../../view/ViewGroup_LayoutParams.hpp"
#include "../../view/WindowManager_LayoutParams.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/accessibility/AccessibilityEvent.hpp"
#include "../../view/SearchEvent.hpp"
#include "../../view/ActionMode.hpp"

namespace __jni_impl::android::service::dreams
{
	// Fields
	QAndroidJniObject DreamService::DREAM_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.dreams.DreamService",
			"DREAM_META_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DreamService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.dreams.DreamService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void DreamService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.dreams.DreamService",
			"()V");
	}
	
	// Methods
	void DreamService::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V");
	}
	QAndroidJniObject DreamService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	void DreamService::wakeUp()
	{
		__thiz.callMethod<void>(
			"wakeUp",
			"()V");
	}
	QAndroidJniObject DreamService::getWindowManager()
	{
		return __thiz.callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;");
	}
	QAndroidJniObject DreamService::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;");
	}
	void DreamService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V");
	}
	void DreamService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V");
	}
	QAndroidJniObject DreamService::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0);
	}
	QAndroidJniObject DreamService::requireViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0);
	}
	void DreamService::setContentView(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(I)V",
			arg0);
	}
	void DreamService::setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DreamService::setContentView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void DreamService::addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DreamService::onWindowAttributesChanged(__jni_impl::android::view::WindowManager_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void DreamService::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V");
	}
	void DreamService::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0);
	}
	void DreamService::onAttachedToWindow()
	{
		__thiz.callMethod<void>(
			"onAttachedToWindow",
			"()V");
	}
	void DreamService::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V");
	}
	jboolean DreamService::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean DreamService::dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean DreamService::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean DreamService::dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean DreamService::dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean DreamService::dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DreamService::onCreatePanelView(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0);
	}
	jboolean DreamService::onCreatePanelMenu(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean DreamService::onPreparePanel(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean DreamService::onMenuOpened(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean DreamService::onMenuItemSelected(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	void DreamService::onPanelClosed(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean DreamService::onSearchRequested()
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"()Z");
	}
	jboolean DreamService::onSearchRequested(__jni_impl::android::view::SearchEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DreamService::onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DreamService::onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object());
	}
	void DreamService::onActionModeStarted(__jni_impl::android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object());
	}
	void DreamService::onActionModeFinished(__jni_impl::android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object());
	}
	void DreamService::setInteractive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setInteractive",
			"(Z)V",
			arg0);
	}
	jboolean DreamService::isInteractive()
	{
		return __thiz.callMethod<jboolean>(
			"isInteractive",
			"()Z");
	}
	void DreamService::setFullscreen(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFullscreen",
			"(Z)V",
			arg0);
	}
	jboolean DreamService::isFullscreen()
	{
		return __thiz.callMethod<jboolean>(
			"isFullscreen",
			"()Z");
	}
	void DreamService::setScreenBright(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScreenBright",
			"(Z)V",
			arg0);
	}
	jboolean DreamService::isScreenBright()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenBright",
			"()Z");
	}
	void DreamService::onDreamingStarted()
	{
		__thiz.callMethod<void>(
			"onDreamingStarted",
			"()V");
	}
	void DreamService::onDreamingStopped()
	{
		__thiz.callMethod<void>(
			"onDreamingStopped",
			"()V");
	}
	void DreamService::onWakeUp()
	{
		__thiz.callMethod<void>(
			"onWakeUp",
			"()V");
	}
} // namespace __jni_impl::android::service::dreams

namespace android::service::dreams
{
	class DreamService : public __jni_impl::android::service::dreams::DreamService
	{
	public:
		DreamService(QAndroidJniObject obj) { __thiz = obj; }
		DreamService()
		{
			__constructor();
		}
	};
} // namespace android::service::dreams

#endif // ANDROID_SERVICE_DREAMS_DREAMSERVICE

