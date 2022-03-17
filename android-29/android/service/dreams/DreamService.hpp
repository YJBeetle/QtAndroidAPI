#pragma once

#include "../../../JArray.hpp"
#include "../../content/Intent.def.hpp"
#include "../../view/ActionMode.def.hpp"
#include "../../view/KeyEvent.def.hpp"
#include "../../view/MotionEvent.def.hpp"
#include "../../view/SearchEvent.def.hpp"
#include "../../view/View.def.hpp"
#include "../../view/ViewGroup_LayoutParams.def.hpp"
#include "../../view/Window.def.hpp"
#include "../../view/WindowManager_LayoutParams.def.hpp"
#include "../../view/accessibility/AccessibilityEvent.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "../../../JString.hpp"
#include "./DreamService.def.hpp"

namespace android::service::dreams
{
	// Fields
	inline JString DreamService::DREAM_META_DATA()
	{
		return getStaticObjectField(
			"android.service.dreams.DreamService",
			"DREAM_META_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString DreamService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.dreams.DreamService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline DreamService::DreamService()
		: android::app::Service(
			"android.service.dreams.DreamService",
			"()V"
		) {}
	
	// Methods
	inline void DreamService::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean DreamService::dispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean DreamService::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean DreamService::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean DreamService::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean DreamService::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean DreamService::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline android::view::View DreamService::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void DreamService::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline android::view::Window DreamService::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	inline JObject DreamService::getWindowManager() const
	{
		return callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	inline jboolean DreamService::isFullscreen() const
	{
		return callMethod<jboolean>(
			"isFullscreen",
			"()Z"
		);
	}
	inline jboolean DreamService::isInteractive() const
	{
		return callMethod<jboolean>(
			"isInteractive",
			"()Z"
		);
	}
	inline jboolean DreamService::isScreenBright() const
	{
		return callMethod<jboolean>(
			"isScreenBright",
			"()Z"
		);
	}
	inline void DreamService::onActionModeFinished(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	inline void DreamService::onActionModeStarted(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	inline void DreamService::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	inline JObject DreamService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void DreamService::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	inline void DreamService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline jboolean DreamService::onCreatePanelMenu(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	inline android::view::View DreamService::onCreatePanelView(jint arg0) const
	{
		return callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void DreamService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void DreamService::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	inline void DreamService::onDreamingStarted() const
	{
		callMethod<void>(
			"onDreamingStarted",
			"()V"
		);
	}
	inline void DreamService::onDreamingStopped() const
	{
		callMethod<void>(
			"onDreamingStopped",
			"()V"
		);
	}
	inline jboolean DreamService::onMenuItemSelected(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean DreamService::onMenuOpened(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void DreamService::onPanelClosed(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean DreamService::onPreparePanel(jint arg0, android::view::View arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean DreamService::onSearchRequested() const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	inline jboolean DreamService::onSearchRequested(android::view::SearchEvent arg0) const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.object()
		);
	}
	inline void DreamService::onWakeUp() const
	{
		callMethod<void>(
			"onWakeUp",
			"()V"
		);
	}
	inline void DreamService::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0) const
	{
		callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	inline void DreamService::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline android::view::ActionMode DreamService::onWindowStartingActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	inline android::view::ActionMode DreamService::onWindowStartingActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::View DreamService::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void DreamService::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void DreamService::setContentView(jint arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	inline void DreamService::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DreamService::setFullscreen(jboolean arg0) const
	{
		callMethod<void>(
			"setFullscreen",
			"(Z)V",
			arg0
		);
	}
	inline void DreamService::setInteractive(jboolean arg0) const
	{
		callMethod<void>(
			"setInteractive",
			"(Z)V",
			arg0
		);
	}
	inline void DreamService::setScreenBright(jboolean arg0) const
	{
		callMethod<void>(
			"setScreenBright",
			"(Z)V",
			arg0
		);
	}
	inline void DreamService::wakeUp() const
	{
		callMethod<void>(
			"wakeUp",
			"()V"
		);
	}
} // namespace android::service::dreams

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

