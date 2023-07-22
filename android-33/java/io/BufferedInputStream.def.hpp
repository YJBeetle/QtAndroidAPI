#pragma once

#include "./FilterInputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}

namespace java::io
{
	class BufferedInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BufferedInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		BufferedInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
		
		// Constructors
		BufferedInputStream(java::io::InputStream arg0);
		BufferedInputStream(java::io::InputStream arg0, jint arg1);
		
		// Methods
		jint available() const;
		void close() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		void reset() const;
		jlong skip(jlong arg0) const;
		jlong transferTo(java::io::OutputStream arg0) const;
	};
} // namespace java::io

