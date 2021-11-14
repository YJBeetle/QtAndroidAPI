#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../graphics/Paint.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SpannableStringBuilder.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	SpannableStringBuilder::SpannableStringBuilder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SpannableStringBuilder::SpannableStringBuilder()
		: JObject(
			"android.text.SpannableStringBuilder",
			"()V"
		) {}
	SpannableStringBuilder::SpannableStringBuilder(JString arg0)
		: JObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	SpannableStringBuilder::SpannableStringBuilder(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::text::SpannableStringBuilder SpannableStringBuilder::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.SpannableStringBuilder",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Landroid/text/SpannableStringBuilder;",
			arg0
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::append(JString arg0, JObject arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;I)Landroid/text/SpannableStringBuilder;",
			arg0.object<jstring>(),
			arg1.object<jobject>(),
			arg2
		);
	}
	jchar SpannableStringBuilder::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void SpannableStringBuilder::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void SpannableStringBuilder::clearSpans() const
	{
		callMethod<void>(
			"clearSpans",
			"()V"
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::delete_(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"delete",
			"(II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1
		);
	}
	jboolean SpannableStringBuilder::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void SpannableStringBuilder::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const
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
	JArray SpannableStringBuilder::getFilters() const
	{
		return callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		);
	}
	jint SpannableStringBuilder::getSpanEnd(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint SpannableStringBuilder::getSpanFlags(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint SpannableStringBuilder::getSpanStart(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JObjectArray SpannableStringBuilder::getSpans(jint arg0, jint arg1, JClass arg2) const
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	jint SpannableStringBuilder::getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint arg5) const
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
	jint SpannableStringBuilder::getTextWatcherDepth() const
	{
		return callMethod<jint>(
			"getTextWatcherDepth",
			"()I"
		);
	}
	jint SpannableStringBuilder::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::insert(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1.object<jstring>()
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::insert(jint arg0, JString arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	jint SpannableStringBuilder::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint SpannableStringBuilder::nextSpanTransition(jint arg0, jint arg1, JClass arg2) const
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	void SpannableStringBuilder::removeSpan(JObject arg0) const
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::replace(jint arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	android::text::SpannableStringBuilder SpannableStringBuilder::replace(jint arg0, jint arg1, JString arg2, jint arg3, jint arg4) const
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4
		);
	}
	void SpannableStringBuilder::setFilters(JArray arg0) const
	{
		callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0.object<jarray>()
		);
	}
	void SpannableStringBuilder::setSpan(JObject arg0, jint arg1, jint arg2, jint arg3) const
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
	JString SpannableStringBuilder::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JString SpannableStringBuilder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

