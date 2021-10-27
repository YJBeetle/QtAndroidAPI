#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"

namespace __jni_impl::java::io
{
	class IOException;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream_GetField;
}
namespace __jni_impl::java::io
{
	class ObjectStreamClass;
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
	class ObjectInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		
		// Methods
		jint available();
		void close();
		void defaultReadObject();
		QAndroidJniObject getObjectInputFilter();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jboolean readBoolean();
		jbyte readByte();
		jchar readChar();
		jdouble readDouble();
		QAndroidJniObject readFields();
		jfloat readFloat();
		void readFully(jbyteArray arg0);
		void readFully(jbyteArray arg0, jint arg1, jint arg2);
		jint readInt();
		jstring readLine();
		jlong readLong();
		jobject readObject();
		jshort readShort();
		jstring readUTF();
		jobject readUnshared();
		jint readUnsignedByte();
		jint readUnsignedShort();
		void registerValidation(__jni_impl::__JniBaseClass arg0, jint arg1);
		void setObjectInputFilter(__jni_impl::__JniBaseClass arg0);
		jint skipBytes(jint arg0);
	};
} // namespace __jni_impl::java::io

#include "./IOException.hpp"
#include "./InputStream.hpp"
#include "./ObjectInputStream_GetField.hpp"
#include "./ObjectStreamClass.hpp"
#include "../lang/Boolean.hpp"
#include "../lang/ClassLoader.hpp"
#include "../lang/Enum.hpp"

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
	jint ObjectInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ObjectInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ObjectInputStream::defaultReadObject()
	{
		__thiz.callMethod<void>(
			"defaultReadObject",
			"()V"
		);
	}
	QAndroidJniObject ObjectInputStream::getObjectInputFilter()
	{
		return __thiz.callObjectMethod(
			"getObjectInputFilter",
			"()Ljava/io/ObjectInputFilter;"
		);
	}
	jint ObjectInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
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
	jchar ObjectInputStream::readChar()
	{
		return __thiz.callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
	jdouble ObjectInputStream::readDouble()
	{
		return __thiz.callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	QAndroidJniObject ObjectInputStream::readFields()
	{
		return __thiz.callObjectMethod(
			"readFields",
			"()Ljava/io/ObjectInputStream$GetField;"
		);
	}
	jfloat ObjectInputStream::readFloat()
	{
		return __thiz.callMethod<jfloat>(
			"readFloat",
			"()F"
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
	jint ObjectInputStream::readInt()
	{
		return __thiz.callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	jstring ObjectInputStream::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ObjectInputStream::readLong()
	{
		return __thiz.callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	jobject ObjectInputStream::readObject()
	{
		return __thiz.callObjectMethod(
			"readObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jshort ObjectInputStream::readShort()
	{
		return __thiz.callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	jstring ObjectInputStream::readUTF()
	{
		return __thiz.callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject ObjectInputStream::readUnshared()
	{
		return __thiz.callObjectMethod(
			"readUnshared",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint ObjectInputStream::readUnsignedByte()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jint ObjectInputStream::readUnsignedShort()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
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
	void ObjectInputStream::setObjectInputFilter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setObjectInputFilter",
			"(Ljava/io/ObjectInputFilter;)V",
			arg0.__jniObject().object()
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

