#pragma once

#include "./OutputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
class JString;
namespace java::nio::charset
{
	class Charset;
}

namespace java::io
{
	class ByteArrayOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ByteArrayOutputStream(const char *className, const char *sig, Ts...agv) : java::io::OutputStream(className, sig, std::forward<Ts>(agv)...) {}
		ByteArrayOutputStream(QJniObject obj) : java::io::OutputStream(obj) {}
		
		// Constructors
		ByteArrayOutputStream();
		ByteArrayOutputStream(jint arg0);
		
		// Methods
		void close() const;
		void reset() const;
		jint size() const;
		JByteArray toByteArray() const;
		JString toString() const;
		JString toString(jint arg0) const;
		JString toString(JString arg0) const;
		JString toString(java::nio::charset::Charset arg0) const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
		void writeBytes(JByteArray arg0) const;
		void writeTo(java::io::OutputStream arg0) const;
	};
} // namespace java::io

