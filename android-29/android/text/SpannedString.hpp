#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class SpannedString : public __JniBaseClass
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
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
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
			arg0
		);
	}
	void SpannedString::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannedString",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject SpannedString::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannedString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannedString;",
			arg0
		);
	}
	QAndroidJniObject SpannedString::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannedString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannedString;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jchar SpannedString::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jboolean SpannedString::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void SpannedString::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
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
	jint SpannedString::getSpanEnd(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannedString::getSpanFlags(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannedString::getSpanStart(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jobjectArray SpannedString::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jint SpannedString::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint SpannedString::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint SpannedString::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring SpannedString::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring SpannedString::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

