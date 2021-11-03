#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
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
	class InputContentInfo;
}
class JString;
class JString;

namespace android::view::inputmethod
{
	class BaseInputConnection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BaseInputConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseInputConnection(QJniObject obj);
		
		// Constructors
		BaseInputConnection(android::view::View arg0, jboolean arg1);
		
		// Methods
		static jint getComposingSpanEnd(JObject arg0);
		static jint getComposingSpanStart(JObject arg0);
		static void removeComposingSpans(JObject arg0);
		static void setComposingSpans(JObject arg0);
		jboolean beginBatchEdit();
		jboolean clearMetaKeyStates(jint arg0);
		void closeConnection();
		jboolean commitCompletion(android::view::inputmethod::CompletionInfo arg0);
		jboolean commitContent(android::view::inputmethod::InputContentInfo arg0, jint arg1, android::os::Bundle arg2);
		jboolean commitCorrection(android::view::inputmethod::CorrectionInfo arg0);
		jboolean commitText(JString arg0, jint arg1);
		jboolean deleteSurroundingText(jint arg0, jint arg1);
		jboolean deleteSurroundingTextInCodePoints(jint arg0, jint arg1);
		jboolean endBatchEdit();
		jboolean finishComposingText();
		jint getCursorCapsMode(jint arg0);
		JObject getEditable();
		android::view::inputmethod::ExtractedText getExtractedText(android::view::inputmethod::ExtractedTextRequest arg0, jint arg1);
		android::os::Handler getHandler();
		JString getSelectedText(jint arg0);
		JString getTextAfterCursor(jint arg0, jint arg1);
		JString getTextBeforeCursor(jint arg0, jint arg1);
		jboolean performContextMenuAction(jint arg0);
		jboolean performEditorAction(jint arg0);
		jboolean performPrivateCommand(JString arg0, android::os::Bundle arg1);
		jboolean reportFullscreenMode(jboolean arg0);
		jboolean requestCursorUpdates(jint arg0);
		jboolean sendKeyEvent(android::view::KeyEvent arg0);
		jboolean setComposingRegion(jint arg0, jint arg1);
		jboolean setComposingText(JString arg0, jint arg1);
		jboolean setSelection(jint arg0, jint arg1);
	};
} // namespace android::view::inputmethod

