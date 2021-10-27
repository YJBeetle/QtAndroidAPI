#pragma once

#ifndef ANDROID_ICU_TEXT_UNICODEFILTER
#define ANDROID_ICU_TEXT_UNICODEFILTER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class UnicodeFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean contains(jint arg0);
		jint matches(__jni_impl::__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void UnicodeFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeFilter",
			"(V)V");
	}
	
	// Methods
	jboolean UnicodeFilter::contains(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
		);
	}
	jint UnicodeFilter::matches(__jni_impl::__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callMethod<jint>(
			"matches",
			"(Landroid/icu/text/Replaceable;[IIZ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeFilter : public __jni_impl::android::icu::text::UnicodeFilter
	{
	public:
		UnicodeFilter(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeFilter()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UNICODEFILTER

