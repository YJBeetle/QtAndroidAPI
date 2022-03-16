#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./IOException.def.hpp"
#include "./InputStream.def.hpp"
#include "./ObjectInputStream_GetField.def.hpp"
#include "./ObjectStreamClass.def.hpp"
#include "../lang/Boolean.def.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassLoader.def.hpp"
#include "../lang/Enum.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline ObjectInputStream::ObjectInputStream(java::io::InputStream arg0)
		: java::io::InputStream(
			"java.io.ObjectInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ObjectInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void ObjectInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ObjectInputStream::defaultReadObject() const
	{
		callMethod<void>(
			"defaultReadObject",
			"()V"
		);
	}
	inline JObject ObjectInputStream::getObjectInputFilter() const
	{
		return callObjectMethod(
			"getObjectInputFilter",
			"()Ljava/io/ObjectInputFilter;"
		);
	}
	inline jint ObjectInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint ObjectInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean ObjectInputStream::readBoolean() const
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	inline jbyte ObjectInputStream::readByte() const
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	inline jchar ObjectInputStream::readChar() const
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	inline jdouble ObjectInputStream::readDouble() const
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	inline java::io::ObjectInputStream_GetField ObjectInputStream::readFields() const
	{
		return callObjectMethod(
			"readFields",
			"()Ljava/io/ObjectInputStream$GetField;"
		);
	}
	inline jfloat ObjectInputStream::readFloat() const
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	inline void ObjectInputStream::readFully(JByteArray arg0) const
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void ObjectInputStream::readFully(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint ObjectInputStream::readInt() const
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	inline JString ObjectInputStream::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	inline jlong ObjectInputStream::readLong() const
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	inline JObject ObjectInputStream::readObject() const
	{
		return callObjectMethod(
			"readObject",
			"()Ljava/lang/Object;"
		);
	}
	inline jshort ObjectInputStream::readShort() const
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	inline JString ObjectInputStream::readUTF() const
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ObjectInputStream::readUnshared() const
	{
		return callObjectMethod(
			"readUnshared",
			"()Ljava/lang/Object;"
		);
	}
	inline jint ObjectInputStream::readUnsignedByte() const
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	inline jint ObjectInputStream::readUnsignedShort() const
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	inline void ObjectInputStream::registerValidation(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"registerValidation",
			"(Ljava/io/ObjectInputValidation;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ObjectInputStream::setObjectInputFilter(JObject arg0) const
	{
		callMethod<void>(
			"setObjectInputFilter",
			"(Ljava/io/ObjectInputFilter;)V",
			arg0.object()
		);
	}
	inline jint ObjectInputStream::skipBytes(jint arg0) const
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

