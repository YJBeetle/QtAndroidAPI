#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Format_Field.hpp"
#include "./FieldPosition.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	FieldPosition::FieldPosition(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FieldPosition::FieldPosition(jint arg0)
		: JObject(
			"java.text.FieldPosition",
			"(I)V",
			arg0
		) {}
	FieldPosition::FieldPosition(java::text::Format_Field arg0)
		: JObject(
			"java.text.FieldPosition",
			"(Ljava/text/Format$Field;)V",
			arg0.object()
		) {}
	FieldPosition::FieldPosition(java::text::Format_Field arg0, jint arg1)
		: JObject(
			"java.text.FieldPosition",
			"(Ljava/text/Format$Field;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean FieldPosition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint FieldPosition::getBeginIndex() const
	{
		return callMethod<jint>(
			"getBeginIndex",
			"()I"
		);
	}
	jint FieldPosition::getEndIndex() const
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	jint FieldPosition::getField() const
	{
		return callMethod<jint>(
			"getField",
			"()I"
		);
	}
	java::text::Format_Field FieldPosition::getFieldAttribute() const
	{
		return callObjectMethod(
			"getFieldAttribute",
			"()Ljava/text/Format$Field;"
		);
	}
	jint FieldPosition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void FieldPosition::setBeginIndex(jint arg0) const
	{
		callMethod<void>(
			"setBeginIndex",
			"(I)V",
			arg0
		);
	}
	void FieldPosition::setEndIndex(jint arg0) const
	{
		callMethod<void>(
			"setEndIndex",
			"(I)V",
			arg0
		);
	}
	JString FieldPosition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

