#pragma once

#include "../../io/FilterInputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
namespace java::util::zip
{
	class Inflater;
}

namespace java::util::zip
{
	class InflaterInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InflaterInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		InflaterInputStream(QJniObject obj) : java::io::FilterInputStream(obj) {}
		
		// Constructors
		InflaterInputStream(java::io::InputStream arg0);
		InflaterInputStream(java::io::InputStream arg0, java::util::zip::Inflater arg1);
		InflaterInputStream(java::io::InputStream arg0, java::util::zip::Inflater arg1, jint arg2);
		
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

