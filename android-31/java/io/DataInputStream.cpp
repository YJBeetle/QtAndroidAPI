#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "./InputStream.hpp"
#include "../../JString.hpp"
#include "./DataInputStream.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	DataInputStream::DataInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.DataInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	JString DataInputStream::readUTF(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.io.DataInputStream",
			"readUTF",
			"(Ljava/io/DataInput;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint DataInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint DataInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jboolean DataInputStream::readBoolean() const
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte DataInputStream::readByte() const
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jchar DataInputStream::readChar() const
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jdouble DataInputStream::readDouble() const
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	jfloat DataInputStream::readFloat() const
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void DataInputStream::readFully(JByteArray arg0) const
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void DataInputStream::readFully(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint DataInputStream::readInt() const
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	JString DataInputStream::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	jlong DataInputStream::readLong() const
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jshort DataInputStream::readShort() const
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	JString DataInputStream::readUTF() const
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		);
	}
	jint DataInputStream::readUnsignedByte() const
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jint DataInputStream::readUnsignedShort() const
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	jint DataInputStream::skipBytes(jint arg0) const
	{
		return callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
} // namespace java::io

