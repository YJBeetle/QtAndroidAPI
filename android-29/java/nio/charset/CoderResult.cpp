#include "../../lang/Integer.hpp"
#include "./CoderResult.hpp"

namespace java::nio::charset
{
	// Fields
	QAndroidJniObject CoderResult::OVERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CoderResult",
			"OVERFLOW",
			"Ljava/nio/charset/CoderResult;"
		);
	}
	QAndroidJniObject CoderResult::UNDERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CoderResult",
			"UNDERFLOW",
			"Ljava/nio/charset/CoderResult;"
		);
	}
	
	CoderResult::CoderResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CoderResult::malformedForLength(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.CoderResult",
			"malformedForLength",
			"(I)Ljava/nio/charset/CoderResult;",
			arg0
		);
	}
	QAndroidJniObject CoderResult::unmappableForLength(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.CoderResult",
			"unmappableForLength",
			"(I)Ljava/nio/charset/CoderResult;",
			arg0
		);
	}
	jboolean CoderResult::isError()
	{
		return __thiz.callMethod<jboolean>(
			"isError",
			"()Z"
		);
	}
	jboolean CoderResult::isMalformed()
	{
		return __thiz.callMethod<jboolean>(
			"isMalformed",
			"()Z"
		);
	}
	jboolean CoderResult::isOverflow()
	{
		return __thiz.callMethod<jboolean>(
			"isOverflow",
			"()Z"
		);
	}
	jboolean CoderResult::isUnderflow()
	{
		return __thiz.callMethod<jboolean>(
			"isUnderflow",
			"()Z"
		);
	}
	jboolean CoderResult::isUnmappable()
	{
		return __thiz.callMethod<jboolean>(
			"isUnmappable",
			"()Z"
		);
	}
	jint CoderResult::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	void CoderResult::throwException()
	{
		__thiz.callMethod<void>(
			"throwException",
			"()V"
		);
	}
	jstring CoderResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

