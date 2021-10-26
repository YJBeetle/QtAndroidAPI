#pragma once

#ifndef JAVA_IO_OBJECTINPUTSTREAM
#define JAVA_IO_OBJECTINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class ObjectStreamClass;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream_GetField;
}
namespace __jni_impl::java::lang
{
	class Boolean;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang
{
	class Enum;
}
namespace __jni_impl::java::io
{
	class IOException;
}

namespace __jni_impl::java::io
{
	class ObjectInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		
		// Methods
		void defaultReadObject();
		jobject readObject();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read();
		QAndroidJniObject readFields();
		jstring readLine();
		void close();
		jint readInt();
		jint available();
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
		void readFully(jbyteArray arg0);
		void readFully(jbyteArray arg0, jint arg1, jint arg2);
		jchar readChar();
		jobject readUnshared();
		void registerValidation(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject getObjectInputFilter();
		void setObjectInputFilter(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"
#include "ObjectStreamClass.hpp"
#include "ObjectInputStream_GetField.hpp"
#include "../lang/Boolean.hpp"
#include "../lang/ClassLoader.hpp"
#include "../lang/Enum.hpp"
#include "IOException.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void ObjectInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ObjectInputStream::defaultReadObject()
	{
		__thiz.callMethod<void>(
			"defaultReadObject",
			"()V"
		);
	}
	jobject ObjectInputStream::readObject()
	{
		return __thiz.callObjectMethod(
			"readObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint ObjectInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint ObjectInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	QAndroidJniObject ObjectInputStream::readFields()
	{
		return __thiz.callObjectMethod(
			"readFields",
			"()Ljava/io/ObjectInputStream$GetField;"
		);
	}
	jstring ObjectInputStream::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ObjectInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint ObjectInputStream::readInt()
	{
		return __thiz.callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	jint ObjectInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	jstring ObjectInputStream::readUTF()
	{
		return __thiz.callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat ObjectInputStream::readFloat()
	{
		return __thiz.callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	jlong ObjectInputStream::readLong()
	{
		return __thiz.callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jint ObjectInputStream::skipBytes(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
	jboolean ObjectInputStream::readBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte ObjectInputStream::readByte()
	{
		return __thiz.callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jint ObjectInputStream::readUnsignedByte()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jshort ObjectInputStream::readShort()
	{
		return __thiz.callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	jint ObjectInputStream::readUnsignedShort()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	jdouble ObjectInputStream::readDouble()
	{
		return __thiz.callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	void ObjectInputStream::readFully(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"readFully",
			"([B)V",
			arg0
		);
	}
	void ObjectInputStream::readFully(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"readFully",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jchar ObjectInputStream::readChar()
	{
		return __thiz.callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jobject ObjectInputStream::readUnshared()
	{
		return __thiz.callObjectMethod(
			"readUnshared",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ObjectInputStream::registerValidation(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"registerValidation",
			"(Ljava/io/ObjectInputValidation;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ObjectInputStream::getObjectInputFilter()
	{
		return __thiz.callObjectMethod(
			"getObjectInputFilter",
			"()Ljava/io/ObjectInputFilter;"
		);
	}
	void ObjectInputStream::setObjectInputFilter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setObjectInputFilter",
			"(Ljava/io/ObjectInputFilter;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ObjectInputStream : public __jni_impl::java::io::ObjectInputStream
	{
	public:
		ObjectInputStream(QAndroidJniObject obj) { __thiz = obj; }
		ObjectInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_OBJECTINPUTSTREAM

