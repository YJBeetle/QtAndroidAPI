#pragma once

#include "./InputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class FilterInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FilterInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		FilterInputStream(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JByteArray arg0);
		jint read(JByteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

