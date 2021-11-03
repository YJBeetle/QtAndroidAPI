#include "../../JByteArray.hpp"
#include "./IOException.hpp"
#include "./ObjectOutputStream_PutField.hpp"
#include "./ObjectStreamClass.hpp"
#include "./OutputStream.hpp"
#include "../lang/Boolean.hpp"
#include "../../JClass.hpp"
#include "../lang/Enum.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	ObjectOutputStream::ObjectOutputStream(QJniObject obj) : java::io::OutputStream(obj) {}
	
	// Constructors
	ObjectOutputStream::ObjectOutputStream(java::io::OutputStream arg0)
		: java::io::OutputStream(
			"java.io.ObjectOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	void ObjectOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ObjectOutputStream::defaultWriteObject() const
	{
		callMethod<void>(
			"defaultWriteObject",
			"()V"
		);
	}
	void ObjectOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::io::ObjectOutputStream_PutField ObjectOutputStream::putFields() const
	{
		return callObjectMethod(
			"putFields",
			"()Ljava/io/ObjectOutputStream$PutField;"
		);
	}
	void ObjectOutputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void ObjectOutputStream::useProtocolVersion(jint arg0) const
	{
		callMethod<void>(
			"useProtocolVersion",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void ObjectOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void ObjectOutputStream::writeBoolean(jboolean arg0) const
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void ObjectOutputStream::writeByte(jint arg0) const
	{
		callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::writeBytes(JString arg0) const
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ObjectOutputStream::writeChar(jint arg0) const
	{
		callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::writeChars(JString arg0) const
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ObjectOutputStream::writeDouble(jdouble arg0) const
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void ObjectOutputStream::writeFields() const
	{
		callMethod<void>(
			"writeFields",
			"()V"
		);
	}
	void ObjectOutputStream::writeFloat(jfloat arg0) const
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void ObjectOutputStream::writeInt(jint arg0) const
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::writeLong(jlong arg0) const
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void ObjectOutputStream::writeObject(JObject arg0) const
	{
		callMethod<void>(
			"writeObject",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ObjectOutputStream::writeShort(jint arg0) const
	{
		callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	void ObjectOutputStream::writeUTF(JString arg0) const
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ObjectOutputStream::writeUnshared(JObject arg0) const
	{
		callMethod<void>(
			"writeUnshared",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace java::io

