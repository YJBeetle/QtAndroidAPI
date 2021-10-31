#include "../graphics/Paint.hpp"
#include "./SpannableStringBuilder.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	SpannableStringBuilder::SpannableStringBuilder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SpannableStringBuilder::SpannableStringBuilder()
		: __JniBaseClass(
			"android.text.SpannableStringBuilder",
			"()V"
		) {}
	SpannableStringBuilder::SpannableStringBuilder(jstring arg0)
		: __JniBaseClass(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	SpannableStringBuilder::SpannableStringBuilder(jstring arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::text::SpannableStringBuilder SpannableStringBuilder::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannableStringBuilder",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::append(jchar arg0)
	{
		return callObjectMethod(
			"append",
			"(C)Landroid/text/SpannableStringBuilder;",
			arg0
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::append(jstring arg0, jobject arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;I)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	jchar SpannableStringBuilder::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void SpannableStringBuilder::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void SpannableStringBuilder::clearSpans()
	{
		callMethod<void>(
			"clearSpans",
			"()V"
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::_delete(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"delete",
			"(II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1
		);
	}
	jboolean SpannableStringBuilder::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void SpannableStringBuilder::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jarray SpannableStringBuilder::getFilters()
	{
		return callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		).object<jarray>();
	}
	jint SpannableStringBuilder::getSpanEnd(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannableStringBuilder::getSpanFlags(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannableStringBuilder::getSpanStart(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jobjectArray SpannableStringBuilder::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jint SpannableStringBuilder::getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint arg5)
	{
		return callMethod<jint>(
			"getTextRunCursor",
			"(IIIIILandroid/graphics/Paint;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	jint SpannableStringBuilder::getTextWatcherDepth()
	{
		return callMethod<jint>(
			"getTextWatcherDepth",
			"()I"
		);
	}
	jint SpannableStringBuilder::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::insert(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::insert(jint arg0, jstring arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint SpannableStringBuilder::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint SpannableStringBuilder::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void SpannableStringBuilder::removeSpan(jobject arg0)
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::replace(jint arg0, jint arg1, jstring arg2)
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::replace(jint arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void SpannableStringBuilder::setFilters(jarray arg0)
	{
		callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0
		);
	}
	void SpannableStringBuilder::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
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
	jstring SpannableStringBuilder::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring SpannableStringBuilder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

