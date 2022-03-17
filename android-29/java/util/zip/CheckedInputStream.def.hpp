#pragma once

#include "../../io/FilterInputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}

namespace java::util::zip
{
	class CheckedInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CheckedInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		CheckedInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
		
		// Constructors
		CheckedInputStream(java::io::InputStream arg0, JObject arg1);
		
		// Methods
		JObject getChecksum() const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		jlong skip(jlong arg0) const;
	};
} // namespace java::util::zip

