#include "./SpannedString.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	SpannedString::SpannedString(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SpannedString::SpannedString(jstring arg0)
		: JObject(
			"android.text.SpannedString",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	
	// Methods
	android::text::SpannedString SpannedString::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.SpannedString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannedString;",
			arg0
		);
	}
	jchar SpannedString::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jboolean SpannedString::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void SpannedString::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
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
	jint SpannedString::getSpanEnd(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannedString::getSpanFlags(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannedString::getSpanStart(jobject arg0)
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jobjectArray SpannedString::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jint SpannedString::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint SpannedString::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint SpannedString::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring SpannedString::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring SpannedString::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

