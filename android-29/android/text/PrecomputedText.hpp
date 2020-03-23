#pragma once

#ifndef ANDROID_TEXT_PRECOMPUTEDTEXT
#define ANDROID_TEXT_PRECOMPUTEDTEXT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::text
{
	class PrecomputedText_Params;
}

namespace __jni_impl::android::text
{
	class PrecomputedText : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint length();
		QAndroidJniObject toString();
		jchar charAt(jint arg0);
		QAndroidJniObject subSequence(jint arg0, jint arg1);
		void getBounds(jint arg0, jint arg1, __jni_impl::android::graphics::Rect arg2);
		static QAndroidJniObject create(jstring arg0, __jni_impl::android::text::PrecomputedText_Params arg1);
		jfloat getWidth(jint arg0, jint arg1);
		QAndroidJniObject getParams();
		jint getParagraphCount();
		jint getParagraphStart(jint arg0);
		jint getParagraphEnd(jint arg0);
		QAndroidJniObject getSpans(jint arg0, jint arg1, jclass arg2);
		jint getSpanStart(jobject arg0);
		jint getSpanEnd(jobject arg0);
		jint getSpanFlags(jobject arg0);
		jint nextSpanTransition(jint arg0, jint arg1, jclass arg2);
		void setSpan(jobject arg0, jint arg1, jint arg2, jint arg3);
		void removeSpan(jobject arg0);
	};
} // namespace __jni_impl::android::text

#include "../graphics/Rect.hpp"
#include "PrecomputedText_Params.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void PrecomputedText::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.PrecomputedText",
			"(V)V");
	}
	
	// Methods
	jint PrecomputedText::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I");
	}
	QAndroidJniObject PrecomputedText::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jchar PrecomputedText::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0);
	}
	QAndroidJniObject PrecomputedText::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1);
	}
	void PrecomputedText::getBounds(jint arg0, jint arg1, __jni_impl::android::graphics::Rect arg2)
	{
		__thiz.callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject PrecomputedText::create(jstring arg0, __jni_impl::android::text::PrecomputedText_Params arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.PrecomputedText",
			"create",
			"(Ljava/lang/CharSequence;Landroid/text/PrecomputedText$Params;)Landroid/text/PrecomputedText;",
			arg0,
			arg1.__jniObject().object());
	}
	jfloat PrecomputedText::getWidth(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1);
	}
	QAndroidJniObject PrecomputedText::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Landroid/text/PrecomputedText$Params;");
	}
	jint PrecomputedText::getParagraphCount()
	{
		return __thiz.callMethod<jint>(
			"getParagraphCount",
			"()I");
	}
	jint PrecomputedText::getParagraphStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphStart",
			"(I)I",
			arg0);
	}
	jint PrecomputedText::getParagraphEnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphEnd",
			"(I)I",
			arg0);
	}
	QAndroidJniObject PrecomputedText::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2);
	}
	jint PrecomputedText::getSpanStart(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint PrecomputedText::getSpanEnd(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint PrecomputedText::getSpanFlags(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint PrecomputedText::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2);
	}
	void PrecomputedText::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void PrecomputedText::removeSpan(jobject arg0)
	{
		__thiz.callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class PrecomputedText : public __jni_impl::android::text::PrecomputedText
	{
	public:
		PrecomputedText(QAndroidJniObject obj) { __thiz = obj; }
		PrecomputedText()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_PRECOMPUTEDTEXT

