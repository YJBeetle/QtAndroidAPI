#pragma once

#ifndef ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW_COMMATOKENIZER
#define ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW_COMMATOKENIZER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::widget
{
	class MultiAutoCompleteTextView_CommaTokenizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint findTokenStart(jstring arg0, jint arg1);
		jint findTokenEnd(jstring arg0, jint arg1);
		jstring terminateToken(jstring arg0);
	};
} // namespace __jni_impl::android::widget


namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void MultiAutoCompleteTextView_CommaTokenizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView$CommaTokenizer",
			"()V");
	}
	
	// Methods
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenStart(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenEnd(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jstring MultiAutoCompleteTextView_CommaTokenizer::terminateToken(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class MultiAutoCompleteTextView_CommaTokenizer : public __jni_impl::android::widget::MultiAutoCompleteTextView_CommaTokenizer
	{
	public:
		MultiAutoCompleteTextView_CommaTokenizer(QAndroidJniObject obj) { __thiz = obj; }
		MultiAutoCompleteTextView_CommaTokenizer()
		{
			__constructor();
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW_COMMATOKENIZER

