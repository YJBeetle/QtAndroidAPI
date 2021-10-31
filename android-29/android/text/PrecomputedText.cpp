#include "../graphics/Rect.hpp"
#include "./PrecomputedText_Params.hpp"
#include "./PrecomputedText.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	PrecomputedText::PrecomputedText(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PrecomputedText::create(jstring arg0, android::text::PrecomputedText_Params arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.PrecomputedText",
			"create",
			"(Ljava/lang/CharSequence;Landroid/text/PrecomputedText$Params;)Landroid/text/PrecomputedText;",
			arg0,
			arg1.object()
		);
	}
	jchar PrecomputedText::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void PrecomputedText::getBounds(jint arg0, jint arg1, android::graphics::Rect arg2)
	{
		callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint PrecomputedText::getParagraphCount()
	{
		return callMethod<jint>(
			"getParagraphCount",
			"()I"
		);
	}
	jint PrecomputedText::getParagraphEnd(jint arg0)
	{
		return callMethod<jint>(
			"getParagraphEnd",
			"(I)I",
			arg0
		);
	}
	jint PrecomputedText::getParagraphStart(jint arg0)
	{
		return callMethod<jint>(
			"getParagraphStart",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject PrecomputedText::getParams()
	{
		return callObjectMethod(
			"getParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	jint PrecomputedText::getSpanEnd(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint PrecomputedText::getSpanFlags(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint PrecomputedText::getSpanStart(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jobjectArray PrecomputedText::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jfloat PrecomputedText::getWidth(jint arg0, jint arg1)
	{
		return callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
	jint PrecomputedText::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint PrecomputedText::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void PrecomputedText::removeSpan(jobject arg0)
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void PrecomputedText::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring PrecomputedText::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring PrecomputedText::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

