#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/text/Format_Field.hpp"
#include "./ConstrainedFieldPosition.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	ConstrainedFieldPosition::ConstrainedFieldPosition(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConstrainedFieldPosition::ConstrainedFieldPosition()
		: JObject(
			"android.icu.text.ConstrainedFieldPosition",
			"()V"
		) {}
	
	// Methods
	void ConstrainedFieldPosition::constrainClass(JClass arg0) const
	{
		callMethod<void>(
			"constrainClass",
			"(Ljava/lang/Class;)V",
			arg0.object<jclass>()
		);
	}
	void ConstrainedFieldPosition::constrainField(java::text::Format_Field arg0) const
	{
		callMethod<void>(
			"constrainField",
			"(Ljava/text/Format$Field;)V",
			arg0.object()
		);
	}
	java::text::Format_Field ConstrainedFieldPosition::getField() const
	{
		return callObjectMethod(
			"getField",
			"()Ljava/text/Format$Field;"
		);
	}
	JObject ConstrainedFieldPosition::getFieldValue() const
	{
		return callObjectMethod(
			"getFieldValue",
			"()Ljava/lang/Object;"
		);
	}
	jlong ConstrainedFieldPosition::getInt64IterationContext() const
	{
		return callMethod<jlong>(
			"getInt64IterationContext",
			"()J"
		);
	}
	jint ConstrainedFieldPosition::getLimit() const
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	jint ConstrainedFieldPosition::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jboolean ConstrainedFieldPosition::matchesField(java::text::Format_Field arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"matchesField",
			"(Ljava/text/Format$Field;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	void ConstrainedFieldPosition::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void ConstrainedFieldPosition::setInt64IterationContext(jlong arg0) const
	{
		callMethod<void>(
			"setInt64IterationContext",
			"(J)V",
			arg0
		);
	}
	void ConstrainedFieldPosition::setState(java::text::Format_Field arg0, JObject arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setState",
			"(Ljava/text/Format$Field;Ljava/lang/Object;II)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
	JString ConstrainedFieldPosition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

