#include "../io/FileDescriptor.hpp"
#include "./Buffer.hpp"
#include "./ByteBuffer.hpp"
#include "./MappedByteBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QJniObject forward
	MappedByteBuffer::MappedByteBuffer(QJniObject obj) : java::nio::ByteBuffer(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::MappedByteBuffer MappedByteBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::force()
	{
		return callObjectMethod(
			"force",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::force(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"force",
			"(II)Ljava/nio/MappedByteBuffer;",
			arg0,
			arg1
		);
	}
	jboolean MappedByteBuffer::isLoaded()
	{
		return callMethod<jboolean>(
			"isLoaded",
			"()Z"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::load()
	{
		return callObjectMethod(
			"load",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	java::nio::MappedByteBuffer MappedByteBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
} // namespace java::nio

