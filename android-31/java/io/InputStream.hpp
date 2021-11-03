#pragma once

#include "../../JObject.hpp"

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
		InputStream(QJniObject obj);
		
		// Constructors
		InputStream();
		
		// Methods
		static java::io::InputStream nullInputStream();
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jbyteArray readAllBytes();
		jbyteArray readNBytes(jint arg0);
		jint readNBytes(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
		void skipNBytes(jlong arg0);
		jlong transferTo(java::io::OutputStream arg0);
	};
} // namespace java::io

