#pragma once

#ifndef ANDROID_TEXT_INPUTFILTER_LENGTHFILTER
#define ANDROID_TEXT_INPUTFILTER_LENGTHFILTER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class InputFilter_LengthFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5);
		jint getMax();
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void InputFilter_LengthFilter::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.InputFilter$LengthFilter",
			"(I)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject InputFilter_LengthFilter::filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5);
	}
	jint InputFilter_LengthFilter::getMax()
	{
		return __thiz.callMethod<jint>(
			"getMax",
			"()I");
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class InputFilter_LengthFilter : public __jni_impl::android::text::InputFilter_LengthFilter
	{
	public:
		InputFilter_LengthFilter(QAndroidJniObject obj) { __thiz = obj; }
		InputFilter_LengthFilter(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_INPUTFILTER_LENGTHFILTER

