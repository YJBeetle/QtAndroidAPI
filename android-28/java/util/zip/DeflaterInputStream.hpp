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
	class Deflater;
}

namespace java::util::zip
{
	class DeflaterInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeflaterInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		DeflaterInputStream(QJniObject obj);
		
		// Constructors
		DeflaterInputStream(java::io::InputStream arg0);
		DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1);
		DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1, jint arg2);
		
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

