#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util::jar
{
	class JarEntry;
}
namespace java::util::zip
{
	class ZipEntry;
}

namespace java::util::zip
{
	class ZipFile : public __JniBaseClass
	{
	public:
		// Fields
		static jint OPEN_DELETE();
		static jint OPEN_READ();
		
		ZipFile(QAndroidJniObject obj);
		// Constructors
		ZipFile(java::io::File arg0);
		ZipFile(jstring arg0);
		ZipFile(java::io::File arg0, jint arg1);
		ZipFile(java::io::File arg0, java::nio::charset::Charset arg1);
		ZipFile(jstring arg0, java::nio::charset::Charset arg1);
		ZipFile(java::io::File arg0, jint arg1, java::nio::charset::Charset arg2);
		ZipFile() = default;
		
		// Methods
		void close();
		QAndroidJniObject entries();
		jstring getComment();
		QAndroidJniObject getEntry(jstring arg0);
		QAndroidJniObject getInputStream(java::util::zip::ZipEntry arg0);
		jstring getName();
		jint size();
		QAndroidJniObject stream();
	};
} // namespace java::util::zip

