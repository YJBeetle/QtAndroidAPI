#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::nio::channels
{
	class FileChannel;
}

namespace java::io
{
	class FileInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		FileInputStream(QAndroidJniObject obj);
		// Constructors
		FileInputStream(java::io::File arg0);
		FileInputStream(java::io::FileDescriptor arg0);
		FileInputStream(jstring arg0);
		FileInputStream() = default;
		
		// Methods
		jint available();
		void close();
		QAndroidJniObject getChannel();
		QAndroidJniObject getFD();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jlong skip(jlong arg0);
	};
} // namespace java::io

