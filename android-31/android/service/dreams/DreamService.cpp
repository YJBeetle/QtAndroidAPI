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
#include "./DreamService.hpp"

namespace android::service::dreams
{
	// Fields
	jstring DreamService::DREAM_META_DATA()
	{
		return getStaticObjectField(
			"android.service.dreams.DreamService",
			"DREAM_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DreamService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.dreams.DreamService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	DreamService::DreamService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	DreamService::DreamService()
		: android::app::Service(
			"android.service.dreams.DreamService",
			"()V"
		) {}
	
	// Methods
	void DreamService::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DreamService::dispatchGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean DreamService::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean DreamService::dispatchKeyShortcutEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean DreamService::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	jboolean DreamService::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean DreamService::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	android::view::View DreamService::findViewById(jint arg0)
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void DreamService::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	android::view::Window DreamService::getWindow()
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	__JniBaseClass DreamService::getWindowManager()
	{
		return callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	jboolean DreamService::isFullscreen()
	{
		return callMethod<jboolean>(
			"isFullscreen",
			"()Z"
		);
	}
	jboolean DreamService::isInteractive()
	{
		return callMethod<jboolean>(
			"isInteractive",
			"()Z"
		);
	}
	jboolean DreamService::isScreenBright()
	{
		return callMethod<jboolean>(
			"isScreenBright",
			"()Z"
		);
	}
	void DreamService::onActionModeFinished(android::view::ActionMode arg0)
	{
		callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	void DreamService::onActionModeStarted(android::view::ActionMode arg0)
	{
		callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	void DreamService::onAttachedToWindow()
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	__JniBaseClass DreamService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void DreamService::onContentChanged()
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void DreamService::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	jboolean DreamService::onCreatePanelMenu(jint arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	android::view::View DreamService::onCreatePanelView(jint arg0)
	{
		return callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void DreamService::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void DreamService::onDetachedFromWindow()
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	void DreamService::onDreamingStarted()
	{
		callMethod<void>(
			"onDreamingStarted",
			"()V"
		);
	}
	void DreamService::onDreamingStopped()
	{
		callMethod<void>(
			"onDreamingStopped",
			"()V"
		);
	}
	jboolean DreamService::onMenuItemSelected(jint arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean DreamService::onMenuOpened(jint arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	void DreamService::onPanelClosed(jint arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean DreamService::onPreparePanel(jint arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		return callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jboolean DreamService::onSearchRequested()
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	jboolean DreamService::onSearchRequested(android::view::SearchEvent arg0)
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.object()
		);
	}
	void DreamService::onWakeUp()
	{
		callMethod<void>(
			"onWakeUp",
			"()V"
		);
	}
	void DreamService::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0)
	{
		callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	void DreamService::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	android::view::ActionMode DreamService::onWindowStartingActionMode(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	android::view::ActionMode DreamService::onWindowStartingActionMode(__JniBaseClass arg0, jint arg1)
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	android::view::View DreamService::requireViewById(jint arg0)
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void DreamService::setContentView(android::view::View arg0)
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void DreamService::setContentView(jint arg0)
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void DreamService::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DreamService::setFullscreen(jboolean arg0)
	{
		callMethod<void>(
			"setFullscreen",
			"(Z)V",
			arg0
		);
	}
	void DreamService::setInteractive(jboolean arg0)
	{
		callMethod<void>(
			"setInteractive",
			"(Z)V",
			arg0
		);
	}
	void DreamService::setScreenBright(jboolean arg0)
	{
		callMethod<void>(
			"setScreenBright",
			"(Z)V",
			arg0
		);
	}
	void DreamService::wakeUp()
	{
		callMethod<void>(
			"wakeUp",
			"()V"
		);
	}
} // namespace android::service::dreams

