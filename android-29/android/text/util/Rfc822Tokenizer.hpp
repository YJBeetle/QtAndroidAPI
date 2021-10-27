#pragma once

#ifndef ANDROID_TEXT_UTIL_RFC822TOKENIZER
#define ANDROID_TEXT_UTIL_RFC822TOKENIZER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::text::util
{
	class Rfc822Tokenizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray tokenize(jstring arg0);
		static jarray tokenize(const QString &arg0);
		static void tokenize(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static void tokenize(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		jint findTokenEnd(jstring arg0, jint arg1);
		jint findTokenEnd(const QString &arg0, jint arg1);
		jint findTokenStart(jstring arg0, jint arg1);
		jint findTokenStart(const QString &arg0, jint arg1);
		jstring terminateToken(jstring arg0);
		jstring terminateToken(const QString &arg0);
	};
} // namespace __jni_impl::android::text::util


namespace __jni_impl::android::text::util
{
	// Fields
	
	// Constructors
	void Rfc822Tokenizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.util.Rfc822Tokenizer",
			"()V"
		);
	}
	
	// Methods
	jarray Rfc822Tokenizer::tokenize(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;)[Landroid/text/util/Rfc822Token;",
			arg0
		).object<jarray>();
	}
	jarray Rfc822Tokenizer::tokenize(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;)[Landroid/text/util/Rfc822Token;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	void Rfc822Tokenizer::tokenize(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;Ljava/util/Collection;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Rfc822Tokenizer::tokenize(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;Ljava/util/Collection;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint Rfc822Tokenizer::findTokenEnd(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint Rfc822Tokenizer::findTokenEnd(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Rfc822Tokenizer::findTokenStart(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint Rfc822Tokenizer::findTokenStart(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring Rfc822Tokenizer::terminateToken(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring Rfc822Tokenizer::terminateToken(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::android::text::util

namespace android::text::util
{
	class Rfc822Tokenizer : public __jni_impl::android::text::util::Rfc822Tokenizer
	{
	public:
		Rfc822Tokenizer(QAndroidJniObject obj) { __thiz = obj; }
		Rfc822Tokenizer()
		{
			__constructor();
		}
	};
} // namespace android::text::util

#endif // ANDROID_TEXT_UTIL_RFC822TOKENIZER

