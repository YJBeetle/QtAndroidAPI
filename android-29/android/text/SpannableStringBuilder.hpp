#pragma once

#ifndef ANDROID_TEXT_SPANNABLESTRINGBUILDER
#define ANDROID_TEXT_SPANNABLESTRINGBUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Paint;
}

namespace __jni_impl::android::text
{
	class SpannableStringBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint length();
		QAndroidJniObject toString();
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jstring arg0, jobject arg1, jint arg2);
		QAndroidJniObject append(jstring arg0);
		jint hashCode();
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		static QAndroidJniObject valueOf(jstring arg0);
		void clear();
		jchar charAt(jint arg0);
		QAndroidJniObject replace(jint arg0, jint arg1, jstring arg2);
		QAndroidJniObject replace(jint arg0, jint arg1, jstring arg2, jint arg3, jint arg4);
		QAndroidJniObject subSequence(jint arg0, jint arg1);
		QAndroidJniObject _delete(jint arg0, jint arg1);
		QAndroidJniObject insert(jint arg0, jstring arg1, jint arg2, jint arg3);
		QAndroidJniObject insert(jint arg0, jstring arg1);
		void setSpan(jobject arg0, jint arg1, jint arg2, jint arg3);
		void removeSpan(jobject arg0);
		void setFilters(jarray arg0);
		QAndroidJniObject getFilters();
		jint getTextWatcherDepth();
		jint getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint arg5);
		QAndroidJniObject getSpans(jint arg0, jint arg1, jclass arg2);
		jint getSpanStart(jobject arg0);
		jint getSpanEnd(jobject arg0);
		jint getSpanFlags(jobject arg0);
		jint nextSpanTransition(jint arg0, jint arg1, jclass arg2);
		void clearSpans();
	};
} // namespace __jni_impl::android::text

#include "../graphics/Paint.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void SpannableStringBuilder::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2);
	}
	void SpannableStringBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void SpannableStringBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableStringBuilder",
			"()V");
	}
	
	// Methods
	jboolean SpannableStringBuilder::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint SpannableStringBuilder::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I");
	}
	QAndroidJniObject SpannableStringBuilder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SpannableStringBuilder::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Landroid/text/SpannableStringBuilder;",
			arg0);
	}
	QAndroidJniObject SpannableStringBuilder::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject SpannableStringBuilder::append(jstring arg0, jobject arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;I)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject SpannableStringBuilder::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0);
	}
	jint SpannableStringBuilder::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void SpannableStringBuilder::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject SpannableStringBuilder::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannableStringBuilder",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0);
	}
	void SpannableStringBuilder::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jchar SpannableStringBuilder::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0);
	}
	QAndroidJniObject SpannableStringBuilder::replace(jint arg0, jint arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject SpannableStringBuilder::replace(jint arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	QAndroidJniObject SpannableStringBuilder::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1);
	}
	QAndroidJniObject SpannableStringBuilder::_delete(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"delete",
			"(II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1);
	}
	QAndroidJniObject SpannableStringBuilder::insert(jint arg0, jstring arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject SpannableStringBuilder::insert(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1);
	}
	void SpannableStringBuilder::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SpannableStringBuilder::removeSpan(jobject arg0)
	{
		__thiz.callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void SpannableStringBuilder::setFilters(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0);
	}
	QAndroidJniObject SpannableStringBuilder::getFilters()
	{
		return __thiz.callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;");
	}
	jint SpannableStringBuilder::getTextWatcherDepth()
	{
		return __thiz.callMethod<jint>(
			"getTextWatcherDepth",
			"()I");
	}
	jint SpannableStringBuilder::getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Paint arg5)
	{
		return __thiz.callMethod<jint>(
			"getTextRunCursor",
			"(IIIIILandroid/graphics/Paint;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object());
	}
	QAndroidJniObject SpannableStringBuilder::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2);
	}
	jint SpannableStringBuilder::getSpanStart(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannableStringBuilder::getSpanEnd(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannableStringBuilder::getSpanFlags(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint SpannableStringBuilder::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2);
	}
	void SpannableStringBuilder::clearSpans()
	{
		__thiz.callMethod<void>(
			"clearSpans",
			"()V");
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class SpannableStringBuilder : public __jni_impl::android::text::SpannableStringBuilder
	{
	public:
		SpannableStringBuilder(QAndroidJniObject obj) { __thiz = obj; }
		SpannableStringBuilder(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SpannableStringBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SpannableStringBuilder()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_SPANNABLESTRINGBUILDER

