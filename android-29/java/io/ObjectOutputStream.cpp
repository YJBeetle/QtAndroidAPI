#include "./IOException.hpp"
#include "./ObjectOutputStream_PutField.hpp"
#include "./ObjectStreamClass.hpp"
#include "./OutputStream.hpp"
#include "../lang/Boolean.hpp"
#include "../lang/Enum.hpp"
#include "./ObjectOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	ObjectOutputStream::ObjectOutputStream(QAndroidJniObject obj) : java::io::OutputStream(obj) {}
	
	// Constructors
	ObjectOutputStream::ObjectOutputStream(java::io::OutputStream arg0)
		: java::io::OutputStream(
			"java.io.ObjectOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	void ObjectOutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ObjectOutputStream::defaultWriteObject()
	{
		callMethod<void>(
			"defaultWriteObject",
			"()V"
		);
	}
	void ObjectOutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::io::ObjectOutputStream_PutField ObjectOutputStream::putFields()
	{
		return callObjectMethod(
			"putFields",
			"()Ljava/io/ObjectOutputStream$PutField;"
		);
	}
	void ObjectOutputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void ObjectOutputStream::useProtocolVersion(jint arg0)
	{
		callMethod<void>(
			"useProtocolVersion",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::write(jbyteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void ObjectOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ObjectOutputStream::writeBoolean(jboolean arg0)
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void ObjectOutputStream::writeByte(jint arg0)
	{
		callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::writeBytes(jstring arg0)
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ObjectOutputStream::writeChar(jint arg0)
	{
		callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::writeChars(jstring arg0)
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ObjectOutputStream::writeDouble(jdouble arg0)
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void ObjectOutputStream::writeFields()
	{
		callMethod<void>(
			"writeFields",
			"()V"
		);
	}
	void ObjectOutputStream::writeFloat(jfloat arg0)
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void ObjectOutputStream::writeInt(jint arg0)
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::writeLong(jlong arg0)
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void ObjectOutputStream::writeObject(jobject arg0)
	{
		callMethod<void>(
			"writeObject",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ObjectOutputStream::writeShort(jint arg0)
	{
		callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::writeUTF(jstring arg0)
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ObjectOutputStream::writeUnshared(jobject arg0)
	{
		callMethod<void>(
			"writeUnshared",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace java::io

