#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}

namespace java::io
{
	class InputStream : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputStream(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputStream();
		
		// Methods
		static java::io::InputStream nullInputStream();
		jint available() const;
		void close() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		JByteArray readAllBytes() const;
		JByteArray readNBytes(jint arg0) const;
		jint readNBytes(JByteArray arg0, jint arg1, jint arg2) const;
		void reset() const;
		jlong skip(jlong arg0) const;
		void skipNBytes(jlong arg0) const;
		jlong transferTo(java::io::OutputStream arg0) const;
	};
} // namespace java::io

