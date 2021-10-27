#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"

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
		
		InflaterInputStream(QAndroidJniObject obj);
		// Constructors
		InflaterInputStream(java::io::InputStream &arg0);
		InflaterInputStream(java::io::InputStream &arg0, java::util::zip::Inflater &arg1);
		InflaterInputStream(java::io::InputStream &arg0, java::util::zip::Inflater &arg1, jint &arg2);
		InflaterInputStream() = default;
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::util::zip

