#include "./InputStream.hpp"
#include "./DataInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	DataInputStream::DataInputStream(QJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	DataInputStream::DataInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.DataInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	jstring DataInputStream::readUTF(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.io.DataInputStream",
			"readUTF",
			"(Ljava/io/DataInput;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint DataInputStream::read(jbyteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint DataInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean DataInputStream::readBoolean()
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte DataInputStream::readByte()
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jchar DataInputStream::readChar()
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jdouble DataInputStream::readDouble()
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	jfloat DataInputStream::readFloat()
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void DataInputStream::readFully(jbyteArray arg0)
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0
		);
	}
	void DataInputStream::readFully(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint DataInputStream::readInt()
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	jstring DataInputStream::readLine()
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong DataInputStream::readLong()
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jshort DataInputStream::readShort()
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	jstring DataInputStream::readUTF()
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DataInputStream::readUnsignedByte()
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jint DataInputStream::readUnsignedShort()
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	jint DataInputStream::skipBytes(jint arg0)
	{
		return callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
} // namespace java::io

