#pragma once

#include "../lang/IllegalArgumentException.def.hpp"
#include "../../JObject.hpp"
#include "./Buffer.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Buffer::array() const
	{
		return callObjectMethod(
			"array",
			"()Ljava/lang/Object;"
		);
	}
	inline jint Buffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	inline jint Buffer::capacity() const
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	inline java::nio::Buffer Buffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/Buffer;"
		);
	}
	inline java::nio::Buffer Buffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/Buffer;"
		);
	}
	inline java::nio::Buffer Buffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/Buffer;"
		);
	}
	inline jboolean Buffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	inline jboolean Buffer::hasRemaining() const
	{
		return callMethod<jboolean>(
			"hasRemaining",
			"()Z"
		);
	}
	inline jboolean Buffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	inline jboolean Buffer::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	inline jint Buffer::limit() const
	{
		return callMethod<jint>(
			"limit",
			"()I"
		);
	}
	inline java::nio::Buffer Buffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	inline java::nio::Buffer Buffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/Buffer;"
		);
	}
	inline jint Buffer::position() const
	{
		return callMethod<jint>(
			"position",
			"()I"
		);
	}
	inline java::nio::Buffer Buffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/Buffer;",
			arg0
		);
	}
	inline jint Buffer::remaining() const
	{
		return callMethod<jint>(
			"remaining",
			"()I"
		);
	}
	inline java::nio::Buffer Buffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/Buffer;"
		);
	}
	inline java::nio::Buffer Buffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/Buffer;"
		);
	}
	inline java::nio::Buffer Buffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/Buffer;"
		);
	}
	inline java::nio::Buffer Buffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/Buffer;",
			arg0,
			arg1
		);
	}
} // namespace java::nio

// Base class headers

