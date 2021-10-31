#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FilterOutputStream.hpp"

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
		
		CipherOutputStream(QAndroidJniObject obj);
		// Constructors
		CipherOutputStream(java::io::OutputStream arg0, javax::crypto::Cipher arg1);
		CipherOutputStream() = default;
		
		// Methods
		void close();
		void flush();
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace javax::crypto

