#pragma once

#include "./Reader.hpp"

class JCharArray;
class JBooleanArray;
namespace java::io
{
	class Reader;
}
class JString;

namespace java::io
{
	class BufferedReader : public java::io::Reader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BufferedReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		BufferedReader(QAndroidJniObject obj);
		
		// Constructors
		BufferedReader(java::io::Reader arg0);
		BufferedReader(java::io::Reader arg0, jint arg1);
		
		// Methods
		void close() const;
		JObject lines() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JCharArray arg0, jint arg1, jint arg2) const;
		JString readLine() const;
		jboolean ready() const;
		void reset() const;
		jlong skip(jlong arg0) const;
	};
} // namespace java::io

