#pragma once

#include "../../java/io/FilterInputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}

namespace android::util
{
	class Base64InputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Base64InputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		Base64InputStream(QJniObject obj);
		
		// Constructors
		Base64InputStream(java::io::InputStream arg0, jint arg1);
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JByteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace android::util

