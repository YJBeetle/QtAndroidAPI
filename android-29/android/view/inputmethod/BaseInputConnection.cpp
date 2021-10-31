#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "../KeyEvent.hpp"
#include "../View.hpp"
#include "./CompletionInfo.hpp"
#include "./CorrectionInfo.hpp"
#include "./ExtractedText.hpp"
#include "./ExtractedTextRequest.hpp"
#include "./InputContentInfo.hpp"
#include "./BaseInputConnection.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	BaseInputConnection::BaseInputConnection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BaseInputConnection::BaseInputConnection(android::view::View arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.BaseInputConnection",
			"(Landroid/view/View;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint BaseInputConnection::getComposingSpanEnd(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.inputmethod.BaseInputConnection",
			"getComposingSpanEnd",
			"(Landroid/text/Spannable;)I",
			arg0.__jniObject().object()
		);
	}
	jint BaseInputConnection::getComposingSpanStart(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.inputmethod.BaseInputConnection",
			"getComposingSpanStart",
			"(Landroid/text/Spannable;)I",
			arg0.__jniObject().object()
		);
	}
	void BaseInputConnection::removeComposingSpans(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.inputmethod.BaseInputConnection",
			"removeComposingSpans",
			"(Landroid/text/Spannable;)V",
			arg0.__jniObject().object()
		);
	}
	void BaseInputConnection::setComposingSpans(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.inputmethod.BaseInputConnection",
			"setComposingSpans",
			"(Landroid/text/Spannable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BaseInputConnection::beginBatchEdit()
	{
		return __thiz.callMethod<jboolean>(
			"beginBatchEdit",
			"()Z"
		);
	}
	jboolean BaseInputConnection::clearMetaKeyStates(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clearMetaKeyStates",
			"(I)Z",
			arg0
		);
	}
	void BaseInputConnection::closeConnection()
	{
		__thiz.callMethod<void>(
			"closeConnection",
			"()V"
		);
	}
	jboolean BaseInputConnection::commitCompletion(android::view::inputmethod::CompletionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"commitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BaseInputConnection::commitContent(android::view::inputmethod::InputContentInfo arg0, jint arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"commitContent",
			"(Landroid/view/inputmethod/InputContentInfo;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean BaseInputConnection::commitCorrection(android::view::inputmethod::CorrectionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"commitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BaseInputConnection::commitText(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"commitText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0,
			arg1
		);
	}
	jboolean BaseInputConnection::deleteSurroundingText(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"deleteSurroundingText",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean BaseInputConnection::deleteSurroundingTextInCodePoints(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"deleteSurroundingTextInCodePoints",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean BaseInputConnection::endBatchEdit()
	{
		return __thiz.callMethod<jboolean>(
			"endBatchEdit",
			"()Z"
		);
	}
	jboolean BaseInputConnection::finishComposingText()
	{
		return __thiz.callMethod<jboolean>(
			"finishComposingText",
			"()Z"
		);
	}
	jint BaseInputConnection::getCursorCapsMode(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getCursorCapsMode",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject BaseInputConnection::getEditable()
	{
		return __thiz.callObjectMethod(
			"getEditable",
			"()Landroid/text/Editable;"
		);
	}
	QAndroidJniObject BaseInputConnection::getExtractedText(android::view::inputmethod::ExtractedTextRequest arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getExtractedText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject BaseInputConnection::getHandler()
	{
		return __thiz.callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	jstring BaseInputConnection::getSelectedText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSelectedText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring BaseInputConnection::getTextAfterCursor(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getTextAfterCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring BaseInputConnection::getTextBeforeCursor(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getTextBeforeCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jboolean BaseInputConnection::performContextMenuAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performContextMenuAction",
			"(I)Z",
			arg0
		);
	}
	jboolean BaseInputConnection::performEditorAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performEditorAction",
			"(I)Z",
			arg0
		);
	}
	jboolean BaseInputConnection::performPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean BaseInputConnection::reportFullscreenMode(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"reportFullscreenMode",
			"(Z)Z",
			arg0
		);
	}
	jboolean BaseInputConnection::requestCursorUpdates(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestCursorUpdates",
			"(I)Z",
			arg0
		);
	}
	jboolean BaseInputConnection::sendKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BaseInputConnection::setComposingRegion(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setComposingRegion",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean BaseInputConnection::setComposingText(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setComposingText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0,
			arg1
		);
	}
	jboolean BaseInputConnection::setSelection(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setSelection",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::view::inputmethod

