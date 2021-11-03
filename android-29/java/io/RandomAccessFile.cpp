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
	
	// QJniObject forward
	RandomAccessFile::RandomAccessFile(QJniObject obj) : JObject(obj) {}
	
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
	void RandomAccessFile::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::nio::channels::FileChannel RandomAccessFile::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	java::io::FileDescriptor RandomAccessFile::getFD() const
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong RandomAccessFile::getFilePointer() const
	{
		return callMethod<jlong>(
			"getFilePointer",
			"()J"
		);
	}
	jlong RandomAccessFile::length() const
	{
		return callMethod<jlong>(
			"length",
			"()J"
		);
	}
	jint RandomAccessFile::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint RandomAccessFile::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint RandomAccessFile::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jboolean RandomAccessFile::readBoolean() const
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte RandomAccessFile::readByte() const
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jchar RandomAccessFile::readChar() const
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jdouble RandomAccessFile::readDouble() const
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	jfloat RandomAccessFile::readFloat() const
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void RandomAccessFile::readFully(JByteArray arg0) const
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void RandomAccessFile::readFully(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint RandomAccessFile::readInt() const
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	JString RandomAccessFile::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	jlong RandomAccessFile::readLong() const
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jshort RandomAccessFile::readShort() const
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	JString RandomAccessFile::readUTF() const
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		);
	}
	jint RandomAccessFile::readUnsignedByte() const
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jint RandomAccessFile::readUnsignedShort() const
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	void RandomAccessFile::seek(jlong arg0) const
	{
		callMethod<void>(
			"seek",
			"(J)V",
			arg0
		);
	}
	void RandomAccessFile::setLength(jlong arg0) const
	{
		callMethod<void>(
			"setLength",
			"(J)V",
			arg0
		);
	}
	jint RandomAccessFile::skipBytes(jint arg0) const
	{
		return callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
	void RandomAccessFile::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void RandomAccessFile::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void RandomAccessFile::writeBoolean(jboolean arg0) const
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void RandomAccessFile::writeByte(jint arg0) const
	{
		callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeBytes(JString arg0) const
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void RandomAccessFile::writeChar(jint arg0) const
	{
		callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeChars(JString arg0) const
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void RandomAccessFile::writeDouble(jdouble arg0) const
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void RandomAccessFile::writeFloat(jfloat arg0) const
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void RandomAccessFile::writeInt(jint arg0) const
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeLong(jlong arg0) const
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void RandomAccessFile::writeShort(jint arg0) const
	{
		callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeUTF(JString arg0) const
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::io

