#pragma once

#include "../../JObject.hpp"
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

namespace java::io
{
	class InputStream;
}

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
		static jstring readUTF(JObject arg0);
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jboolean readBoolean();
		jbyte readByte();
		jchar readChar();
		jdouble readDouble();
		jfloat readFloat();
		void readFully(jbyteArray arg0);
		void readFully(jbyteArray arg0, jint arg1, jint arg2);
		jint readInt();
		jstring readLine();
		jlong readLong();
		jshort readShort();
		jstring readUTF();
		jint readUnsignedByte();
		jint readUnsignedShort();
		jint skipBytes(jint arg0);
	};
} // namespace java::io

