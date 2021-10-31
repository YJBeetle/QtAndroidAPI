#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class FileInputStream;
}
namespace java::io
{
	class FileOutputStream;
}

namespace android::util
{
	class AtomicFile : public __JniBaseClass
	{
	public:
		// Fields
		
		AtomicFile(QAndroidJniObject obj);
		// Constructors
		AtomicFile(java::io::File arg0);
		AtomicFile() = default;
		
		// Methods
		void _delete();
		void failWrite(java::io::FileOutputStream arg0);
		void finishWrite(java::io::FileOutputStream arg0);
		QAndroidJniObject getBaseFile();
		QAndroidJniObject openRead();
		jbyteArray readFully();
		QAndroidJniObject startWrite();
	};
} // namespace android::util

