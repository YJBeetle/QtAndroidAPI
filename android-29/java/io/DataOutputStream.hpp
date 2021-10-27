#pragma once

#ifndef JAVA_IO_DATAOUTPUTSTREAM
#define JAVA_IO_DATAOUTPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "OutputStream.hpp"
#include "FilterOutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::io
{
	class DataOutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		
		// Methods
		void flush();
		jint size();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void writeBoolean(jboolean arg0);
		void writeByte(jint arg0);
		void writeBytes(jstring arg0);
		void writeBytes(const QString &arg0);
		void writeChar(jint arg0);
		void writeChars(jstring arg0);
		void writeChars(const QString &arg0);
		void writeDouble(jdouble arg0);
		void writeFloat(jfloat arg0);
		void writeInt(jint arg0);
		void writeLong(jlong arg0);
		void writeShort(jint arg0);
		void writeUTF(jstring arg0);
		void writeUTF(const QString &arg0);
	};
} // namespace __jni_impl::java::io

#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void DataOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.DataOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void DataOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jint DataOutputStream::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void DataOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DataOutputStream::writeBoolean(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void DataOutputStream::writeByte(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::writeBytes(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DataOutputStream::writeBytes(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DataOutputStream::writeChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::writeChars(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DataOutputStream::writeChars(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DataOutputStream::writeDouble(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void DataOutputStream::writeFloat(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void DataOutputStream::writeInt(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::writeLong(jlong arg0)
	{
		__thiz.callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void DataOutputStream::writeShort(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	void DataOutputStream::writeUTF(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DataOutputStream::writeUTF(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class DataOutputStream : public __jni_impl::java::io::DataOutputStream
	{
	public:
		DataOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		DataOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_DATAOUTPUTSTREAM

