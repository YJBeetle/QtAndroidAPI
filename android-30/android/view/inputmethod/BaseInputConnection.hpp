#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../KeyEvent.def.hpp"
#include "../View.def.hpp"
#include "./CompletionInfo.def.hpp"
#include "./CorrectionInfo.def.hpp"
#include "./ExtractedText.def.hpp"
#include "./ExtractedTextRequest.def.hpp"
#include "./InputContentInfo.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./BaseInputConnection.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline BaseInputConnection::BaseInputConnection(android::view::View arg0, jboolean arg1)
		: JObject(
			"android.view.inputmethod.BaseInputConnection",
			"(Landroid/view/View;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint BaseInputConnection::getComposingSpanEnd(JObject arg0)
	{
		return callStaticMethod<jint>(
			"android.view.inputmethod.BaseInputConnection",
			"getComposingSpanEnd",
			"(Landroid/text/Spannable;)I",
			arg0.object()
		);
	}
	inline jint BaseInputConnection::getComposingSpanStart(JObject arg0)
	{
		return callStaticMethod<jint>(
			"android.view.inputmethod.BaseInputConnection",
			"getComposingSpanStart",
			"(Landroid/text/Spannable;)I",
			arg0.object()
		);
	}
	inline void BaseInputConnection::removeComposingSpans(JObject arg0)
	{
		callStaticMethod<void>(
			"android.view.inputmethod.BaseInputConnection",
			"removeComposingSpans",
			"(Landroid/text/Spannable;)V",
			arg0.object()
		);
	}
	inline void BaseInputConnection::setComposingSpans(JObject arg0)
	{
		callStaticMethod<void>(
			"android.view.inputmethod.BaseInputConnection",
			"setComposingSpans",
			"(Landroid/text/Spannable;)V",
			arg0.object()
		);
	}
	inline jboolean BaseInputConnection::beginBatchEdit() const
	{
		return callMethod<jboolean>(
			"beginBatchEdit",
			"()Z"
		);
	}
	inline jboolean BaseInputConnection::clearMetaKeyStates(jint arg0) const
	{
		return callMethod<jboolean>(
			"clearMetaKeyStates",
			"(I)Z",
			arg0
		);
	}
	inline void BaseInputConnection::closeConnection() const
	{
		callMethod<void>(
			"closeConnection",
			"()V"
		);
	}
	inline jboolean BaseInputConnection::commitCompletion(android::view::inputmethod::CompletionInfo arg0) const
	{
		return callMethod<jboolean>(
			"commitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)Z",
			arg0.object()
		);
	}
	inline jboolean BaseInputConnection::commitContent(android::view::inputmethod::InputContentInfo arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"commitContent",
			"(Landroid/view/inputmethod/InputContentInfo;ILandroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean BaseInputConnection::commitCorrection(android::view::inputmethod::CorrectionInfo arg0) const
	{
		return callMethod<jboolean>(
			"commitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)Z",
			arg0.object()
		);
	}
	inline jboolean BaseInputConnection::commitText(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"commitText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean BaseInputConnection::deleteSurroundingText(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"deleteSurroundingText",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean BaseInputConnection::deleteSurroundingTextInCodePoints(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"deleteSurroundingTextInCodePoints",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean BaseInputConnection::endBatchEdit() const
	{
		return callMethod<jboolean>(
			"endBatchEdit",
			"()Z"
		);
	}
	inline jboolean BaseInputConnection::finishComposingText() const
	{
		return callMethod<jboolean>(
			"finishComposingText",
			"()Z"
		);
	}
	inline jint BaseInputConnection::getCursorCapsMode(jint arg0) const
	{
		return callMethod<jint>(
			"getCursorCapsMode",
			"(I)I",
			arg0
		);
	}
	inline JObject BaseInputConnection::getEditable() const
	{
		return callObjectMethod(
			"getEditable",
			"()Landroid/text/Editable;"
		);
	}
	inline android::view::inputmethod::ExtractedText BaseInputConnection::getExtractedText(android::view::inputmethod::ExtractedTextRequest arg0, jint arg1) const
	{
		return callObjectMethod(
			"getExtractedText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;",
			arg0.object(),
			arg1
		);
	}
	inline android::os::Handler BaseInputConnection::getHandler() const
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	inline JString BaseInputConnection::getSelectedText(jint arg0) const
	{
		return callObjectMethod(
			"getSelectedText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline JString BaseInputConnection::getTextAfterCursor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getTextAfterCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString BaseInputConnection::getTextBeforeCursor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getTextBeforeCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline jboolean BaseInputConnection::performContextMenuAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performContextMenuAction",
			"(I)Z",
			arg0
		);
	}
	inline jboolean BaseInputConnection::performEditorAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performEditorAction",
			"(I)Z",
			arg0
		);
	}
	inline jboolean BaseInputConnection::performPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"performPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean BaseInputConnection::reportFullscreenMode(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"reportFullscreenMode",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean BaseInputConnection::requestCursorUpdates(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestCursorUpdates",
			"(I)Z",
			arg0
		);
	}
	inline jboolean BaseInputConnection::sendKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"sendKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean BaseInputConnection::setComposingRegion(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setComposingRegion",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean BaseInputConnection::setComposingText(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setComposingText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean BaseInputConnection::setSelection(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setSelection",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

