#pragma once

#include "../../JObject.hpp"

class JCharArray;
namespace java::io
{
	class Writer;
}
class JObject;
namespace java::nio
{
	class CharBuffer;
}

namespace java::io
{
	class Reader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Reader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Reader(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::io::Reader nullReader();
		void close() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JCharArray arg0) const;
		jint read(java::nio::CharBuffer arg0) const;
		jint read(JCharArray arg0, jint arg1, jint arg2) const;
		jboolean ready() const;
		void reset() const;
		jlong skip(jlong arg0) const;
		jlong transferTo(java::io::Writer arg0) const;
	};
} // namespace java::io

