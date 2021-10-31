#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class BufferedInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BufferedInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		BufferedInputStream(QJniObject obj);
		
		// Constructors
		BufferedInputStream(java::io::InputStream arg0);
		BufferedInputStream(java::io::InputStream arg0, jint arg1);
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

