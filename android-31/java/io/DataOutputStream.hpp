#pragma once

#include "../../JByteArray.hpp"
#include "./OutputStream.def.hpp"
#include "../../JString.hpp"
#include "./DataOutputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline DataOutputStream::DataOutputStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.io.DataOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void DataOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline jint DataOutputStream::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline void DataOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void DataOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void DataOutputStream::writeBoolean(jboolean arg0) const
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	inline void DataOutputStream::writeByte(jint arg0) const
	{
		callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	inline void DataOutputStream::writeBytes(JString arg0) const
	{
		callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DataOutputStream::writeChar(jint arg0) const
	{
		callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	inline void DataOutputStream::writeChars(JString arg0) const
	{
		callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DataOutputStream::writeDouble(jdouble arg0) const
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	inline void DataOutputStream::writeFloat(jfloat arg0) const
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	inline void DataOutputStream::writeInt(jint arg0) const
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	inline void DataOutputStream::writeLong(jlong arg0) const
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	inline void DataOutputStream::writeShort(jint arg0) const
	{
		callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	inline void DataOutputStream::writeUTF(JString arg0) const
	{
		callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::io

// Base class headers
#include "./OutputStream.hpp"
#include "./FilterOutputStream.hpp"

