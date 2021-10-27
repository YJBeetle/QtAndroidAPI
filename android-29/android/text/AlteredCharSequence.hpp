#pragma once

#ifndef ANDROID_TEXT_ALTEREDCHARSEQUENCE
#define ANDROID_TEXT_ALTEREDCHARSEQUENCE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class AlteredCharSequence : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject make(jstring arg0, jcharArray arg1, jint arg2, jint arg3);
		static QAndroidJniObject make(const QString &arg0, jcharArray arg1, jint arg2, jint arg3);
		jchar charAt(jint arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jint length();
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void AlteredCharSequence::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.AlteredCharSequence",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AlteredCharSequence::make(jstring arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.AlteredCharSequence",
			"make",
			"(Ljava/lang/CharSequence;[CII)Landroid/text/AlteredCharSequence;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject AlteredCharSequence::make(const QString &arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.AlteredCharSequence",
			"make",
			"(Ljava/lang/CharSequence;[CII)Landroid/text/AlteredCharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	jchar AlteredCharSequence::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void AlteredCharSequence::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AlteredCharSequence::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring AlteredCharSequence::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring AlteredCharSequence::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class AlteredCharSequence : public __jni_impl::android::text::AlteredCharSequence
	{
	public:
		AlteredCharSequence(QAndroidJniObject obj) { __thiz = obj; }
		AlteredCharSequence()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_ALTEREDCHARSEQUENCE

