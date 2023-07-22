#pragma once

#include "./OutputStream.def.hpp"

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
		ObjectOutputStream(QJniObject obj) : java::io::OutputStream(obj) {}
		
		// Constructors
		ObjectOutputStream(java::io::OutputStream arg0);
		
		// Methods
		void close() const;
		void defaultWriteObject() const;
		void flush() const;
		java::io::ObjectOutputStream_PutField putFields() const;
		void reset() const;
		void useProtocolVersion(jint arg0) const;
		void write(JByteArray arg0) const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
		void writeBoolean(jboolean arg0) const;
		void writeByte(jint arg0) const;
		void writeBytes(JString arg0) const;
		void writeChar(jint arg0) const;
		void writeChars(JString arg0) const;
		void writeDouble(jdouble arg0) const;
		void writeFields() const;
		void writeFloat(jfloat arg0) const;
		void writeInt(jint arg0) const;
		void writeLong(jlong arg0) const;
		void writeObject(JObject arg0) const;
		void writeShort(jint arg0) const;
		void writeUTF(JString arg0) const;
		void writeUnshared(JObject arg0) const;
	};
} // namespace java::io

