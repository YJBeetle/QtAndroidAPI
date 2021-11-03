#pragma once

#include "./OutputStream.hpp"

class JByteArray;
namespace java::io
{
	class IOException;
}
namespace java::io
{
	class ObjectOutputStream_PutField;
}
namespace java::io
{
	class ObjectStreamClass;
}
namespace java::io
{
	class OutputStream;
}
namespace java::lang
{
	class Boolean;
}
class JClass;
namespace java::lang
{
	class Enum;
}
class JObject;
class JString;

namespace java::io
{
	class ObjectOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectOutputStream(const char *className, const char *sig, Ts...agv) : java::io::OutputStream(className, sig, std::forward<Ts>(agv)...) {}
		ObjectOutputStream(QJniObject obj);
		
		// Constructors
		ObjectOutputStream(java::io::OutputStream arg0);
		
		// Methods
		void close();
		void defaultWriteObject();
		void flush();
		java::io::ObjectOutputStream_PutField putFields();
		void reset();
		void useProtocolVersion(jint arg0);
		void write(JByteArray arg0);
		void write(jint arg0);
		void write(JByteArray arg0, jint arg1, jint arg2);
		void writeBoolean(jboolean arg0);
		void writeByte(jint arg0);
		void writeBytes(JString arg0);
		void writeChar(jint arg0);
		void writeChars(JString arg0);
		void writeDouble(jdouble arg0);
		void writeFields();
		void writeFloat(jfloat arg0);
		void writeInt(jint arg0);
		void writeLong(jlong arg0);
		void writeObject(JObject arg0);
		void writeShort(jint arg0);
		void writeUTF(JString arg0);
		void writeUnshared(JObject arg0);
	};
} // namespace java::io

