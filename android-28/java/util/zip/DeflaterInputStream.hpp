#pragma once

#include "../../io/FilterInputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
namespace java::util::zip
{
	class Deflater;
}

namespace java::util::zip
{
	class DeflaterInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeflaterInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		DeflaterInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
		
		// Constructors
		DeflaterInputStream(java::io::InputStream arg0);
		DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1);
		DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1, jint arg2);
		
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
} // namespace java::util::zip

