#pragma once

#ifndef ANDROID_ICU_TEXT_UNICODESETITERATOR
#define ANDROID_ICU_TEXT_UNICODESETITERATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class UnicodeSet;
}

namespace __jni_impl::android::icu::text
{
	class UnicodeSetIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint IS_STRING();
		jint codepoint();
		jint codepointEnd();
		jstring string();
		
		// Constructors
		void __constructor(__jni_impl::android::icu::text::UnicodeSet arg0);
		void __constructor();
		
		// Methods
		jboolean next();
		void reset(__jni_impl::android::icu::text::UnicodeSet arg0);
		void reset();
		jstring getString();
		jboolean nextRange();
	};
} // namespace __jni_impl::android::icu::text

#include "UnicodeSet.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint UnicodeSetIterator::IS_STRING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSetIterator",
			"IS_STRING"
		);
	}
	jint UnicodeSetIterator::codepoint()
	{
		return __thiz.getField<jint>(
			"codepoint"
		);
	}
	jint UnicodeSetIterator::codepointEnd()
	{
		return __thiz.getField<jint>(
			"codepointEnd"
		);
	}
	jstring UnicodeSetIterator::string()
	{
		return __thiz.getObjectField(
			"string",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void UnicodeSetIterator::__constructor(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSetIterator",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object());
	}
	void UnicodeSetIterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSetIterator",
			"()V");
	}
	
	// Methods
	jboolean UnicodeSetIterator::next()
	{
		return __thiz.callMethod<jboolean>(
			"next",
			"()Z"
		);
	}
	void UnicodeSetIterator::reset(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		__thiz.callMethod<void>(
			"reset",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object()
		);
	}
	void UnicodeSetIterator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jstring UnicodeSetIterator::getString()
	{
		return __thiz.callObjectMethod(
			"getString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean UnicodeSetIterator::nextRange()
	{
		return __thiz.callMethod<jboolean>(
			"nextRange",
			"()Z"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeSetIterator : public __jni_impl::android::icu::text::UnicodeSetIterator
	{
	public:
		UnicodeSetIterator(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeSetIterator(__jni_impl::android::icu::text::UnicodeSet arg0)
		{
			__constructor(
				arg0);
		}
		UnicodeSetIterator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UNICODESETITERATOR

