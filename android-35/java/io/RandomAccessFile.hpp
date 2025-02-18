#pragma once

#include "../../JByteArray.hpp"
#include "./File.def.hpp"
#include "./FileDescriptor.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/channels/FileChannel.def.hpp"
#include "./RandomAccessFile.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline RandomAccessFile::RandomAccessFile(java::io::File arg0, JString arg1)
		: JObject(
			"java.io.RandomAccessFile",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline RandomAccessFile::RandomAccessFile(JString arg0, JString arg1)
		: JObject(
			"java.io.RandomAccessFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline void RandomAccessFile::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::nio::channels::FileChannel RandomAccessFile::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	inline java::io::FileDescriptor RandomAccessFile::getFD() const
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	inline jlong RandomAccessFile::getFilePointer() const
	{
		return callMethod<jlong>(
			"getFilePointer",
			"()J"
		);
	}
	inline jlong RandomAccessFile::length() const
	{
		return callMethod<jlong>(
			"length",
			"()J"
		);
	}
	inline jint RandomAccessFile::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint RandomAccessFile::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint RandomAccessFile::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean RandomAccessFile::readBoolean() const
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	inline jbyte RandomAccessFile::readByte() const
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	inline jchar RandomAccessFile::readChar() const
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	inline jdouble RandomAccessFile::readDouble() const
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	inline jfloat RandomAccessFile::readFloat() const
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	inline void RandomAccessFile::readFully(JByteArray arg0) const
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void RandomAccessFile::readFully(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint RandomAccessFile::readInt() const
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	inline JString RandomAccessFile::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	inline jlong RandomAccessFile::readLong() const
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	inline jshort RandomAccessFile::readShort() const
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	inline JString RandomAccessFile::readUTF() const
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		);
	}
	inline jint RandomAccessFile::readUnsignedByte() const
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	inline jint RandomAccessFile::readUnsignedShort() const
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	inline void RandomAccessFile::seek(jlong arg0) const
	{
		callMethod<void>(
			"seek",
			"(J)V",
			arg0
		);
	}
	inline void RandomAccessFile::setLength(jlong arg0) const
	{
		callMethod<void>(
			"setLength",
			"(J)V",
			arg0
		);
	}
	inline jint RandomAccessFile::skipBytes(jint arg0) const
	{
		return callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
	inline void RandomAccessFile::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void RandomAccessFile::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void RandomAccessFile::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void RandomAccessFile::writeBoolean(jboolean arg0) const
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	inline void RandomAccessFile::writeByte(jint arg0) const
	{
		callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	inline void RandomAccessFile::writeBytes(JString arg0) const
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void RandomAccessFile::writeChar(jint arg0) const
	{
		callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	inline void RandomAccessFile::writeChars(JString arg0) const
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void RandomAccessFile::writeDouble(jdouble arg0) const
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	inline void RandomAccessFile::writeFloat(jfloat arg0) const
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	inline void RandomAccessFile::writeInt(jint arg0) const
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	inline void RandomAccessFile::writeLong(jlong arg0) const
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	inline void RandomAccessFile::writeShort(jint arg0) const
	{
		callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	inline void RandomAccessFile::writeUTF(JString arg0) const
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::io

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
