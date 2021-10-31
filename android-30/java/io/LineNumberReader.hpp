#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Reader.hpp"
#include "./BufferedReader.hpp"

namespace java::io
{
	class Reader;
}

namespace java::io
{
	class LineNumberReader : public java::io::BufferedReader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LineNumberReader(const char *className, const char *sig, Ts...agv) : java::io::BufferedReader(className, sig, std::forward<Ts>(agv)...) {}
		LineNumberReader(QAndroidJniObject obj);
		
		// Constructors
		LineNumberReader(java::io::Reader arg0);
		LineNumberReader(java::io::Reader arg0, jint arg1);
		
		// Methods
		jint getLineNumber();
		void mark(jint arg0);
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jstring readLine();
		void reset();
		void setLineNumber(jint arg0);
		jlong skip(jlong arg0);
	};
} // namespace java::io

