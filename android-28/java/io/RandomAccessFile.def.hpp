#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
class JObject;
class JString;
namespace java::nio::channels
{
	class FileChannel;
}

namespace java::io
{
	class RandomAccessFile : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RandomAccessFile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RandomAccessFile(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RandomAccessFile(java::io::File arg0, JString arg1);
		RandomAccessFile(JString arg0, JString arg1);
		
		// Methods
		void close() const;
		java::nio::channels::FileChannel getChannel() const;
		java::io::FileDescriptor getFD() const;
		jlong getFilePointer() const;
		jlong length() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		jboolean readBoolean() const;
		jbyte readByte() const;
		jchar readChar() const;
		jdouble readDouble() const;
		jfloat readFloat() const;
		void readFully(JByteArray arg0) const;
		void readFully(JByteArray arg0, jint arg1, jint arg2) const;
		jint readInt() const;
		JString readLine() const;
		jlong readLong() const;
		jshort readShort() const;
		JString readUTF() const;
		jint readUnsignedByte() const;
		jint readUnsignedShort() const;
		void seek(jlong arg0) const;
		void setLength(jlong arg0) const;
		jint skipBytes(jint arg0) const;
		void write(JByteArray arg0) const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
		void writeBoolean(jboolean arg0) const;
		void writeByte(jint arg0) const;
		void writeBytes(JString arg0) const;
		void writeChar(jint arg0) const;
		void writeChars(JString arg0) const;
		void writeDouble(jdouble arg0) const;
		void writeFloat(jfloat arg0) const;
		void writeInt(jint arg0) const;
		void writeLong(jlong arg0) const;
		void writeShort(jint arg0) const;
		void writeUTF(JString arg0) const;
	};
} // namespace java::io

