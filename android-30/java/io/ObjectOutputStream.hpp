#pragma once

#include "../../__JniBaseClass.hpp"
#include "./OutputStream.hpp"

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
namespace java::lang
{
	class Enum;
}

namespace java::io
{
	class ObjectOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObjectOutputStream(const char *className, const char *sig, Ts...agv) : java::io::OutputStream(className, sig, std::forward<Ts>(agv)...) {}
		ObjectOutputStream(QAndroidJniObject obj);
		
		// Constructors
		ObjectOutputStream(java::io::OutputStream arg0);
		
		// Methods
		void close();
		void defaultWriteObject();
		void flush();
		java::io::ObjectOutputStream_PutField putFields();
		void reset();
		void useProtocolVersion(jint arg0);
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void writeBoolean(jboolean arg0);
		void writeByte(jint arg0);
		void writeBytes(jstring arg0);
		void writeChar(jint arg0);
		void writeChars(jstring arg0);
		void writeDouble(jdouble arg0);
		void writeFields();
		void writeFloat(jfloat arg0);
		void writeInt(jint arg0);
		void writeLong(jlong arg0);
		void writeObject(jobject arg0);
		void writeShort(jint arg0);
		void writeUTF(jstring arg0);
		void writeUnshared(jobject arg0);
	};
} // namespace java::io

