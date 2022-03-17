#pragma once

#include "../io/FileDescriptor.def.hpp"
#include "./Buffer.def.hpp"
#include "./ByteBuffer.def.hpp"
#include "./MappedByteBuffer.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::MappedByteBuffer MappedByteBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::force() const
	{
		return callObjectMethod(
			"force",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::force(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"force",
			"(II)Ljava/nio/MappedByteBuffer;",
			arg0,
			arg1
		);
	}
	inline jboolean MappedByteBuffer::isLoaded() const
	{
		return callMethod<jboolean>(
			"isLoaded",
			"()Z"
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::load() const
	{
		return callObjectMethod(
			"load",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	inline java::nio::MappedByteBuffer MappedByteBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
} // namespace java::nio

// Base class headers
#include "./Buffer.hpp"
#include "./ByteBuffer.hpp"

