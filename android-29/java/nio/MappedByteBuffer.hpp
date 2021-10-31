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
		QAndroidJniObject clear();
		QAndroidJniObject flip();
		QAndroidJniObject force();
		QAndroidJniObject force(jint arg0, jint arg1);
		jboolean isLoaded();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject load();
		QAndroidJniObject mark();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
	};
} // namespace java::nio

