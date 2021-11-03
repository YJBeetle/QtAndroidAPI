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
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		jboolean readBoolean() const;
		jbyte readByte() const;
		jchar readChar() const;
		jdouble readDouble() const;
		jfloat readFloat() const;
		void readFully(JByteArray arg0) const;
		void readFully(JByteArray arg0, jint arg1, jint arg2) const;
		jint readInt() const;
		JString readLine() const;
		jlong readLong() const;
		jshort readShort() const;
		JString readUTF() const;
		jint readUnsignedByte() const;
		jint readUnsignedShort() const;
		jint skipBytes(jint arg0) const;
	};
} // namespace java::io

