#include "../../lang/Integer.hpp"
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
	
	// QJniObject forward
	CoderResult::CoderResult(QJniObject obj) : JObject(obj) {}
	
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
	jboolean CoderResult::isError()
	{
		return callMethod<jboolean>(
			"isError",
			"()Z"
		);
	}
	jboolean CoderResult::isMalformed()
	{
		return callMethod<jboolean>(
			"isMalformed",
			"()Z"
		);
	}
	jboolean CoderResult::isOverflow()
	{
		return callMethod<jboolean>(
			"isOverflow",
			"()Z"
		);
	}
	jboolean CoderResult::isUnderflow()
	{
		return callMethod<jboolean>(
			"isUnderflow",
			"()Z"
		);
	}
	jboolean CoderResult::isUnmappable()
	{
		return callMethod<jboolean>(
			"isUnmappable",
			"()Z"
		);
	}
	jint CoderResult::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	void CoderResult::throwException()
	{
		callMethod<void>(
			"throwException",
			"()V"
		);
	}
	jstring CoderResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

