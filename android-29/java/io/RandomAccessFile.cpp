#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./RandomAccessFile.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	RandomAccessFile::RandomAccessFile(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RandomAccessFile::RandomAccessFile(java::io::File arg0, jstring arg1)
		: __JniBaseClass(
			"java.io.RandomAccessFile",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	RandomAccessFile::RandomAccessFile(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"java.io.RandomAccessFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void RandomAccessFile::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::nio::channels::FileChannel RandomAccessFile::getChannel()
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	java::io::FileDescriptor RandomAccessFile::getFD()
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong RandomAccessFile::getFilePointer()
	{
		return callMethod<jlong>(
			"getFilePointer",
			"()J"
		);
	}
	jlong RandomAccessFile::length()
	{
		return callMethod<jlong>(
			"length",
			"()J"
		);
	}
	jint RandomAccessFile::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint RandomAccessFile::read(jbyteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint RandomAccessFile::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean RandomAccessFile::readBoolean()
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte RandomAccessFile::readByte()
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jchar RandomAccessFile::readChar()
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jdouble RandomAccessFile::readDouble()
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	jfloat RandomAccessFile::readFloat()
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void RandomAccessFile::readFully(jbyteArray arg0)
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0
		);
	}
	void RandomAccessFile::readFully(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint RandomAccessFile::readInt()
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	jstring RandomAccessFile::readLine()
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong RandomAccessFile::readLong()
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jshort RandomAccessFile::readShort()
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	jstring RandomAccessFile::readUTF()
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RandomAccessFile::readUnsignedByte()
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jint RandomAccessFile::readUnsignedShort()
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	void RandomAccessFile::seek(jlong arg0)
	{
		callMethod<void>(
			"seek",
			"(J)V",
			arg0
		);
	}
	void RandomAccessFile::setLength(jlong arg0)
	{
		callMethod<void>(
			"setLength",
			"(J)V",
			arg0
		);
	}
	jint RandomAccessFile::skipBytes(jint arg0)
	{
		return callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
	void RandomAccessFile::write(jbyteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void RandomAccessFile::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RandomAccessFile::writeBoolean(jboolean arg0)
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void RandomAccessFile::writeByte(jint arg0)
	{
		callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeBytes(jstring arg0)
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RandomAccessFile::writeChar(jint arg0)
	{
		callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeChars(jstring arg0)
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RandomAccessFile::writeDouble(jdouble arg0)
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void RandomAccessFile::writeFloat(jfloat arg0)
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void RandomAccessFile::writeInt(jint arg0)
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeLong(jlong arg0)
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void RandomAccessFile::writeShort(jint arg0)
	{
		callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeUTF(jstring arg0)
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace java::io

