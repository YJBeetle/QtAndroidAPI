#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FilterInputStream.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit CipherInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		CipherInputStream(QJniObject obj);
		
		// Constructors
		CipherInputStream(java::io::InputStream arg0, javax::crypto::Cipher arg1);
		
		// Methods
		jint available();
		void close();
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jlong skip(jlong arg0);
	};
} // namespace javax::crypto

