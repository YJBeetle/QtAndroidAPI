#pragma once

#include "./ByteBuffer.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit MappedByteBuffer(const char *className, const char *sig, Ts...agv) : java::nio::ByteBuffer(className, sig, std::forward<Ts>(agv)...) {}
		MappedByteBuffer(QJniObject obj) : java::nio::ByteBuffer(obj) {}
		
		// Constructors
		
		// Methods
		java::nio::MappedByteBuffer clear() const;
		java::nio::MappedByteBuffer flip() const;
		java::nio::MappedByteBuffer force() const;
		java::nio::MappedByteBuffer force(jint arg0, jint arg1) const;
		jboolean isLoaded() const;
		java::nio::MappedByteBuffer limit(jint arg0) const;
		java::nio::MappedByteBuffer load() const;
		java::nio::MappedByteBuffer mark() const;
		java::nio::MappedByteBuffer position(jint arg0) const;
		java::nio::MappedByteBuffer reset() const;
		java::nio::MappedByteBuffer rewind() const;
	};
} // namespace java::nio

