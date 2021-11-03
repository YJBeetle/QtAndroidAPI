#include "../../JCharArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SpannableString.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	SpannableString::SpannableString(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SpannableString::SpannableString(JString arg0)
		: JObject(
			"android.text.SpannableString",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::text::SpannableString SpannableString::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.SpannableString",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableString;",
			arg0.object<jstring>()
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
	jboolean SpannableString::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void SpannableString::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3)
	{
		callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2.object<jcharArray>(),
			arg3
		);
	}
	jint SpannableString::getSpanEnd(JObject arg0)
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint SpannableString::getSpanFlags(JObject arg0)
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint SpannableString::getSpanStart(JObject arg0)
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JObjectArray SpannableString::getSpans(jint arg0, jint arg1, JClass arg2)
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
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
	jint SpannableString::nextSpanTransition(jint arg0, jint arg1, JClass arg2)
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	void SpannableString::removeSpan(JObject arg0)
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void SpannableString::setSpan(JObject arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0.object<jobject>(),
			arg1,
			arg2,
			arg3
		);
	}
	JString SpannableString::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JString SpannableString::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

