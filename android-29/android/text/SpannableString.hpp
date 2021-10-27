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
		void __constructor(const QString &arg0);
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		jchar charAt(jint arg0);
		jboolean equals(jobject arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jint getSpanEnd(jobject arg0);
		jint getSpanFlags(jobject arg0);
		jint getSpanStart(jobject arg0);
		jobjectArray getSpans(jint arg0, jint arg1, jclass arg2);
		jint hashCode();
		jint length();
		jint nextSpanTransition(jint arg0, jint arg1, jclass arg2);
		void removeSpan(jobject arg0);
		void setSpan(jobject arg0, jint arg1, jint arg2, jint arg3);
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
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
			arg0
		);
	}
	void SpannableString::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableString",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject SpannableString::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannableString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableString;",
			arg0
		);
	}
	QAndroidJniObject SpannableString::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannableString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableString;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jchar SpannableString::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jboolean SpannableString::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void SpannableString::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
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
	jint SpannableString::getSpanEnd(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannableString::getSpanFlags(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannableString::getSpanStart(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jobjectArray SpannableString::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jint SpannableString::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint SpannableString::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint SpannableString::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void SpannableString::removeSpan(jobject arg0)
	{
		__thiz.callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void SpannableString::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring SpannableString::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring SpannableString::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

