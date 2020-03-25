#pragma once

#ifndef ANDROID_TEXT_SPANNABLESTRING
#define ANDROID_TEXT_SPANNABLESTRING

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class SpannableString : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint length();
		QAndroidJniObject toString();
		jint hashCode();
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		static QAndroidJniObject valueOf(jstring arg0);
		jchar charAt(jint arg0);
		QAndroidJniObject subSequence(jint arg0, jint arg1);
		void setSpan(jobject arg0, jint arg1, jint arg2, jint arg3);
		void removeSpan(jobject arg0);
		QAndroidJniObject getSpans(jint arg0, jint arg1, jclass arg2);
		jint getSpanStart(jobject arg0);
		jint getSpanEnd(jobject arg0);
		jint getSpanFlags(jobject arg0);
		jint nextSpanTransition(jint arg0, jint arg1, jclass arg2);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void SpannableString::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableString",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	
	// Methods
	jboolean SpannableString::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint SpannableString::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I");
	}
	QAndroidJniObject SpannableString::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SpannableString::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void SpannableString::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject SpannableString::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannableString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableString;",
			arg0);
	}
	jchar SpannableString::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0);
	}
	QAndroidJniObject SpannableString::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1);
	}
	void SpannableString::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SpannableString::removeSpan(jobject arg0)
	{
		__thiz.callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject SpannableString::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2);
	}
	jint SpannableString::getSpanStart(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannableString::getSpanEnd(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannableString::getSpanFlags(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannableString::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class SpannableString : public __jni_impl::android::text::SpannableString
	{
	public:
		SpannableString(QAndroidJniObject obj) { __thiz = obj; }
		SpannableString(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_SPANNABLESTRING

