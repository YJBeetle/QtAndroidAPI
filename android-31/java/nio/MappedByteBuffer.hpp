#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Buffer.hpp"
#include "./ByteBuffer.hpp"

namespace java::io
{
	class FileDescriptor;
}
namespace java::nio
{
	class Buffer;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace java::nio
{
	class MappedByteBuffer : public java::nio::ByteBuffer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MappedByteBuffer(const char *className, const char *sig, Ts...agv) : java::nio::ByteBuffer(className, sig, std::forward<Ts>(agv)...) {}
		MappedByteBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::MappedByteBuffer clear();
		java::nio::MappedByteBuffer flip();
		java::nio::MappedByteBuffer force();
		java::nio::MappedByteBuffer force(jint arg0, jint arg1);
		jboolean isLoaded();
		java::nio::MappedByteBuffer limit(jint arg0);
		java::nio::MappedByteBuffer load();
		java::nio::MappedByteBuffer mark();
		java::nio::MappedByteBuffer position(jint arg0);
		java::nio::MappedByteBuffer reset();
		java::nio::MappedByteBuffer rewind();
	};
} // namespace java::nio

