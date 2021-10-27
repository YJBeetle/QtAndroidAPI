#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject build();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "./TextClassifierEvent_TextLinkifyEvent.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassifierEvent_TextLinkifyEvent_Builder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_TextLinkifyEvent_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$TextLinkifyEvent;"
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_TextLinkifyEvent_Builder
	{
	public:
		TextClassifierEvent_TextLinkifyEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_TextLinkifyEvent_Builder(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

