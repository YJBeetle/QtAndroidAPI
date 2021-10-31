#include "./SpannableString.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	SpannableString::SpannableString(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SpannableString::SpannableString(jstring arg0)
		: __JniBaseClass(
			"android.text.SpannableString",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	
	// Methods
	android::text::SpannableString SpannableString::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.SpannableString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableString;",
			arg0
		);
	}
	jchar SpannableString::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jboolean SpannableString::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void SpannableString::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
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
	jint SpannableString::getSpanEnd(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannableString::getSpanFlags(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannableString::getSpanStart(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jobjectArray SpannableString::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jint SpannableString::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint SpannableString::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint SpannableString::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void SpannableString::removeSpan(jobject arg0)
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void SpannableString::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
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
	jstring SpannableString::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring SpannableString::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

