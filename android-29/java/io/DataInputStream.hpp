#pragma once

#ifndef JAVA_IO_DATAINPUTSTREAM
#define JAVA_IO_DATAINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"
#include "FilterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::io
{
	class DataInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		
		// Methods
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read(jbyteArray arg0);
		jstring readLine();
		jint readInt();
		static jstring readUTF(__jni_impl::__JniBaseClass arg0);
		jstring readUTF();
		jfloat readFloat();
		jlong readLong();
		jint skipBytes(jint arg0);
		jboolean readBoolean();
		jbyte readByte();
		jint readUnsignedByte();
		jshort readShort();
		jint readUnsignedShort();
		jdouble readDouble();
		void readFully(jbyteArray arg0, jint arg1, jint arg2);
		void readFully(jbyteArray arg0);
		jchar readChar();
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void DataInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.DataInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint DataInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint DataInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jstring DataInputStream::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DataInputStream::readInt()
	{
		return __thiz.callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	jstring DataInputStream::readUTF(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.DataInputStream",
			"readUTF",
			"(Ljava/io/DataInput;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring DataInputStream::readUTF()
	{
		return __thiz.callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat DataInputStream::readFloat()
	{
		return __thiz.callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	jlong DataInputStream::readLong()
	{
		return __thiz.callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jint DataInputStream::skipBytes(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
	jboolean DataInputStream::readBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte DataInputStream::readByte()
	{
		return __thiz.callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jint DataInputStream::readUnsignedByte()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jshort DataInputStream::readShort()
	{
		return __thiz.callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	jint DataInputStream::readUnsignedShort()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	jdouble DataInputStream::readDouble()
	{
		return __thiz.callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	void DataInputStream::readFully(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"readFully",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DataInputStream::readFully(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"readFully",
			"([B)V",
			arg0
		);
	}
	jchar DataInputStream::readChar()
	{
		return __thiz.callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class DataInputStream : public __jni_impl::java::io::DataInputStream
	{
	public:
		DataInputStream(QAndroidJniObject obj) { __thiz = obj; }
		DataInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_DATAINPUTSTREAM

