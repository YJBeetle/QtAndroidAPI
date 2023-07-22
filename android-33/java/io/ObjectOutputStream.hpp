#pragma once

#include "../../JByteArray.hpp"
#include "./IOException.def.hpp"
#include "./ObjectOutputStream_PutField.def.hpp"
#include "./ObjectStreamClass.def.hpp"
#include "./OutputStream.def.hpp"
#include "../lang/Boolean.def.hpp"
#include "../../JClass.hpp"
#include "../lang/Enum.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectOutputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline ObjectOutputStream::ObjectOutputStream(java::io::OutputStream arg0)
		: java::io::OutputStream(
			"java.io.ObjectOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ObjectOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ObjectOutputStream::defaultWriteObject() const
	{
		callMethod<void>(
			"defaultWriteObject",
			"()V"
		);
	}
	inline void ObjectOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline java::io::ObjectOutputStream_PutField ObjectOutputStream::putFields() const
	{
		return callObjectMethod(
			"putFields",
			"()Ljava/io/ObjectOutputStream$PutField;"
		);
	}
	inline void ObjectOutputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void ObjectOutputStream::useProtocolVersion(jint arg0) const
	{
		callMethod<void>(
			"useProtocolVersion",
			"(I)V",
			arg0
		);
	}
	inline void ObjectOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void ObjectOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void ObjectOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void ObjectOutputStream::writeBoolean(jboolean arg0) const
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	inline void ObjectOutputStream::writeByte(jint arg0) const
	{
		callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	inline void ObjectOutputStream::writeBytes(JString arg0) const
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ObjectOutputStream::writeChar(jint arg0) const
	{
		callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	inline void ObjectOutputStream::writeChars(JString arg0) const
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ObjectOutputStream::writeDouble(jdouble arg0) const
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	inline void ObjectOutputStream::writeFields() const
	{
		callMethod<void>(
			"writeFields",
			"()V"
		);
	}
	inline void ObjectOutputStream::writeFloat(jfloat arg0) const
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	inline void ObjectOutputStream::writeInt(jint arg0) const
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	inline void ObjectOutputStream::writeLong(jlong arg0) const
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	inline void ObjectOutputStream::writeObject(JObject arg0) const
	{
		callMethod<void>(
			"writeObject",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ObjectOutputStream::writeShort(jint arg0) const
	{
		callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	inline void ObjectOutputStream::writeUTF(JString arg0) const
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ObjectOutputStream::writeUnshared(JObject arg0) const
	{
		callMethod<void>(
			"writeUnshared",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace java::io

// Base class headers
#include "./OutputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
