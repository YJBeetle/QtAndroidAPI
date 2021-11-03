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
		jint available() const;
		void close() const;
		void defaultReadObject() const;
		JObject getObjectInputFilter() const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		jboolean readBoolean() const;
		jbyte readByte() const;
		jchar readChar() const;
		jdouble readDouble() const;
		java::io::ObjectInputStream_GetField readFields() const;
		jfloat readFloat() const;
		void readFully(JByteArray arg0) const;
		void readFully(JByteArray arg0, jint arg1, jint arg2) const;
		jint readInt() const;
		JString readLine() const;
		jlong readLong() const;
		JObject readObject() const;
		jshort readShort() const;
		JString readUTF() const;
		JObject readUnshared() const;
		jint readUnsignedByte() const;
		jint readUnsignedShort() const;
		void registerValidation(JObject arg0, jint arg1) const;
		void setObjectInputFilter(JObject arg0) const;
		jint skipBytes(jint arg0) const;
	};
} // namespace java::io

