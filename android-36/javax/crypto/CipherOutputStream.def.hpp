#pragma once

#include "../../java/io/FilterOutputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
namespace javax::crypto
{
	class Cipher;
}

namespace javax::crypto
{
	class CipherOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CipherOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		CipherOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
		
		// Constructors
		CipherOutputStream(java::io::OutputStream arg0, javax::crypto::Cipher arg1);
		
		// Methods
		void close() const;
		void flush() const;
		void write(JByteArray arg0) const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace javax::crypto

