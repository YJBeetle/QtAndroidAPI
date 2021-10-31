#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::net
{
	class URI;
}
namespace java::net
{
	class URL;
}

namespace java::io
{
	class File : public __JniBaseClass
	{
	public:
		// Fields
		static jstring pathSeparator();
		static jchar pathSeparatorChar();
		static jstring separator();
		static jchar separatorChar();
		
		File(QAndroidJniObject obj);
		// Constructors
		File(jstring arg0);
		File(java::net::URI arg0);
		File(java::io::File &arg0, jstring arg1);
		File(jstring arg0, jstring arg1);
		File() = default;
		
		// Methods
		static QAndroidJniObject createTempFile(jstring arg0, jstring arg1);
		static QAndroidJniObject createTempFile(jstring arg0, jstring arg1, java::io::File arg2);
		static jarray listRoots();
		jboolean canExecute();
		jboolean canRead();
		jboolean canWrite();
		jint compareTo(java::io::File arg0);
		jint compareTo(jobject arg0);
		jboolean createNewFile();
		jboolean _delete();
		void deleteOnExit();
		jboolean equals(jobject arg0);
		jboolean exists();
		QAndroidJniObject getAbsoluteFile();
		jstring getAbsolutePath();
		QAndroidJniObject getCanonicalFile();
		jstring getCanonicalPath();
		jlong getFreeSpace();
		jstring getName();
		jstring getParent();
		QAndroidJniObject getParentFile();
		jstring getPath();
		jlong getTotalSpace();
		jlong getUsableSpace();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isDirectory();
		jboolean isFile();
		jboolean isHidden();
		jlong lastModified();
		jlong length();
		jarray list();
		jarray list(__JniBaseClass arg0);
		jarray listFiles();
		jarray listFiles(__JniBaseClass arg0);
		jboolean mkdir();
		jboolean mkdirs();
		jboolean renameTo(java::io::File arg0);
		jboolean setExecutable(jboolean arg0);
		jboolean setExecutable(jboolean arg0, jboolean arg1);
		jboolean setLastModified(jlong arg0);
		jboolean setReadOnly();
		jboolean setReadable(jboolean arg0);
		jboolean setReadable(jboolean arg0, jboolean arg1);
		jboolean setWritable(jboolean arg0);
		jboolean setWritable(jboolean arg0, jboolean arg1);
		QAndroidJniObject toPath();
		jstring toString();
		QAndroidJniObject toURI();
		QAndroidJniObject toURL();
	};
} // namespace java::io

