#pragma once

#include "../../java/io/FilterInputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
namespace javax::crypto
{
	class Cipher;
}

namespace javax::crypto
{
	class CipherInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CipherInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		CipherInputStream(QAndroidJniObject obj);
		
		// Constructors
		CipherInputStream(java::io::InputStream arg0, javax::crypto::Cipher arg1);
		
		// Methods
		jint available() const;
		void close() const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		jlong skip(jlong arg0) const;
	};
} // namespace javax::crypto

