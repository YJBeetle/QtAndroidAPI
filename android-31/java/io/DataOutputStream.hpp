#pragma once

#include "./FilterOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
class JString;

namespace java::io
{
	class DataOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		DataOutputStream(QAndroidJniObject obj);
		
		// Constructors
		DataOutputStream(java::io::OutputStream arg0);
		
		// Methods
		void flush();
		jint size();
		void write(jint arg0);
		void write(JByteArray arg0, jint arg1, jint arg2);
		void writeBoolean(jboolean arg0);
		void writeByte(jint arg0);
		void writeBytes(JString arg0);
		void writeChar(jint arg0);
		void writeChars(JString arg0);
		void writeDouble(jdouble arg0);
		void writeFloat(jfloat arg0);
		void writeInt(jint arg0);
		void writeLong(jlong arg0);
		void writeShort(jint arg0);
		void writeUTF(JString arg0);
	};
} // namespace java::io

