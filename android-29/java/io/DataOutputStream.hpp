#pragma once

#include "../../__JniBaseClass.hpp"
#include "./OutputStream.hpp"
#include "./FilterOutputStream.hpp"

namespace java::io
{
	class OutputStream;
}

namespace java::io
{
	class DataOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		DataOutputStream(QAndroidJniObject obj);
		// Constructors
		DataOutputStream(java::io::OutputStream arg0);
		DataOutputStream() = default;
		
		// Methods
		void flush();
		jint size();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void writeBoolean(jboolean arg0);
		void writeByte(jint arg0);
		void writeBytes(jstring arg0);
		void writeChar(jint arg0);
		void writeChars(jstring arg0);
		void writeDouble(jdouble arg0);
		void writeFloat(jfloat arg0);
		void writeInt(jint arg0);
		void writeLong(jlong arg0);
		void writeShort(jint arg0);
		void writeUTF(jstring arg0);
	};
} // namespace java::io

