#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	class IOException;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class ObjectInputStream_GetField;
}
namespace java::io
{
	class ObjectStreamClass;
}
namespace java::lang
{
	class Boolean;
}
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Enum;
}

namespace java::io
{
	class ObjectInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		ObjectInputStream(QAndroidJniObject obj);
		// Constructors
		ObjectInputStream(java::io::InputStream &arg0);
		ObjectInputStream() = default;
		
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
		void registerValidation(__JniBaseClass arg0, jint arg1);
		void setObjectInputFilter(__JniBaseClass arg0);
		jint skipBytes(jint arg0);
	};
} // namespace java::io

