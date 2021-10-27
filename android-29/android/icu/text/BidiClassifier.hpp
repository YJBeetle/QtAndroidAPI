#pragma once

#ifndef ANDROID_ICU_TEXT_BIDICLASSIFIER
#define ANDROID_ICU_TEXT_BIDICLASSIFIER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class BidiClassifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0);
		
		// Methods
		jint classify(jint arg0);
		jobject getContext();
		void setContext(jobject arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void BidiClassifier::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.BidiClassifier",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jint BidiClassifier::classify(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"classify",
			"(I)I",
			arg0
		);
	}
	jobject BidiClassifier::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void BidiClassifier::setContext(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setContext",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class BidiClassifier : public __jni_impl::android::icu::text::BidiClassifier
	{
	public:
		BidiClassifier(QAndroidJniObject obj) { __thiz = obj; }
		BidiClassifier(jobject arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_BIDICLASSIFIER

