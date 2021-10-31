#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FilterOutputStream.hpp"

namespace java::io
{
	class OutputStream;
}

namespace android::util
{
	class Base64OutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		Base64OutputStream(QAndroidJniObject obj);
		// Constructors
		Base64OutputStream(java::io::OutputStream arg0, jint arg1);
		Base64OutputStream() = default;
		
		// Methods
		void close();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace android::util

