#pragma once

#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/text/Format_Field.def.hpp"
#include "./ConstrainedFieldPosition.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline ConstrainedFieldPosition::ConstrainedFieldPosition()
		: JObject(
			"android.icu.text.ConstrainedFieldPosition",
			"()V"
		) {}
	
	// Methods
	inline void ConstrainedFieldPosition::constrainClass(JClass arg0) const
	{
		callMethod<void>(
			"constrainClass",
			"(Ljava/lang/Class;)V",
			arg0.object<jclass>()
		);
	}
	inline void ConstrainedFieldPosition::constrainField(java::text::Format_Field arg0) const
	{
		callMethod<void>(
			"constrainField",
			"(Ljava/text/Format$Field;)V",
			arg0.object()
		);
	}
	inline java::text::Format_Field ConstrainedFieldPosition::getField() const
	{
		return callObjectMethod(
			"getField",
			"()Ljava/text/Format$Field;"
		);
	}
	inline JObject ConstrainedFieldPosition::getFieldValue() const
	{
		return callObjectMethod(
			"getFieldValue",
			"()Ljava/lang/Object;"
		);
	}
	inline jlong ConstrainedFieldPosition::getInt64IterationContext() const
	{
		return callMethod<jlong>(
			"getInt64IterationContext",
			"()J"
		);
	}
	inline jint ConstrainedFieldPosition::getLimit() const
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	inline jint ConstrainedFieldPosition::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	inline jboolean ConstrainedFieldPosition::matchesField(java::text::Format_Field arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"matchesField",
			"(Ljava/text/Format$Field;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void ConstrainedFieldPosition::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void ConstrainedFieldPosition::setInt64IterationContext(jlong arg0) const
	{
		callMethod<void>(
			"setInt64IterationContext",
			"(J)V",
			arg0
		);
	}
	inline void ConstrainedFieldPosition::setState(java::text::Format_Field arg0, JObject arg1, jint arg2, jint arg3) const
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
	inline JString ConstrainedFieldPosition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
