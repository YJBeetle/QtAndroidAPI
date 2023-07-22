#pragma once

#include "./InputStream.def.hpp"

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
		FilterInputStream(QAndroidJniObject obj) : java::io::InputStream(obj) {}
		
		// Constructors
		
		// Methods
		jint available() const;
		void close() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		void reset() const;
		jlong skip(jlong arg0) const;
	};
} // namespace java::io

