#include "../../JByteArray.hpp"
#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./RandomAccessFile.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	RandomAccessFile::RandomAccessFile(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RandomAccessFile::RandomAccessFile(java::io::File arg0, JString arg1)
		: JObject(
			"java.io.RandomAccessFile",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	RandomAccessFile::RandomAccessFile(JString arg0, JString arg1)
		: JObject(
			"java.io.RandomAccessFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
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
	jint RandomAccessFile::read(JByteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint RandomAccessFile::read(JByteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
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
	void RandomAccessFile::readFully(JByteArray arg0)
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void RandomAccessFile::readFully(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0.object<jbyteArray>(),
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
	JString RandomAccessFile::readLine()
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
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
	JString RandomAccessFile::readUTF()
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		);
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
	void RandomAccessFile::write(JByteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
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
	void RandomAccessFile::write(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
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
	void RandomAccessFile::writeBytes(JString arg0)
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	void RandomAccessFile::writeChars(JString arg0)
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	void RandomAccessFile::writeUTF(JString arg0)
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::io

