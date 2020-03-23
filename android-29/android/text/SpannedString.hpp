#pragma once

#ifndef ANDROID_TEXT_SPANNEDSTRING
#define ANDROID_TEXT_SPANNEDSTRING

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class SpannedString : public __JniBaseClass
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
	void SpannedString::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannedString",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	
	// Methods
	jboolean SpannedString::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint SpannedString::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I");
	}
	QAndroidJniObject SpannedString::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SpannedString::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void SpannedString::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject SpannedString::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannedString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannedString;",
			arg0);
	}
	jchar SpannedString::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0);
	}
	QAndroidJniObject SpannedString::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1);
	}
	QAndroidJniObject SpannedString::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2);
	}
	jint SpannedString::getSpanStart(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannedString::getSpanEnd(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannedString::getSpanFlags(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannedString::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
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
	class SpannedString : public __jni_impl::android::text::SpannedString
	{
	public:
		SpannedString(QAndroidJniObject obj) { __thiz = obj; }
		SpannedString(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_SPANNEDSTRING

