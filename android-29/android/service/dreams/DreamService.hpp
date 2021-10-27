#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::view
{
	class ActionMode;
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
	class SearchEvent;
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
	class Window;
}
namespace __jni_impl::android::view
{
	class WindowManager_LayoutParams;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::service::dreams
{
	class DreamService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring DREAM_META_DATA();
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		jboolean dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		jboolean dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		QAndroidJniObject findViewById(jint arg0);
		void finish();
		QAndroidJniObject getWindow();
		QAndroidJniObject getWindowManager();
		jboolean isFullscreen();
		jboolean isInteractive();
		jboolean isScreenBright();
		void onActionModeFinished(__jni_impl::android::view::ActionMode arg0);
		void onActionModeStarted(__jni_impl::android::view::ActionMode arg0);
		void onAttachedToWindow();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onContentChanged();
		void onCreate();
		jboolean onCreatePanelMenu(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject onCreatePanelView(jint arg0);
		void onDestroy();
		void onDetachedFromWindow();
		void onDreamingStarted();
		void onDreamingStopped();
		jboolean onMenuItemSelected(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onMenuOpened(jint arg0, __jni_impl::__JniBaseClass arg1);
		void onPanelClosed(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onPreparePanel(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2);
		jboolean onSearchRequested();
		jboolean onSearchRequested(__jni_impl::android::view::SearchEvent arg0);
		void onWakeUp();
		void onWindowAttributesChanged(__jni_impl::android::view::WindowManager_LayoutParams arg0);
		void onWindowFocusChanged(jboolean arg0);
		QAndroidJniObject onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject requireViewById(jint arg0);
		void setContentView(__jni_impl::android::view::View arg0);
		void setContentView(jint arg0);
		void setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void setFullscreen(jboolean arg0);
		void setInteractive(jboolean arg0);
		void setScreenBright(jboolean arg0);
		void wakeUp();
	};
} // namespace __jni_impl::android::service::dreams

#include "../../content/Intent.hpp"
#include "../../view/ActionMode.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/SearchEvent.hpp"
#include "../../view/View.hpp"
#include "../../view/ViewGroup_LayoutParams.hpp"
#include "../../view/Window.hpp"
#include "../../view/WindowManager_LayoutParams.hpp"
#include "../../view/accessibility/AccessibilityEvent.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::service::dreams
{
	// Fields
	jstring DreamService::DREAM_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.dreams.DreamService",
			"DREAM_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DreamService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.dreams.DreamService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void DreamService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.dreams.DreamService",
			"()V"
		);
	}
	
	// Methods
	void DreamService::addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DreamService::dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DreamService::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DreamService::dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DreamService::dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DreamService::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DreamService::dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DreamService::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void DreamService::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	QAndroidJniObject DreamService::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	QAndroidJniObject DreamService::getWindowManager()
	{
		return __thiz.callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	jboolean DreamService::isFullscreen()
	{
		return __thiz.callMethod<jboolean>(
			"isFullscreen",
			"()Z"
		);
	}
	jboolean DreamService::isInteractive()
	{
		return __thiz.callMethod<jboolean>(
			"isInteractive",
			"()Z"
		);
	}
	jboolean DreamService::isScreenBright()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenBright",
			"()Z"
		);
	}
	void DreamService::onActionModeFinished(__jni_impl::android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object()
		);
	}
	void DreamService::onActionModeStarted(__jni_impl::android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object()
		);
	}
	void DreamService::onAttachedToWindow()
	{
		__thiz.callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	QAndroidJniObject DreamService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void DreamService::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void DreamService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	jboolean DreamService::onCreatePanelMenu(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DreamService::onCreatePanelView(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void DreamService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void DreamService::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	void DreamService::onDreamingStarted()
	{
		__thiz.callMethod<void>(
			"onDreamingStarted",
			"()V"
		);
	}
	void DreamService::onDreamingStopped()
	{
		__thiz.callMethod<void>(
			"onDreamingStopped",
			"()V"
		);
	}
	jboolean DreamService::onMenuItemSelected(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean DreamService::onMenuOpened(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DreamService::onPanelClosed(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean DreamService::onPreparePanel(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean DreamService::onSearchRequested()
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	jboolean DreamService::onSearchRequested(__jni_impl::android::view::SearchEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void DreamService::onWakeUp()
	{
		__thiz.callMethod<void>(
			"onWakeUp",
			"()V"
		);
	}
	void DreamService::onWindowAttributesChanged(__jni_impl::android::view::WindowManager_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void DreamService::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject DreamService::onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DreamService::onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DreamService::requireViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void DreamService::setContentView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void DreamService::setContentView(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void DreamService::setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DreamService::setFullscreen(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFullscreen",
			"(Z)V",
			arg0
		);
	}
	void DreamService::setInteractive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setInteractive",
			"(Z)V",
			arg0
		);
	}
	void DreamService::setScreenBright(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScreenBright",
			"(Z)V",
			arg0
		);
	}
	void DreamService::wakeUp()
	{
		__thiz.callMethod<void>(
			"wakeUp",
			"()V"
		);
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

