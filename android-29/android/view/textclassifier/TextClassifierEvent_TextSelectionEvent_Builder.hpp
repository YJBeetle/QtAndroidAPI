#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setRelativeSuggestedWordEndIndex(jint arg0);
		QAndroidJniObject setRelativeSuggestedWordStartIndex(jint arg0);
		QAndroidJniObject setRelativeWordEndIndex(jint arg0);
		QAndroidJniObject setRelativeWordStartIndex(jint arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "./TextClassifierEvent_TextSelectionEvent.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassifierEvent_TextSelectionEvent_Builder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent;"
		);
	}
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::setRelativeSuggestedWordEndIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRelativeSuggestedWordEndIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::setRelativeSuggestedWordStartIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRelativeSuggestedWordStartIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::setRelativeWordEndIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRelativeWordEndIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::setRelativeWordStartIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRelativeWordStartIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder
	{
	public:
		TextClassifierEvent_TextSelectionEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_TextSelectionEvent_Builder(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

