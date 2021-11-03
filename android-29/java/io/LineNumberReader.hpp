#pragma once

#include "./BufferedReader.hpp"

class JCharArray;
namespace java::io
{
	class Reader;
}
class JString;

namespace java::io
{
	class LineNumberReader : public java::io::BufferedReader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LineNumberReader(const char *className, const char *sig, Ts...agv) : java::io::BufferedReader(className, sig, std::forward<Ts>(agv)...) {}
		LineNumberReader(QJniObject obj);
		
		// Constructors
		LineNumberReader(java::io::Reader arg0);
		LineNumberReader(java::io::Reader arg0, jint arg1);
		
		// Methods
		jint getLineNumber();
		void mark(jint arg0);
		jint read();
		jint read(JCharArray arg0, jint arg1, jint arg2);
		JString readLine();
		void reset();
		void setLineNumber(jint arg0);
		jlong skip(jlong arg0);
	};
} // namespace java::io

