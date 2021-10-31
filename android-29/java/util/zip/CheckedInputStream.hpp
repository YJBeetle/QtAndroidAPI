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
	class CheckedInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CheckedInputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterInputStream(className, sig, std::forward<Ts>(agv)...) {}
		CheckedInputStream(QAndroidJniObject obj);
		
		// Constructors
		CheckedInputStream(java::io::InputStream arg0, __JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getChecksum();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jlong skip(jlong arg0);
	};
} // namespace java::util::zip

