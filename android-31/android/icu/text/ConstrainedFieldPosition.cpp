#include "../../../java/text/Format_Field.hpp"
#include "./ConstrainedFieldPosition.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	ConstrainedFieldPosition::ConstrainedFieldPosition(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ConstrainedFieldPosition::ConstrainedFieldPosition()
		: __JniBaseClass(
			"android.icu.text.ConstrainedFieldPosition",
			"()V"
		) {}
	
	// Methods
	void ConstrainedFieldPosition::constrainClass(jclass arg0)
	{
		callMethod<void>(
			"constrainClass",
			"(Ljava/lang/Class;)V",
			arg0
		);
	}
	void ConstrainedFieldPosition::constrainField(java::text::Format_Field arg0)
	{
		callMethod<void>(
			"constrainField",
			"(Ljava/text/Format$Field;)V",
			arg0.object()
		);
	}
	java::text::Format_Field ConstrainedFieldPosition::getField()
	{
		return callObjectMethod(
			"getField",
			"()Ljava/text/Format$Field;"
		);
	}
	jobject ConstrainedFieldPosition::getFieldValue()
	{
		return callObjectMethod(
			"getFieldValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jlong ConstrainedFieldPosition::getInt64IterationContext()
	{
		return callMethod<jlong>(
			"getInt64IterationContext",
			"()J"
		);
	}
	jint ConstrainedFieldPosition::getLimit()
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	jint ConstrainedFieldPosition::getStart()
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jboolean ConstrainedFieldPosition::matchesField(java::text::Format_Field arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"matchesField",
			"(Ljava/text/Format$Field;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1
		);
	}
	void ConstrainedFieldPosition::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void ConstrainedFieldPosition::setInt64IterationContext(jlong arg0)
	{
		callMethod<void>(
			"setInt64IterationContext",
			"(J)V",
			arg0
		);
	}
	void ConstrainedFieldPosition::setState(java::text::Format_Field arg0, jobject arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setState",
			"(Ljava/text/Format$Field;Ljava/lang/Object;II)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	jstring ConstrainedFieldPosition::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

