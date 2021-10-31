#include "./OutputStream.hpp"
#include "./DataOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	DataOutputStream::DataOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	DataOutputStream::DataOutputStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.io.DataOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	void DataOutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	jint DataOutputStream::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void DataOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DataOutputStream::writeBoolean(jboolean arg0)
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void DataOutputStream::writeByte(jint arg0)
	{
		callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::writeBytes(jstring arg0)
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DataOutputStream::writeChar(jint arg0)
	{
		callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::writeChars(jstring arg0)
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DataOutputStream::writeDouble(jdouble arg0)
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void DataOutputStream::writeFloat(jfloat arg0)
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void DataOutputStream::writeInt(jint arg0)
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::writeLong(jlong arg0)
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void DataOutputStream::writeShort(jint arg0)
	{
		callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::writeUTF(jstring arg0)
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace java::io

