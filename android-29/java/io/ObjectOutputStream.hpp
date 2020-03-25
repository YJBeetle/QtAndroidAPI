#pragma once

#ifndef JAVA_IO_OBJECTOUTPUTSTREAM
#define JAVA_IO_OBJECTOUTPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream_PutField;
}
namespace __jni_impl::java::lang
{
	class Boolean;
}
namespace __jni_impl::java::io
{
	class IOException;
}
namespace __jni_impl::java::io
{
	class ObjectStreamClass;
}
namespace __jni_impl::java::lang
{
	class Enum;
}

namespace __jni_impl::java::io
{
	class ObjectOutputStream : public __jni_impl::java::io::OutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		
		// Methods
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void write(jint arg0);
		void write(jbyteArray arg0);
		void defaultWriteObject();
		void writeObject(jobject arg0);
		QAndroidJniObject putFields();
		void writeFields();
		void flush();
		void close();
		void writeInt(jint arg0);
		void reset();
		void writeUTF(jstring arg0);
		void writeFloat(jfloat arg0);
		void writeBytes(jstring arg0);
		void writeLong(jlong arg0);
		void writeBoolean(jboolean arg0);
		void writeByte(jint arg0);
		void writeShort(jint arg0);
		void writeDouble(jdouble arg0);
		void writeChars(jstring arg0);
		void writeChar(jint arg0);
		void useProtocolVersion(jint arg0);
		void writeUnshared(jobject arg0);
	};
} // namespace __jni_impl::java::io

#include "OutputStream.hpp"
#include "ObjectOutputStream_PutField.hpp"
#include "../lang/Boolean.hpp"
#include "IOException.hpp"
#include "ObjectStreamClass.hpp"
#include "../lang/Enum.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void ObjectOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void ObjectOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void ObjectOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void ObjectOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0);
	}
	void ObjectOutputStream::defaultWriteObject()
	{
		__thiz.callMethod<void>(
			"defaultWriteObject",
			"()V");
	}
	void ObjectOutputStream::writeObject(jobject arg0)
	{
		__thiz.callMethod<void>(
			"writeObject",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject ObjectOutputStream::putFields()
	{
		return __thiz.callObjectMethod(
			"putFields",
			"()Ljava/io/ObjectOutputStream$PutField;");
	}
	void ObjectOutputStream::writeFields()
	{
		__thiz.callMethod<void>(
			"writeFields",
			"()V");
	}
	void ObjectOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void ObjectOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void ObjectOutputStream::writeInt(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeInt",
			"(I)V",
			arg0);
	}
	void ObjectOutputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	void ObjectOutputStream::writeUTF(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ObjectOutputStream::writeFloat(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0);
	}
	void ObjectOutputStream::writeBytes(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ObjectOutputStream::writeLong(jlong arg0)
	{
		__thiz.callMethod<void>(
			"writeLong",
			"(J)V",
			arg0);
	}
	void ObjectOutputStream::writeBoolean(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0);
	}
	void ObjectOutputStream::writeByte(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeByte",
			"(I)V",
			arg0);
	}
	void ObjectOutputStream::writeShort(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeShort",
			"(I)V",
			arg0);
	}
	void ObjectOutputStream::writeDouble(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0);
	}
	void ObjectOutputStream::writeChars(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ObjectOutputStream::writeChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeChar",
			"(I)V",
			arg0);
	}
	void ObjectOutputStream::useProtocolVersion(jint arg0)
	{
		__thiz.callMethod<void>(
			"useProtocolVersion",
			"(I)V",
			arg0);
	}
	void ObjectOutputStream::writeUnshared(jobject arg0)
	{
		__thiz.callMethod<void>(
			"writeUnshared",
			"(Ljava/lang/Object;)V",
			arg0);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ObjectOutputStream : public __jni_impl::java::io::ObjectOutputStream
	{
	public:
		ObjectOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		ObjectOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_OBJECTOUTPUTSTREAM

