#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Format_Field.def.hpp"
#include "./FieldPosition.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline FieldPosition::FieldPosition(jint arg0)
		: JObject(
			"java.text.FieldPosition",
			"(I)V",
			arg0
		) {}
	inline FieldPosition::FieldPosition(java::text::Format_Field arg0)
		: JObject(
			"java.text.FieldPosition",
			"(Ljava/text/Format$Field;)V",
			arg0.object()
		) {}
	inline FieldPosition::FieldPosition(java::text::Format_Field arg0, jint arg1)
		: JObject(
			"java.text.FieldPosition",
			"(Ljava/text/Format$Field;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jboolean FieldPosition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint FieldPosition::getBeginIndex() const
	{
		return callMethod<jint>(
			"getBeginIndex",
			"()I"
		);
	}
	inline jint FieldPosition::getEndIndex() const
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	inline jint FieldPosition::getField() const
	{
		return callMethod<jint>(
			"getField",
			"()I"
		);
	}
	inline java::text::Format_Field FieldPosition::getFieldAttribute() const
	{
		return callObjectMethod(
			"getFieldAttribute",
			"()Ljava/text/Format$Field;"
		);
	}
	inline jint FieldPosition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void FieldPosition::setBeginIndex(jint arg0) const
	{
		callMethod<void>(
			"setBeginIndex",
			"(I)V",
			arg0
		);
	}
	inline void FieldPosition::setEndIndex(jint arg0) const
	{
		callMethod<void>(
			"setEndIndex",
			"(I)V",
			arg0
		);
	}
	inline JString FieldPosition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

// Base class headers

