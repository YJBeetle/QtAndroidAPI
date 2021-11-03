#pragma once

#include "./InputStream.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class SequenceInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SequenceInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		SequenceInputStream(QJniObject obj);
		
		// Constructors
		SequenceInputStream(JObject arg0);
		SequenceInputStream(java::io::InputStream arg0, java::io::InputStream arg1);
		
		// Methods
		jint available() const;
		void close() const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

