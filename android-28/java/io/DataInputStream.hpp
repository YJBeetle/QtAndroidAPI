#pragma once

#include "./FilterInputStream.hpp"

class JByteArray;
class JCharArray;
namespace java::io
{
	class InputStream;
}
class JString;

namespace java::io
{
	class DataInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		DataInputStream(QJniObject obj);
		
		// Constructors
		DataInputStream(java::io::InputStream arg0);
		
		// Methods
		static JString readUTF(JObject arg0);
		jint read(JByteArray arg0);
		jint read(JByteArray arg0, jint arg1, jint arg2);
		jboolean readBoolean();
		jbyte readByte();
		jchar readChar();
		jdouble readDouble();
		jfloat readFloat();
		void readFully(JByteArray arg0);
		void readFully(JByteArray arg0, jint arg1, jint arg2);
		jint readInt();
		JString readLine();
		jlong readLong();
		jshort readShort();
		JString readUTF();
		jint readUnsignedByte();
		jint readUnsignedShort();
		jint skipBytes(jint arg0);
	};
} // namespace java::io

