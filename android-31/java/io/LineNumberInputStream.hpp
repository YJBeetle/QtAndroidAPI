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
		jint available();
		jint getLineNumber();
		void mark(jint arg0);
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		void setLineNumber(jint arg0);
		jlong skip(jlong arg0);
	};
} // namespace java::io

