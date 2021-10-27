#pragma once

#include "../../__JniBaseClass.hpp"
#include "./OutputStream.hpp"

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
	class FileOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		FileOutputStream(QAndroidJniObject obj);
		// Constructors
		FileOutputStream(java::io::File &arg0);
		FileOutputStream(java::io::FileDescriptor &arg0);
		FileOutputStream(jstring &arg0);
		FileOutputStream(const QString &arg0);
		FileOutputStream(java::io::File &arg0, jboolean &arg1);
		FileOutputStream(jstring &arg0, jboolean &arg1);
		FileOutputStream(const QString &arg0, jboolean &arg1);
		FileOutputStream() = default;
		
		// Methods
		void close();
		QAndroidJniObject getChannel();
		QAndroidJniObject getFD();
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

