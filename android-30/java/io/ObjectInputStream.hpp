#pragma once

#include "./InputStream.hpp"

class JByteArray;
class JArray;
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
class JClass;
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Enum;
}
class JObject;
class JString;

namespace java::io
{
	class ObjectInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObjectInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		ObjectInputStream(QAndroidJniObject obj);
		
		// Constructors
		ObjectInputStream(java::io::InputStream arg0);
		
		// Methods
		jint available();
		void close();
		void defaultReadObject();
		JObject getObjectInputFilter();
		jint read();
		jint read(JByteArray arg0, jint arg1, jint arg2);
		jboolean readBoolean();
		jbyte readByte();
		jchar readChar();
		jdouble readDouble();
		java::io::ObjectInputStream_GetField readFields();
		jfloat readFloat();
		void readFully(JByteArray arg0);
		void readFully(JByteArray arg0, jint arg1, jint arg2);
		jint readInt();
		JString readLine();
		jlong readLong();
		JObject readObject();
		jshort readShort();
		JString readUTF();
		JObject readUnshared();
		jint readUnsignedByte();
		jint readUnsignedShort();
		void registerValidation(JObject arg0, jint arg1);
		void setObjectInputFilter(JObject arg0);
		jint skipBytes(jint arg0);
	};
} // namespace java::io

