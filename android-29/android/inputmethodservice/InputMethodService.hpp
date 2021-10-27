#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"
#include "./AbstractInputMethodService.hpp"

namespace __jni_impl::android::app
{
	class Dialog;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodImpl;
}
namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodSessionImpl;
}
namespace __jni_impl::android::inputmethodservice
{
	class InputMethodService_Insets;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
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
	class Window;
}
namespace __jni_impl::android::view::inputmethod
{
	class CursorAnchorInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputBinding;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputMethodSubtype;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::inputmethodservice
{
	class InputMethodService : public __jni_impl::android::inputmethodservice::AbstractInputMethodService
	{
	public:
		// Fields
		static jint BACK_DISPOSITION_ADJUST_NOTHING();
		static jint BACK_DISPOSITION_DEFAULT();
		static jint BACK_DISPOSITION_WILL_DISMISS();
		static jint BACK_DISPOSITION_WILL_NOT_DISMISS();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean enableHardwareAcceleration();
		jint getBackDisposition();
		jint getCandidatesHiddenVisibility();
		QAndroidJniObject getCurrentInputBinding();
		QAndroidJniObject getCurrentInputConnection();
		QAndroidJniObject getCurrentInputEditorInfo();
		jboolean getCurrentInputStarted();
		jint getInputMethodWindowRecommendedHeight();
		QAndroidJniObject getLayoutInflater();
		jint getMaxWidth();
		jstring getTextForImeAction(jint arg0);
		QAndroidJniObject getWindow();
		void hideStatusIcon();
		void hideWindow();
		jboolean isExtractViewShown();
		jboolean isFullscreenMode();
		jboolean isInputViewShown();
		jboolean isShowInputRequested();
		void onAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void onBindInput();
		void onComputeInsets(__jni_impl::android::inputmethodservice::InputMethodService_Insets arg0);
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void onConfigureWindow(__jni_impl::android::view::Window arg0, jboolean arg1, jboolean arg2);
		void onCreate();
		QAndroidJniObject onCreateCandidatesView();
		QAndroidJniObject onCreateExtractTextView();
		QAndroidJniObject onCreateInputMethodInterface();
		QAndroidJniObject onCreateInputMethodSessionInterface();
		QAndroidJniObject onCreateInputView();
		void onDestroy();
		void onDisplayCompletions(jarray arg0);
		jboolean onEvaluateFullscreenMode();
		jboolean onEvaluateInputViewShown();
		jboolean onExtractTextContextMenuItem(jint arg0);
		void onExtractedCursorMovement(jint arg0, jint arg1);
		void onExtractedSelectionChanged(jint arg0, jint arg1);
		void onExtractedTextClicked();
		void onExtractingInputChanged(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		void onFinishCandidatesView(jboolean arg0);
		void onFinishInput();
		void onFinishInputView(jboolean arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onInitializeInterface();
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onShowInputRequested(jint arg0, jboolean arg1);
		void onStartCandidatesView(__jni_impl::android::view::inputmethod::EditorInfo arg0, jboolean arg1);
		void onStartInput(__jni_impl::android::view::inputmethod::EditorInfo arg0, jboolean arg1);
		void onStartInputView(__jni_impl::android::view::inputmethod::EditorInfo arg0, jboolean arg1);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		void onUnbindInput();
		void onUpdateCursor(__jni_impl::android::graphics::Rect arg0);
		void onUpdateCursorAnchorInfo(__jni_impl::android::view::inputmethod::CursorAnchorInfo arg0);
		void onUpdateExtractedText(jint arg0, __jni_impl::android::view::inputmethod::ExtractedText arg1);
		void onUpdateExtractingViews(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		void onUpdateExtractingVisibility(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		void onUpdateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void onViewClicked(jboolean arg0);
		void onWindowHidden();
		void onWindowShown();
		void requestHideSelf(jint arg0);
		void requestShowSelf(jint arg0);
		jboolean sendDefaultEditorAction(jboolean arg0);
		void sendDownUpKeyEvents(jint arg0);
		void sendKeyChar(jchar arg0);
		void setBackDisposition(jint arg0);
		void setCandidatesView(__jni_impl::android::view::View arg0);
		void setCandidatesViewShown(jboolean arg0);
		void setExtractView(__jni_impl::android::view::View arg0);
		void setExtractViewShown(jboolean arg0);
		void setInputView(__jni_impl::android::view::View arg0);
		void setTheme(jint arg0);
		jboolean shouldOfferSwitchingToNextInputMethod();
		void showStatusIcon(jint arg0);
		void showWindow(jboolean arg0);
		void switchInputMethod(jstring arg0);
		void switchInputMethod(const QString &arg0);
		void switchInputMethod(jstring arg0, __jni_impl::android::view::inputmethod::InputMethodSubtype arg1);
		void switchInputMethod(const QString &arg0, __jni_impl::android::view::inputmethod::InputMethodSubtype arg1);
		jboolean switchToNextInputMethod(jboolean arg0);
		jboolean switchToPreviousInputMethod();
		void updateFullscreenMode();
		void updateInputViewShown();
	};
} // namespace __jni_impl::android::inputmethodservice

#include "../app/Dialog.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/Rect.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"
#include "./InputMethodService_Insets.hpp"
#include "../os/Bundle.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/Window.hpp"
#include "../view/inputmethod/CursorAnchorInfo.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "../view/inputmethod/InputBinding.hpp"
#include "../view/inputmethod/InputMethodSubtype.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	jint InputMethodService::BACK_DISPOSITION_ADJUST_NOTHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_ADJUST_NOTHING"
		);
	}
	jint InputMethodService::BACK_DISPOSITION_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_DEFAULT"
		);
	}
	jint InputMethodService::BACK_DISPOSITION_WILL_DISMISS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_WILL_DISMISS"
		);
	}
	jint InputMethodService::BACK_DISPOSITION_WILL_NOT_DISMISS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.InputMethodService",
			"BACK_DISPOSITION_WILL_NOT_DISMISS"
		);
	}
	
	// Constructors
	void InputMethodService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.InputMethodService",
			"()V"
		);
	}
	
	// Methods
	jboolean InputMethodService::enableHardwareAcceleration()
	{
		return __thiz.callMethod<jboolean>(
			"enableHardwareAcceleration",
			"()Z"
		);
	}
	jint InputMethodService::getBackDisposition()
	{
		return __thiz.callMethod<jint>(
			"getBackDisposition",
			"()I"
		);
	}
	jint InputMethodService::getCandidatesHiddenVisibility()
	{
		return __thiz.callMethod<jint>(
			"getCandidatesHiddenVisibility",
			"()I"
		);
	}
	QAndroidJniObject InputMethodService::getCurrentInputBinding()
	{
		return __thiz.callObjectMethod(
			"getCurrentInputBinding",
			"()Landroid/view/inputmethod/InputBinding;"
		);
	}
	QAndroidJniObject InputMethodService::getCurrentInputConnection()
	{
		return __thiz.callObjectMethod(
			"getCurrentInputConnection",
			"()Landroid/view/inputmethod/InputConnection;"
		);
	}
	QAndroidJniObject InputMethodService::getCurrentInputEditorInfo()
	{
		return __thiz.callObjectMethod(
			"getCurrentInputEditorInfo",
			"()Landroid/view/inputmethod/EditorInfo;"
		);
	}
	jboolean InputMethodService::getCurrentInputStarted()
	{
		return __thiz.callMethod<jboolean>(
			"getCurrentInputStarted",
			"()Z"
		);
	}
	jint InputMethodService::getInputMethodWindowRecommendedHeight()
	{
		return __thiz.callMethod<jint>(
			"getInputMethodWindowRecommendedHeight",
			"()I"
		);
	}
	QAndroidJniObject InputMethodService::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint InputMethodService::getMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	jstring InputMethodService::getTextForImeAction(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTextForImeAction",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject InputMethodService::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/app/Dialog;"
		);
	}
	void InputMethodService::hideStatusIcon()
	{
		__thiz.callMethod<void>(
			"hideStatusIcon",
			"()V"
		);
	}
	void InputMethodService::hideWindow()
	{
		__thiz.callMethod<void>(
			"hideWindow",
			"()V"
		);
	}
	jboolean InputMethodService::isExtractViewShown()
	{
		return __thiz.callMethod<jboolean>(
			"isExtractViewShown",
			"()Z"
		);
	}
	jboolean InputMethodService::isFullscreenMode()
	{
		return __thiz.callMethod<jboolean>(
			"isFullscreenMode",
			"()Z"
		);
	}
	jboolean InputMethodService::isInputViewShown()
	{
		return __thiz.callMethod<jboolean>(
			"isInputViewShown",
			"()Z"
		);
	}
	jboolean InputMethodService::isShowInputRequested()
	{
		return __thiz.callMethod<jboolean>(
			"isShowInputRequested",
			"()Z"
		);
	}
	void InputMethodService::onAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void InputMethodService::onAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void InputMethodService::onBindInput()
	{
		__thiz.callMethod<void>(
			"onBindInput",
			"()V"
		);
	}
	void InputMethodService::onComputeInsets(__jni_impl::android::inputmethodservice::InputMethodService_Insets arg0)
	{
		__thiz.callMethod<void>(
			"onComputeInsets",
			"(Landroid/inputmethodservice/InputMethodService$Insets;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onConfigureWindow(__jni_impl::android::view::Window arg0, jboolean arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onConfigureWindow",
			"(Landroid/view/Window;ZZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void InputMethodService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	QAndroidJniObject InputMethodService::onCreateCandidatesView()
	{
		return __thiz.callObjectMethod(
			"onCreateCandidatesView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject InputMethodService::onCreateExtractTextView()
	{
		return __thiz.callObjectMethod(
			"onCreateExtractTextView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject InputMethodService::onCreateInputMethodInterface()
	{
		return __thiz.callObjectMethod(
			"onCreateInputMethodInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;"
		);
	}
	QAndroidJniObject InputMethodService::onCreateInputMethodSessionInterface()
	{
		return __thiz.callObjectMethod(
			"onCreateInputMethodSessionInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;"
		);
	}
	QAndroidJniObject InputMethodService::onCreateInputView()
	{
		return __thiz.callObjectMethod(
			"onCreateInputView",
			"()Landroid/view/View;"
		);
	}
	void InputMethodService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void InputMethodService::onDisplayCompletions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"onDisplayCompletions",
			"([Landroid/view/inputmethod/CompletionInfo;)V",
			arg0
		);
	}
	jboolean InputMethodService::onEvaluateFullscreenMode()
	{
		return __thiz.callMethod<jboolean>(
			"onEvaluateFullscreenMode",
			"()Z"
		);
	}
	jboolean InputMethodService::onEvaluateInputViewShown()
	{
		return __thiz.callMethod<jboolean>(
			"onEvaluateInputViewShown",
			"()Z"
		);
	}
	jboolean InputMethodService::onExtractTextContextMenuItem(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onExtractTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	void InputMethodService::onExtractedCursorMovement(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onExtractedCursorMovement",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InputMethodService::onExtractedSelectionChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onExtractedSelectionChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InputMethodService::onExtractedTextClicked()
	{
		__thiz.callMethod<void>(
			"onExtractedTextClicked",
			"()V"
		);
	}
	void InputMethodService::onExtractingInputChanged(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		__thiz.callMethod<void>(
			"onExtractingInputChanged",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onFinishCandidatesView(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onFinishCandidatesView",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::onFinishInput()
	{
		__thiz.callMethod<void>(
			"onFinishInput",
			"()V"
		);
	}
	void InputMethodService::onFinishInputView(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onFinishInputView",
			"(Z)V",
			arg0
		);
	}
	jboolean InputMethodService::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onInitializeInterface()
	{
		__thiz.callMethod<void>(
			"onInitializeInterface",
			"()V"
		);
	}
	jboolean InputMethodService::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean InputMethodService::onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean InputMethodService::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean InputMethodService::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean InputMethodService::onShowInputRequested(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onShowInputRequested",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	void InputMethodService::onStartCandidatesView(__jni_impl::android::view::inputmethod::EditorInfo arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onStartCandidatesView",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void InputMethodService::onStartInput(__jni_impl::android::view::inputmethod::EditorInfo arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onStartInput",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void InputMethodService::onStartInputView(__jni_impl::android::view::inputmethod::EditorInfo arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onStartInputView",
			"(Landroid/view/inputmethod/EditorInfo;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean InputMethodService::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onUnbindInput()
	{
		__thiz.callMethod<void>(
			"onUnbindInput",
			"()V"
		);
	}
	void InputMethodService::onUpdateCursor(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"onUpdateCursor",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onUpdateCursorAnchorInfo(__jni_impl::android::view::inputmethod::CursorAnchorInfo arg0)
	{
		__thiz.callMethod<void>(
			"onUpdateCursorAnchorInfo",
			"(Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onUpdateExtractedText(jint arg0, __jni_impl::android::view::inputmethod::ExtractedText arg1)
	{
		__thiz.callMethod<void>(
			"onUpdateExtractedText",
			"(ILandroid/view/inputmethod/ExtractedText;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void InputMethodService::onUpdateExtractingViews(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		__thiz.callMethod<void>(
			"onUpdateExtractingViews",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onUpdateExtractingVisibility(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		__thiz.callMethod<void>(
			"onUpdateExtractingVisibility",
			"(Landroid/view/inputmethod/EditorInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::onUpdateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"onUpdateSelection",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void InputMethodService::onViewClicked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onViewClicked",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::onWindowHidden()
	{
		__thiz.callMethod<void>(
			"onWindowHidden",
			"()V"
		);
	}
	void InputMethodService::onWindowShown()
	{
		__thiz.callMethod<void>(
			"onWindowShown",
			"()V"
		);
	}
	void InputMethodService::requestHideSelf(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestHideSelf",
			"(I)V",
			arg0
		);
	}
	void InputMethodService::requestShowSelf(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestShowSelf",
			"(I)V",
			arg0
		);
	}
	jboolean InputMethodService::sendDefaultEditorAction(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendDefaultEditorAction",
			"(Z)Z",
			arg0
		);
	}
	void InputMethodService::sendDownUpKeyEvents(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendDownUpKeyEvents",
			"(I)V",
			arg0
		);
	}
	void InputMethodService::sendKeyChar(jchar arg0)
	{
		__thiz.callMethod<void>(
			"sendKeyChar",
			"(C)V",
			arg0
		);
	}
	void InputMethodService::setBackDisposition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBackDisposition",
			"(I)V",
			arg0
		);
	}
	void InputMethodService::setCandidatesView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setCandidatesView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::setCandidatesViewShown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCandidatesViewShown",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::setExtractView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setExtractView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::setExtractViewShown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExtractViewShown",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::setInputView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setInputView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void InputMethodService::setTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	jboolean InputMethodService::shouldOfferSwitchingToNextInputMethod()
	{
		return __thiz.callMethod<jboolean>(
			"shouldOfferSwitchingToNextInputMethod",
			"()Z"
		);
	}
	void InputMethodService::showStatusIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"showStatusIcon",
			"(I)V",
			arg0
		);
	}
	void InputMethodService::showWindow(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"showWindow",
			"(Z)V",
			arg0
		);
	}
	void InputMethodService::switchInputMethod(jstring arg0)
	{
		__thiz.callMethod<void>(
			"switchInputMethod",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputMethodService::switchInputMethod(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"switchInputMethod",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InputMethodService::switchInputMethod(jstring arg0, __jni_impl::android::view::inputmethod::InputMethodSubtype arg1)
	{
		__thiz.callMethod<void>(
			"switchInputMethod",
			"(Ljava/lang/String;Landroid/view/inputmethod/InputMethodSubtype;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void InputMethodService::switchInputMethod(const QString &arg0, __jni_impl::android::view::inputmethod::InputMethodSubtype arg1)
	{
		__thiz.callMethod<void>(
			"switchInputMethod",
			"(Ljava/lang/String;Landroid/view/inputmethod/InputMethodSubtype;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean InputMethodService::switchToNextInputMethod(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"switchToNextInputMethod",
			"(Z)Z",
			arg0
		);
	}
	jboolean InputMethodService::switchToPreviousInputMethod()
	{
		return __thiz.callMethod<jboolean>(
			"switchToPreviousInputMethod",
			"()Z"
		);
	}
	void InputMethodService::updateFullscreenMode()
	{
		__thiz.callMethod<void>(
			"updateFullscreenMode",
			"()V"
		);
	}
	void InputMethodService::updateInputViewShown()
	{
		__thiz.callMethod<void>(
			"updateInputViewShown",
			"()V"
		);
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class InputMethodService : public __jni_impl::android::inputmethodservice::InputMethodService
	{
	public:
		InputMethodService(QAndroidJniObject obj) { __thiz = obj; }
		InputMethodService()
		{
			__constructor();
		}
	};
} // namespace android::inputmethodservice

