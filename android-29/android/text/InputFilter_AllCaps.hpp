#pragma once

#ifndef ANDROID_TEXT_INPUTFILTER_ALLCAPS
#define ANDROID_TEXT_INPUTFILTER_ALLCAPS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::text
{
	class InputFilter_AllCaps : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		QAndroidJniObject filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5);
	};
} // namespace __jni_impl::android::text

#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void InputFilter_AllCaps::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.InputFilter$AllCaps",
			"()V");
	}
	void InputFilter_AllCaps::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.InputFilter$AllCaps",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject InputFilter_AllCaps::filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5)
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
} // namespace __jni_impl::android::text

namespace android::text
{
	class InputFilter_AllCaps : public __jni_impl::android::text::InputFilter_AllCaps
	{
	public:
		InputFilter_AllCaps(QAndroidJniObject obj) { __thiz = obj; }
		InputFilter_AllCaps()
		{
			__constructor();
		}
		InputFilter_AllCaps(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_INPUTFILTER_ALLCAPS

