#pragma once

#include "./FilterInputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class PushbackInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PushbackInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		PushbackInputStream(QJniObject obj);
		
		// Constructors
		PushbackInputStream(java::io::InputStream arg0);
		PushbackInputStream(java::io::InputStream arg0, jint arg1);
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JByteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
		void unread(JByteArray arg0);
		void unread(jint arg0);
		void unread(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

