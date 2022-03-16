#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./IOException.hpp"
#include "./InputStream.hpp"
#include "./ObjectInputStream_GetField.hpp"
#include "./ObjectStreamClass.hpp"
#include "../lang/Boolean.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassLoader.hpp"
#include "../lang/Enum.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectInputStream.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	ObjectInputStream::ObjectInputStream(java::io::InputStream arg0)
		: java::io::InputStream(
			"java.io.ObjectInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ObjectInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ObjectInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ObjectInputStream::defaultReadObject() const
	{
		callMethod<void>(
			"defaultReadObject",
			"()V"
		);
	}
	JObject ObjectInputStream::getObjectInputFilter() const
	{
		return callObjectMethod(
			"getObjectInputFilter",
			"()Ljava/io/ObjectInputFilter;"
		);
	}
	jint ObjectInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint ObjectInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jboolean ObjectInputStream::readBoolean() const
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte ObjectInputStream::readByte() const
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jchar ObjectInputStream::readChar() const
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jdouble ObjectInputStream::readDouble() const
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	java::io::ObjectInputStream_GetField ObjectInputStream::readFields() const
	{
		return callObjectMethod(
			"readFields",
			"()Ljava/io/ObjectInputStream$GetField;"
		);
	}
	jfloat ObjectInputStream::readFloat() const
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void ObjectInputStream::readFully(JByteArray arg0) const
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void ObjectInputStream::readFully(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint ObjectInputStream::readInt() const
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	JString ObjectInputStream::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	jlong ObjectInputStream::readLong() const
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	JObject ObjectInputStream::readObject() const
	{
		return callObjectMethod(
			"readObject",
			"()Ljava/lang/Object;"
		);
	}
	jshort ObjectInputStream::readShort() const
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	JString ObjectInputStream::readUTF() const
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		);
	}
	JObject ObjectInputStream::readUnshared() const
	{
		return callObjectMethod(
			"readUnshared",
			"()Ljava/lang/Object;"
		);
	}
	jint ObjectInputStream::readUnsignedByte() const
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jint ObjectInputStream::readUnsignedShort() const
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	void ObjectInputStream::registerValidation(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"registerValidation",
			"(Ljava/io/ObjectInputValidation;I)V",
			arg0.object(),
			arg1
		);
	}
	void ObjectInputStream::setObjectInputFilter(JObject arg0) const
	{
		callMethod<void>(
			"setObjectInputFilter",
			"(Ljava/io/ObjectInputFilter;)V",
			arg0.object()
		);
	}
	jint ObjectInputStream::skipBytes(jint arg0) const
	{
		return callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
} // namespace java::io

