#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "../KeyEvent.hpp"
#include "./CompletionInfo.hpp"
#include "./CorrectionInfo.hpp"
#include "./ExtractedText.hpp"
#include "./ExtractedTextRequest.hpp"
#include "./InputContentInfo.hpp"
#include "./SurroundingText.hpp"
#include "./InputConnectionWrapper.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// QJniObject forward
	InputConnectionWrapper::InputConnectionWrapper(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputConnectionWrapper::InputConnectionWrapper(JObject arg0, jboolean arg1)
		: JObject(
			"android.view.inputmethod.InputConnectionWrapper",
			"(Landroid/view/inputmethod/InputConnection;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean InputConnectionWrapper::beginBatchEdit()
	{
		return callMethod<jboolean>(
			"beginBatchEdit",
			"()Z"
		);
	}
	jboolean InputConnectionWrapper::clearMetaKeyStates(jint arg0)
	{
		return callMethod<jboolean>(
			"clearMetaKeyStates",
			"(I)Z",
			arg0
		);
	}
	void InputConnectionWrapper::closeConnection()
	{
		callMethod<void>(
			"closeConnection",
			"()V"
		);
	}
	jboolean InputConnectionWrapper::commitCompletion(android::view::inputmethod::CompletionInfo arg0)
	{
		return callMethod<jboolean>(
			"commitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)Z",
			arg0.object()
		);
	}
	jboolean InputConnectionWrapper::commitContent(android::view::inputmethod::InputContentInfo arg0, jint arg1, android::os::Bundle arg2)
	{
		return callMethod<jboolean>(
			"commitContent",
			"(Landroid/view/inputmethod/InputContentInfo;ILandroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean InputConnectionWrapper::commitCorrection(android::view::inputmethod::CorrectionInfo arg0)
	{
		return callMethod<jboolean>(
			"commitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)Z",
			arg0.object()
		);
	}
	jboolean InputConnectionWrapper::commitText(jstring arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"commitText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::deleteSurroundingText(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"deleteSurroundingText",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::deleteSurroundingTextInCodePoints(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"deleteSurroundingTextInCodePoints",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::endBatchEdit()
	{
		return callMethod<jboolean>(
			"endBatchEdit",
			"()Z"
		);
	}
	jboolean InputConnectionWrapper::finishComposingText()
	{
		return callMethod<jboolean>(
			"finishComposingText",
			"()Z"
		);
	}
	jint InputConnectionWrapper::getCursorCapsMode(jint arg0)
	{
		return callMethod<jint>(
			"getCursorCapsMode",
			"(I)I",
			arg0
		);
	}
	android::view::inputmethod::ExtractedText InputConnectionWrapper::getExtractedText(android::view::inputmethod::ExtractedTextRequest arg0, jint arg1)
	{
		return callObjectMethod(
			"getExtractedText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;",
			arg0.object(),
			arg1
		);
	}
	android::os::Handler InputConnectionWrapper::getHandler()
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	jstring InputConnectionWrapper::getSelectedText(jint arg0)
	{
		return callObjectMethod(
			"getSelectedText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	android::view::inputmethod::SurroundingText InputConnectionWrapper::getSurroundingText(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"getSurroundingText",
			"(III)Landroid/view/inputmethod/SurroundingText;",
			arg0,
			arg1,
			arg2
		);
	}
	jstring InputConnectionWrapper::getTextAfterCursor(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getTextAfterCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring InputConnectionWrapper::getTextBeforeCursor(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getTextBeforeCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jboolean InputConnectionWrapper::performContextMenuAction(jint arg0)
	{
		return callMethod<jboolean>(
			"performContextMenuAction",
			"(I)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::performEditorAction(jint arg0)
	{
		return callMethod<jboolean>(
			"performEditorAction",
			"(I)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::performPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		return callMethod<jboolean>(
			"performPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean InputConnectionWrapper::performSpellCheck()
	{
		return callMethod<jboolean>(
			"performSpellCheck",
			"()Z"
		);
	}
	jboolean InputConnectionWrapper::reportFullscreenMode(jboolean arg0)
	{
		return callMethod<jboolean>(
			"reportFullscreenMode",
			"(Z)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::requestCursorUpdates(jint arg0)
	{
		return callMethod<jboolean>(
			"requestCursorUpdates",
			"(I)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::sendKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"sendKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean InputConnectionWrapper::setComposingRegion(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"setComposingRegion",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::setComposingText(jstring arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"setComposingText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0,
			arg1
		);
	}
	jboolean InputConnectionWrapper::setImeConsumesInput(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setImeConsumesInput",
			"(Z)Z",
			arg0
		);
	}
	jboolean InputConnectionWrapper::setSelection(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"setSelection",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void InputConnectionWrapper::setTarget(JObject arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Landroid/view/inputmethod/InputConnection;)V",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

