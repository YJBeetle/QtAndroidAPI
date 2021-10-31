#include "./IOException.hpp"
#include "./InputStream.hpp"
#include "./ObjectInputStream_GetField.hpp"
#include "./ObjectStreamClass.hpp"
#include "../lang/Boolean.hpp"
#include "../lang/ClassLoader.hpp"
#include "../lang/Enum.hpp"
#include "./ObjectInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	ObjectInputStream::ObjectInputStream(QAndroidJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	ObjectInputStream::ObjectInputStream(java::io::InputStream arg0)
		: java::io::InputStream(
			"java.io.ObjectInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ObjectInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ObjectInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ObjectInputStream::defaultReadObject()
	{
		callMethod<void>(
			"defaultReadObject",
			"()V"
		);
	}
	__JniBaseClass ObjectInputStream::getObjectInputFilter()
	{
		return callObjectMethod(
			"getObjectInputFilter",
			"()Ljava/io/ObjectInputFilter;"
		);
	}
	jint ObjectInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint ObjectInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean ObjectInputStream::readBoolean()
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte ObjectInputStream::readByte()
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jchar ObjectInputStream::readChar()
	{
		return callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jdouble ObjectInputStream::readDouble()
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	java::io::ObjectInputStream_GetField ObjectInputStream::readFields()
	{
		return callObjectMethod(
			"readFields",
			"()Ljava/io/ObjectInputStream$GetField;"
		);
	}
	jfloat ObjectInputStream::readFloat()
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void ObjectInputStream::readFully(jbyteArray arg0)
	{
		callMethod<void>(
			"readFully",
			"([B)V",
			arg0
		);
	}
	void ObjectInputStream::readFully(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"readFully",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint ObjectInputStream::readInt()
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	jstring ObjectInputStream::readLine()
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ObjectInputStream::readLong()
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jobject ObjectInputStream::readObject()
	{
		return callObjectMethod(
			"readObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jshort ObjectInputStream::readShort()
	{
		return callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	jstring ObjectInputStream::readUTF()
	{
		return callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject ObjectInputStream::readUnshared()
	{
		return callObjectMethod(
			"readUnshared",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint ObjectInputStream::readUnsignedByte()
	{
		return callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jint ObjectInputStream::readUnsignedShort()
	{
		return callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	void ObjectInputStream::registerValidation(__JniBaseClass arg0, jint arg1)
	{
		callMethod<void>(
			"registerValidation",
			"(Ljava/io/ObjectInputValidation;I)V",
			arg0.object(),
			arg1
		);
	}
	void ObjectInputStream::setObjectInputFilter(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setObjectInputFilter",
			"(Ljava/io/ObjectInputFilter;)V",
			arg0.object()
		);
	}
	jint ObjectInputStream::skipBytes(jint arg0)
	{
		return callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
} // namespace java::io

