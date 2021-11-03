#pragma once

#include "../../JObject.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	class OutputStream;
}

namespace java::io
{
	class ByteArrayInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ByteArrayInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		ByteArrayInputStream(QJniObject obj);
		
		// Constructors
		ByteArrayInputStream(jbyteArray arg0);
		ByteArrayInputStream(jbyteArray arg0, jint arg1, jint arg2);
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jbyteArray readAllBytes();
		jint readNBytes(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
		jlong transferTo(java::io::OutputStream arg0);
	};
} // namespace java::io

