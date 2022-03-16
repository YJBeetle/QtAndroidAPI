#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "./InputStream.def.hpp"
#include "../../JString.hpp"
#include "./DataInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline DataInputStream::DataInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.DataInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JString DataInputStream::readUTF(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.io.DataInputStream",
			"readUTF",
			"(Ljava/io/DataInput;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint DataInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint DataInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean DataInputStream::readBoolean() const
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	inline jbyte DataInputStream::readByte() const
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	inline jchar DataInputStream::readChar() const
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	inline jdouble DataInputStream::readDouble() const
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	inline jfloat DataInputStream::readFloat() const
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	inline void DataInputStream::readFully(JByteArray arg0) const
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void DataInputStream::readFully(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint DataInputStream::readInt() const
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	inline JString DataInputStream::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	inline jlong DataInputStream::readLong() const
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	inline jshort DataInputStream::readShort() const
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	inline JString DataInputStream::readUTF() const
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		);
	}
	inline jint DataInputStream::readUnsignedByte() const
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	inline jint DataInputStream::readUnsignedShort() const
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	inline jint DataInputStream::skipBytes(jint arg0) const
	{
		return callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
} // namespace java::io

// Base class headers
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

