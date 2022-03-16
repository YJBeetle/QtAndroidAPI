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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Base64InputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		Base64InputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
		
		// Constructors
		Base64InputStream(java::io::InputStream arg0, jint arg1);
		
		// Methods
		jint available() const;
		void close() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		void reset() const;
		jlong skip(jlong arg0) const;
	};
} // namespace android::util

