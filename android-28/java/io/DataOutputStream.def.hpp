#pragma once

#include "./FilterOutputStream.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit DataOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		DataOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
		
		// Constructors
		DataOutputStream(java::io::OutputStream arg0);
		
		// Methods
		void flush() const;
		jint size() const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
		void writeBoolean(jboolean arg0) const;
		void writeByte(jint arg0) const;
		void writeBytes(JString arg0) const;
		void writeChar(jint arg0) const;
		void writeChars(JString arg0) const;
		void writeDouble(jdouble arg0) const;
		void writeFloat(jfloat arg0) const;
		void writeInt(jint arg0) const;
		void writeLong(jlong arg0) const;
		void writeShort(jint arg0) const;
		void writeUTF(JString arg0) const;
	};
} // namespace java::io

