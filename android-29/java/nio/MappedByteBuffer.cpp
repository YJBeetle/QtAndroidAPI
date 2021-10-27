#include "../io/FileDescriptor.hpp"
#include "./Buffer.hpp"
#include "./ByteBuffer.hpp"
#include "./MappedByteBuffer.hpp"

namespace java::nio
{
	// Fields
	
	MappedByteBuffer::MappedByteBuffer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MappedByteBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::force()
	{
		return __thiz.callObjectMethod(
			"force",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::force(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"force",
			"(II)Ljava/nio/MappedByteBuffer;",
			arg0,
			arg1
		);
	}
	jboolean MappedByteBuffer::isLoaded()
	{
		return __thiz.callMethod<jboolean>(
			"isLoaded",
			"()Z"
		);
	}
	QAndroidJniObject MappedByteBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	QAndroidJniObject MappedByteBuffer::load()
	{
		return __thiz.callObjectMethod(
			"load",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/MappedByteBuffer;",
			arg0
		);
	}
	QAndroidJniObject MappedByteBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
	QAndroidJniObject MappedByteBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/MappedByteBuffer;"
		);
	}
} // namespace java::nio

