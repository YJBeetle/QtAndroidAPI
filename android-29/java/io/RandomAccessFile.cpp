#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./RandomAccessFile.hpp"

namespace java::io
{
	// Fields
	
	RandomAccessFile::RandomAccessFile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RandomAccessFile::RandomAccessFile(java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.RandomAccessFile",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	RandomAccessFile::RandomAccessFile(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.RandomAccessFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void RandomAccessFile::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject RandomAccessFile::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	QAndroidJniObject RandomAccessFile::getFD()
	{
		return __thiz.callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong RandomAccessFile::getFilePointer()
	{
		return __thiz.callMethod<jlong>(
			"getFilePointer",
			"()J"
		);
	}
	jlong RandomAccessFile::length()
	{
		return __thiz.callMethod<jlong>(
			"length",
			"()J"
		);
	}
	jint RandomAccessFile::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint RandomAccessFile::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint RandomAccessFile::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean RandomAccessFile::readBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte RandomAccessFile::readByte()
	{
		return __thiz.callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jchar RandomAccessFile::readChar()
	{
		return __thiz.callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jdouble RandomAccessFile::readDouble()
	{
		return __thiz.callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	jfloat RandomAccessFile::readFloat()
	{
		return __thiz.callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void RandomAccessFile::readFully(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"readFully",
			"([B)V",
			arg0
		);
	}
	void RandomAccessFile::readFully(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"readFully",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint RandomAccessFile::readInt()
	{
		return __thiz.callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	jstring RandomAccessFile::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong RandomAccessFile::readLong()
	{
		return __thiz.callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jshort RandomAccessFile::readShort()
	{
		return __thiz.callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	jstring RandomAccessFile::readUTF()
	{
		return __thiz.callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RandomAccessFile::readUnsignedByte()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jint RandomAccessFile::readUnsignedShort()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	void RandomAccessFile::seek(jlong arg0)
	{
		__thiz.callMethod<void>(
			"seek",
			"(J)V",
			arg0
		);
	}
	void RandomAccessFile::setLength(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setLength",
			"(J)V",
			arg0
		);
	}
	jint RandomAccessFile::skipBytes(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
	void RandomAccessFile::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void RandomAccessFile::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RandomAccessFile::writeBoolean(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void RandomAccessFile::writeByte(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeBytes(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RandomAccessFile::writeChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeChars(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RandomAccessFile::writeDouble(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void RandomAccessFile::writeFloat(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void RandomAccessFile::writeInt(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeLong(jlong arg0)
	{
		__thiz.callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void RandomAccessFile::writeShort(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeUTF(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace java::io

