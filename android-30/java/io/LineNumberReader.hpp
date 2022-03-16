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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LineNumberReader(const char *className, const char *sig, Ts...agv) : java::io::BufferedReader(className, sig, std::forward<Ts>(agv)...) {}
		LineNumberReader(QAndroidJniObject obj) : java::io::BufferedReader(obj) {}
		
		// Constructors
		LineNumberReader(java::io::Reader arg0);
		LineNumberReader(java::io::Reader arg0, jint arg1);
		
		// Methods
		jint getLineNumber() const;
		void mark(jint arg0) const;
		jint read() const;
		jint read(JCharArray arg0, jint arg1, jint arg2) const;
		JString readLine() const;
		void reset() const;
		void setLineNumber(jint arg0) const;
		jlong skip(jlong arg0) const;
	};
} // namespace java::io

