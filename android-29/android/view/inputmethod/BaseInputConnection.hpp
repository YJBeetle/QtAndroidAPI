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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseInputConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseInputConnection(QAndroidJniObject obj);
		
		// Constructors
		BaseInputConnection(android::view::View arg0, jboolean arg1);
		
		// Methods
		static jint getComposingSpanEnd(JObject arg0);
		static jint getComposingSpanStart(JObject arg0);
		static void removeComposingSpans(JObject arg0);
		static void setComposingSpans(JObject arg0);
		jboolean beginBatchEdit() const;
		jboolean clearMetaKeyStates(jint arg0) const;
		void closeConnection() const;
		jboolean commitCompletion(android::view::inputmethod::CompletionInfo arg0) const;
		jboolean commitContent(android::view::inputmethod::InputContentInfo arg0, jint arg1, android::os::Bundle arg2) const;
		jboolean commitCorrection(android::view::inputmethod::CorrectionInfo arg0) const;
		jboolean commitText(JString arg0, jint arg1) const;
		jboolean deleteSurroundingText(jint arg0, jint arg1) const;
		jboolean deleteSurroundingTextInCodePoints(jint arg0, jint arg1) const;
		jboolean endBatchEdit() const;
		jboolean finishComposingText() const;
		jint getCursorCapsMode(jint arg0) const;
		JObject getEditable() const;
		android::view::inputmethod::ExtractedText getExtractedText(android::view::inputmethod::ExtractedTextRequest arg0, jint arg1) const;
		android::os::Handler getHandler() const;
		JString getSelectedText(jint arg0) const;
		JString getTextAfterCursor(jint arg0, jint arg1) const;
		JString getTextBeforeCursor(jint arg0, jint arg1) const;
		jboolean performContextMenuAction(jint arg0) const;
		jboolean performEditorAction(jint arg0) const;
		jboolean performPrivateCommand(JString arg0, android::os::Bundle arg1) const;
		jboolean reportFullscreenMode(jboolean arg0) const;
		jboolean requestCursorUpdates(jint arg0) const;
		jboolean sendKeyEvent(android::view::KeyEvent arg0) const;
		jboolean setComposingRegion(jint arg0, jint arg1) const;
		jboolean setComposingText(JString arg0, jint arg1) const;
		jboolean setSelection(jint arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

