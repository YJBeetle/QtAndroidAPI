#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CipherOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		CipherOutputStream(QAndroidJniObject obj);
		
		// Constructors
		CipherOutputStream(java::io::OutputStream arg0, javax::crypto::Cipher arg1);
		
		// Methods
		void close();
		void flush();
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace javax::crypto

