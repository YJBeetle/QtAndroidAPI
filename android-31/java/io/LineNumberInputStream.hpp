#pragma once

#include "./FilterInputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class LineNumberInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LineNumberInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		LineNumberInputStream(QJniObject obj);
		
		// Constructors
		LineNumberInputStream(java::io::InputStream arg0);
		
		// Methods
		jint available() const;
		jint getLineNumber() const;
		void mark(jint arg0) const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		void reset() const;
		void setLineNumber(jint arg0) const;
		jlong skip(jlong arg0) const;
	};
} // namespace java::io

