#include "../io/FileDescriptor.hpp"
#include "./Buffer.hpp"
#include "./ByteBuffer.hpp"
#include "./MappedByteBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	MappedByteBuffer::MappedByteBuffer(QAndroidJniObject obj) : java::nio::ByteBuffer(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::MappedByteBuffer MappedByteBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::force() const
	{
		return callObjectMethod(
			"force",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::force(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"force",
			"(II)Ljava/nio/MappedByteBuffer;",
			arg0,
			arg1
		);
	}
	jboolean MappedByteBuffer::isLoaded() const
	{
		return callMethod<jboolean>(
			"isLoaded",
			"()Z"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::load() const
	{
		return callObjectMethod(
			"load",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
} // namespace java::nio

