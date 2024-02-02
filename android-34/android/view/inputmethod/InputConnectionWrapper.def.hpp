#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class RectF;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view::inputmethod
{
	class CompletionInfo;
}
namespace android::view::inputmethod
{
	class CorrectionInfo;
}
namespace android::view::inputmethod
{
	class ExtractedText;
}
namespace android::view::inputmethod
{
	class ExtractedTextRequest;
}
namespace android::view::inputmethod
{
	class HandwritingGesture;
}
namespace android::view::inputmethod
{
	class InputContentInfo;
}
namespace android::view::inputmethod
{
	class PreviewableHandwritingGesture;
}
namespace android::view::inputmethod
{
	class SurroundingText;
}
namespace android::view::inputmethod
{
	class TextAttribute;
}
namespace android::view::inputmethod
{
	class TextSnapshot;
}
class JString;
class JString;

namespace android::view::inputmethod
{
	class InputConnectionWrapper : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputConnectionWrapper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputConnectionWrapper(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputConnectionWrapper(JObject arg0, jboolean arg1);
		
		// Methods
		jboolean beginBatchEdit() const;
		jboolean clearMetaKeyStates(jint arg0) const;
		void closeConnection() const;
		jboolean commitCompletion(android::view::inputmethod::CompletionInfo arg0) const;
		jboolean commitContent(android::view::inputmethod::InputContentInfo arg0, jint arg1, android::os::Bundle arg2) const;
		jboolean commitCorrection(android::view::inputmethod::CorrectionInfo arg0) const;
		jboolean commitText(JString arg0, jint arg1) const;
		jboolean commitText(JString arg0, jint arg1, android::view::inputmethod::TextAttribute arg2) const;
		jboolean deleteSurroundingText(jint arg0, jint arg1) const;
		jboolean deleteSurroundingTextInCodePoints(jint arg0, jint arg1) const;
		jboolean endBatchEdit() const;
		jboolean finishComposingText() const;
		jint getCursorCapsMode(jint arg0) const;
		android::view::inputmethod::ExtractedText getExtractedText(android::view::inputmethod::ExtractedTextRequest arg0, jint arg1) const;
		android::os::Handler getHandler() const;
		JString getSelectedText(jint arg0) const;
		android::view::inputmethod::SurroundingText getSurroundingText(jint arg0, jint arg1, jint arg2) const;
		JString getTextAfterCursor(jint arg0, jint arg1) const;
		JString getTextBeforeCursor(jint arg0, jint arg1) const;
		jboolean performContextMenuAction(jint arg0) const;
		jboolean performEditorAction(jint arg0) const;
		void performHandwritingGesture(android::view::inputmethod::HandwritingGesture arg0, JObject arg1, JObject arg2) const;
		jboolean performPrivateCommand(JString arg0, android::os::Bundle arg1) const;
		jboolean performSpellCheck() const;
		jboolean previewHandwritingGesture(android::view::inputmethod::PreviewableHandwritingGesture arg0, android::os::CancellationSignal arg1) const;
		jboolean replaceText(jint arg0, jint arg1, JString arg2, jint arg3, android::view::inputmethod::TextAttribute arg4) const;
		jboolean reportFullscreenMode(jboolean arg0) const;
		jboolean requestCursorUpdates(jint arg0) const;
		jboolean requestCursorUpdates(jint arg0, jint arg1) const;
		void requestTextBoundsInfo(android::graphics::RectF arg0, JObject arg1, JObject arg2) const;
		jboolean sendKeyEvent(android::view::KeyEvent arg0) const;
		jboolean setComposingRegion(jint arg0, jint arg1) const;
		jboolean setComposingRegion(jint arg0, jint arg1, android::view::inputmethod::TextAttribute arg2) const;
		jboolean setComposingText(JString arg0, jint arg1) const;
		jboolean setComposingText(JString arg0, jint arg1, android::view::inputmethod::TextAttribute arg2) const;
		jboolean setImeConsumesInput(jboolean arg0) const;
		jboolean setSelection(jint arg0, jint arg1) const;
		void setTarget(JObject arg0) const;
		android::view::inputmethod::TextSnapshot takeSnapshot() const;
	};
} // namespace android::view::inputmethod

