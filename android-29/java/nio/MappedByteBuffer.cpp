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
	QAndroidJniObject MappedByteBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::force()
	{
		return callObjectMethod(
			"force",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::force(jint arg0, jint arg1)
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
	QAndroidJniObject MappedByteBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	QAndroidJniObject MappedByteBuffer::load()
	{
		return callObjectMethod(
			"load",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	QAndroidJniObject MappedByteBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
} // namespace java::nio

