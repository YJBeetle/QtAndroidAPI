#include "../lang/IllegalArgumentException.hpp"
#include "../../JObject.hpp"
#include "./Buffer.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject Buffer::array() const
	{
		return callObjectMethod(
			"array",
			"()Ljava/lang/Object;"
		);
	}
	jint Buffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	jint Buffer::capacity() const
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	java::nio::Buffer Buffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/Buffer;"
		);
	}
	jboolean Buffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jboolean Buffer::hasRemaining() const
	{
		return callMethod<jboolean>(
			"hasRemaining",
			"()Z"
		);
	}
	jboolean Buffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean Buffer::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jint Buffer::limit() const
	{
		return callMethod<jint>(
			"limit",
			"()I"
		);
	}
	java::nio::Buffer Buffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	java::nio::Buffer Buffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/Buffer;"
		);
	}
	jint Buffer::position() const
	{
		return callMethod<jint>(
			"position",
			"()I"
		);
	}
	java::nio::Buffer Buffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	jint Buffer::remaining() const
	{
		return callMethod<jint>(
			"remaining",
			"()I"
		);
	}
	java::nio::Buffer Buffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/Buffer;"
		);
	}
	java::nio::Buffer Buffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/Buffer;",
			arg0,
			arg1
		);
	}
} // namespace java::nio

