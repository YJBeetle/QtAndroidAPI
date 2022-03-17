#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../KeyEvent.def.hpp"
#include "./CompletionInfo.def.hpp"
#include "./CorrectionInfo.def.hpp"
#include "./ExtractedText.def.hpp"
#include "./ExtractedTextRequest.def.hpp"
#include "./InputContentInfo.def.hpp"
#include "./SurroundingText.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./InputConnectionWrapper.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline InputConnectionWrapper::InputConnectionWrapper(JObject arg0, jboolean arg1)
		: JObject(
			"android.view.inputmethod.InputConnectionWrapper",
			"(Landroid/view/inputmethod/InputConnection;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jboolean InputConnectionWrapper::beginBatchEdit() const
	{
		return callMethod<jboolean>(
			"beginBatchEdit",
			"()Z"
		);
	}
	inline jboolean InputConnectionWrapper::clearMetaKeyStates(jint arg0) const
	{
		return callMethod<jboolean>(
			"clearMetaKeyStates",
			"(I)Z",
			arg0
		);
	}
	inline void InputConnectionWrapper::closeConnection() const
	{
		callMethod<void>(
			"closeConnection",
			"()V"
		);
	}
	inline jboolean InputConnectionWrapper::commitCompletion(android::view::inputmethod::CompletionInfo arg0) const
	{
		return callMethod<jboolean>(
			"commitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)Z",
			arg0.object()
		);
	}
	inline jboolean InputConnectionWrapper::commitContent(android::view::inputmethod::InputContentInfo arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"commitContent",
			"(Landroid/view/inputmethod/InputContentInfo;ILandroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean InputConnectionWrapper::commitCorrection(android::view::inputmethod::CorrectionInfo arg0) const
	{
		return callMethod<jboolean>(
			"commitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)Z",
			arg0.object()
		);
	}
	inline jboolean InputConnectionWrapper::commitText(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"commitText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean InputConnectionWrapper::deleteSurroundingText(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"deleteSurroundingText",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean InputConnectionWrapper::deleteSurroundingTextInCodePoints(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"deleteSurroundingTextInCodePoints",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean InputConnectionWrapper::endBatchEdit() const
	{
		return callMethod<jboolean>(
			"endBatchEdit",
			"()Z"
		);
	}
	inline jboolean InputConnectionWrapper::finishComposingText() const
	{
		return callMethod<jboolean>(
			"finishComposingText",
			"()Z"
		);
	}
	inline jint InputConnectionWrapper::getCursorCapsMode(jint arg0) const
	{
		return callMethod<jint>(
			"getCursorCapsMode",
			"(I)I",
			arg0
		);
	}
	inline android::view::inputmethod::ExtractedText InputConnectionWrapper::getExtractedText(android::view::inputmethod::ExtractedTextRequest arg0, jint arg1) const
	{
		return callObjectMethod(
			"getExtractedText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;",
			arg0.object(),
			arg1
		);
	}
	inline android::os::Handler InputConnectionWrapper::getHandler() const
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	inline JString InputConnectionWrapper::getSelectedText(jint arg0) const
	{
		return callObjectMethod(
			"getSelectedText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline android::view::inputmethod::SurroundingText InputConnectionWrapper::getSurroundingText(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"getSurroundingText",
			"(III)Landroid/view/inputmethod/SurroundingText;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JString InputConnectionWrapper::getTextAfterCursor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getTextAfterCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString InputConnectionWrapper::getTextBeforeCursor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getTextBeforeCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline jboolean InputConnectionWrapper::performContextMenuAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performContextMenuAction",
			"(I)Z",
			arg0
		);
	}
	inline jboolean InputConnectionWrapper::performEditorAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performEditorAction",
			"(I)Z",
			arg0
		);
	}
	inline jboolean InputConnectionWrapper::performPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"performPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean InputConnectionWrapper::performSpellCheck() const
	{
		return callMethod<jboolean>(
			"performSpellCheck",
			"()Z"
		);
	}
	inline jboolean InputConnectionWrapper::reportFullscreenMode(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"reportFullscreenMode",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean InputConnectionWrapper::requestCursorUpdates(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestCursorUpdates",
			"(I)Z",
			arg0
		);
	}
	inline jboolean InputConnectionWrapper::sendKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"sendKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean InputConnectionWrapper::setComposingRegion(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setComposingRegion",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean InputConnectionWrapper::setComposingText(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setComposingText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean InputConnectionWrapper::setImeConsumesInput(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setImeConsumesInput",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean InputConnectionWrapper::setSelection(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setSelection",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void InputConnectionWrapper::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Landroid/view/inputmethod/InputConnection;)V",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

