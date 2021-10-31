#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::nio::channels
{
	class FileChannel;
}

namespace java::io
{
	class RandomAccessFile : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RandomAccessFile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RandomAccessFile(QJniObject obj);
		
		// Constructors
		RandomAccessFile(java::io::File arg0, jstring arg1);
		RandomAccessFile(jstring arg0, jstring arg1);
		
		// Methods
		void close();
		java::nio::channels::FileChannel getChannel();
		java::io::FileDescriptor getFD();
		jlong getFilePointer();
		jlong length();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jboolean readBoolean();
		jbyte readByte();
		jchar readChar();
		jdouble readDouble();
		jfloat readFloat();
		void readFully(jbyteArray arg0);
		void readFully(jbyteArray arg0, jint arg1, jint arg2);
		jint readInt();
		jstring readLine();
		jlong readLong();
		jshort readShort();
		jstring readUTF();
		jint readUnsignedByte();
		jint readUnsignedShort();
		void seek(jlong arg0);
		void setLength(jlong arg0);
		jint skipBytes(jint arg0);
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void writeBoolean(jboolean arg0);
		void writeByte(jint arg0);
		void writeBytes(jstring arg0);
		void writeChar(jint arg0);
		void writeChars(jstring arg0);
		void writeDouble(jdouble arg0);
		void writeFloat(jfloat arg0);
		void writeInt(jint arg0);
		void writeLong(jlong arg0);
		void writeShort(jint arg0);
		void writeUTF(jstring arg0);
	};
} // namespace java::io

