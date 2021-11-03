#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../lang/Integer.hpp"
#include "../../../JString.hpp"
#include "./CoderResult.hpp"

namespace java::nio::charset
{
	// Fields
	java::nio::charset::CoderResult CoderResult::OVERFLOW()
	{
		return getStaticObjectField(
			"java.nio.charset.CoderResult",
			"OVERFLOW",
			"Ljava/nio/charset/CoderResult;"
		);
	}
	java::nio::charset::CoderResult CoderResult::UNDERFLOW()
	{
		return getStaticObjectField(
			"java.nio.charset.CoderResult",
			"UNDERFLOW",
			"Ljava/nio/charset/CoderResult;"
		);
	}
	
	// QAndroidJniObject forward
	CoderResult::CoderResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::charset::CoderResult CoderResult::malformedForLength(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.charset.CoderResult",
			"malformedForLength",
			"(I)Ljava/nio/charset/CoderResult;",
			arg0
		);
	}
	java::nio::charset::CoderResult CoderResult::unmappableForLength(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.charset.CoderResult",
			"unmappableForLength",
			"(I)Ljava/nio/charset/CoderResult;",
			arg0
		);
	}
	jboolean CoderResult::isError() const
	{
		return callMethod<jboolean>(
			"isError",
			"()Z"
		);
	}
	jboolean CoderResult::isMalformed() const
	{
		return callMethod<jboolean>(
			"isMalformed",
			"()Z"
		);
	}
	jboolean CoderResult::isOverflow() const
	{
		return callMethod<jboolean>(
			"isOverflow",
			"()Z"
		);
	}
	jboolean CoderResult::isUnderflow() const
	{
		return callMethod<jboolean>(
			"isUnderflow",
			"()Z"
		);
	}
	jboolean CoderResult::isUnmappable() const
	{
		return callMethod<jboolean>(
			"isUnmappable",
			"()Z"
		);
	}
	jint CoderResult::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	void CoderResult::throwException() const
	{
		callMethod<void>(
			"throwException",
			"()V"
		);
	}
	JString CoderResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

