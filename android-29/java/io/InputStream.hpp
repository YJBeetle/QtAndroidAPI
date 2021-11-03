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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputStream(QAndroidJniObject obj);
		
		// Constructors
		InputStream();
		
		// Methods
		static java::io::InputStream nullInputStream();
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JByteArray arg0);
		jint read(JByteArray arg0, jint arg1, jint arg2);
		JByteArray readAllBytes();
		JByteArray readNBytes(jint arg0);
		jint readNBytes(JByteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
		void skipNBytes(jlong arg0);
		jlong transferTo(java::io::OutputStream arg0);
	};
} // namespace java::io

