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
		
		// QJniObject forward
		template<typename ...Ts> explicit BufferedReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		BufferedReader(QJniObject obj);
		
		// Constructors
		BufferedReader(java::io::Reader arg0);
		BufferedReader(java::io::Reader arg0, jint arg1);
		
		// Methods
		void close();
		JObject lines();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JCharArray arg0, jint arg1, jint arg2);
		JString readLine();
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

