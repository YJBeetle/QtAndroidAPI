#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION
#define ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedTextRequest;
}
namespace __jni_impl::android::view::inputmethod
{
	class CompletionInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class CorrectionInfo;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputContentInfo;
}

namespace __jni_impl::android::view::inputmethod
{
	class BaseInputConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::View arg0, jboolean arg1);
		
		// Methods
		QAndroidJniObject getHandler();
		jstring getTextBeforeCursor(jint arg0, jint arg1);
		jstring getTextAfterCursor(jint arg0, jint arg1);
		jstring getSelectedText(jint arg0);
		jint getCursorCapsMode(jint arg0);
		QAndroidJniObject getExtractedText(__jni_impl::android::view::inputmethod::ExtractedTextRequest arg0, jint arg1);
		jboolean deleteSurroundingText(jint arg0, jint arg1);
		jboolean deleteSurroundingTextInCodePoints(jint arg0, jint arg1);
		jboolean setComposingText(jstring arg0, jint arg1);
		jboolean setComposingRegion(jint arg0, jint arg1);
		jboolean finishComposingText();
		jboolean commitText(jstring arg0, jint arg1);
		jboolean commitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0);
		jboolean commitCorrection(__jni_impl::android::view::inputmethod::CorrectionInfo arg0);
		jboolean performEditorAction(jint arg0);
		jboolean performContextMenuAction(jint arg0);
		jboolean sendKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean clearMetaKeyStates(jint arg0);
		jboolean reportFullscreenMode(jboolean arg0);
		jboolean performPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		jboolean requestCursorUpdates(jint arg0);
		void closeConnection();
		jboolean commitContent(__jni_impl::android::view::inputmethod::InputContentInfo arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		jboolean setSelection(jint arg0, jint arg1);
		jboolean beginBatchEdit();
		jboolean endBatchEdit();
		static void removeComposingSpans(__jni_impl::__JniBaseClass arg0);
		static void setComposingSpans(__jni_impl::__JniBaseClass arg0);
		static jint getComposingSpanStart(__jni_impl::__JniBaseClass arg0);
		static jint getComposingSpanEnd(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getEditable();
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../View.hpp"
#include "../../os/Handler.hpp"
#include "ExtractedText.hpp"
#include "ExtractedTextRequest.hpp"
#include "CompletionInfo.hpp"
#include "CorrectionInfo.hpp"
#include "../KeyEvent.hpp"
#include "../../os/Bundle.hpp"
#include "InputContentInfo.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	
	// Constructors
	void BaseInputConnection::__constructor(__jni_impl::android::view::View arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.BaseInputConnection",
			"(Landroid/view/View;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	QAndroidJniObject BaseInputConnection::getHandler()
	{
		return __thiz.callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
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
	jstring BaseInputConnection::getTextAfterCursor(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getTextAfterCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring BaseInputConnection::getSelectedText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSelectedText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jint BaseInputConnection::getCursorCapsMode(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getCursorCapsMode",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject BaseInputConnection::getExtractedText(__jni_impl::android::view::inputmethod::ExtractedTextRequest arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getExtractedText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;",
			arg0.__jniObject().object(),
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
	jboolean BaseInputConnection::setComposingText(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setComposingText",
			"(Ljava/lang/CharSequence;I)Z",
			arg0,
			arg1
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
	jboolean BaseInputConnection::finishComposingText()
	{
		return __thiz.callMethod<jboolean>(
			"finishComposingText",
			"()Z"
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
	jboolean BaseInputConnection::commitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"commitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BaseInputConnection::commitCorrection(__jni_impl::android::view::inputmethod::CorrectionInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"commitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)Z",
			arg0.__jniObject().object()
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
	jboolean BaseInputConnection::performContextMenuAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performContextMenuAction",
			"(I)Z",
			arg0
		);
	}
	jboolean BaseInputConnection::sendKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
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
	jboolean BaseInputConnection::reportFullscreenMode(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"reportFullscreenMode",
			"(Z)Z",
			arg0
		);
	}
	jboolean BaseInputConnection::performPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
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
	void BaseInputConnection::closeConnection()
	{
		__thiz.callMethod<void>(
			"closeConnection",
			"()V"
		);
	}
	jboolean BaseInputConnection::commitContent(__jni_impl::android::view::inputmethod::InputContentInfo arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"commitContent",
			"(Landroid/view/inputmethod/InputContentInfo;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
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
	jboolean BaseInputConnection::beginBatchEdit()
	{
		return __thiz.callMethod<jboolean>(
			"beginBatchEdit",
			"()Z"
		);
	}
	jboolean BaseInputConnection::endBatchEdit()
	{
		return __thiz.callMethod<jboolean>(
			"endBatchEdit",
			"()Z"
		);
	}
	void BaseInputConnection::removeComposingSpans(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.inputmethod.BaseInputConnection",
			"removeComposingSpans",
			"(Landroid/text/Spannable;)V",
			arg0.__jniObject().object()
		);
	}
	void BaseInputConnection::setComposingSpans(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.inputmethod.BaseInputConnection",
			"setComposingSpans",
			"(Landroid/text/Spannable;)V",
			arg0.__jniObject().object()
		);
	}
	jint BaseInputConnection::getComposingSpanStart(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.inputmethod.BaseInputConnection",
			"getComposingSpanStart",
			"(Landroid/text/Spannable;)I",
			arg0.__jniObject().object()
		);
	}
	jint BaseInputConnection::getComposingSpanEnd(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.inputmethod.BaseInputConnection",
			"getComposingSpanEnd",
			"(Landroid/text/Spannable;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BaseInputConnection::getEditable()
	{
		return __thiz.callObjectMethod(
			"getEditable",
			"()Landroid/text/Editable;"
		);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class BaseInputConnection : public __jni_impl::android::view::inputmethod::BaseInputConnection
	{
	public:
		BaseInputConnection(QAndroidJniObject obj) { __thiz = obj; }
		BaseInputConnection(__jni_impl::android::view::View arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION

