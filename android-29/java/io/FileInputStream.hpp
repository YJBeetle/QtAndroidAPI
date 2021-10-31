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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		FileInputStream(QAndroidJniObject obj);
		
		// Constructors
		FileInputStream(java::io::File arg0);
		FileInputStream(java::io::FileDescriptor arg0);
		FileInputStream(jstring arg0);
		
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

