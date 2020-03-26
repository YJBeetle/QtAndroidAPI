#pragma once

#ifndef JAVA_IO_FILE
#define JAVA_IO_FILE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class URI;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::net
{
	class URL;
}

namespace __jni_impl::java::io
{
	class File : public __JniBaseClass
	{
	public:
		// Fields
		static jchar separatorChar();
		static jstring separator();
		static jchar pathSeparatorChar();
		static jstring pathSeparator();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1);
		void __constructor(__jni_impl::java::net::URI arg0);
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jlong length();
		jstring toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::io::File arg0);
		jarray list();
		jarray list(__jni_impl::__JniBaseClass arg0);
		jboolean isAbsolute();
		jstring getParent();
		jboolean _delete();
		jboolean setReadOnly();
		jboolean canRead();
		jstring getPath();
		QAndroidJniObject toURI();
		QAndroidJniObject toURL();
		jstring getAbsolutePath();
		jstring getCanonicalPath();
		jboolean isDirectory();
		QAndroidJniObject getAbsoluteFile();
		jboolean exists();
		jboolean mkdir();
		QAndroidJniObject getCanonicalFile();
		QAndroidJniObject getParentFile();
		jboolean mkdirs();
		jboolean setWritable(jboolean arg0, jboolean arg1);
		jboolean setWritable(jboolean arg0);
		jboolean setReadable(jboolean arg0);
		jboolean setReadable(jboolean arg0, jboolean arg1);
		jboolean setExecutable(jboolean arg0, jboolean arg1);
		jboolean setExecutable(jboolean arg0);
		static jarray listRoots();
		static QAndroidJniObject createTempFile(jstring arg0, jstring arg1, __jni_impl::java::io::File arg2);
		static QAndroidJniObject createTempFile(jstring arg0, jstring arg1);
		jboolean canWrite();
		jboolean isFile();
		jboolean isHidden();
		jlong lastModified();
		jboolean createNewFile();
		void deleteOnExit();
		jarray listFiles();
		jarray listFiles(__jni_impl::__JniBaseClass arg0);
		jboolean renameTo(__jni_impl::java::io::File arg0);
		jboolean setLastModified(jlong arg0);
		jboolean canExecute();
		jlong getTotalSpace();
		jlong getFreeSpace();
		jlong getUsableSpace();
		QAndroidJniObject toPath();
	};
} // namespace __jni_impl::java::io

#include "../net/URI.hpp"
#include "ObjectInputStream.hpp"
#include "ObjectOutputStream.hpp"
#include "../net/URL.hpp"

namespace __jni_impl::java::io
{
	// Fields
	jchar File::separatorChar()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.io.File",
			"separatorChar"
		);
	}
	jstring File::separator()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.File",
			"separator",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jchar File::pathSeparatorChar()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.io.File",
			"pathSeparatorChar"
		);
	}
	jstring File::pathSeparator()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.File",
			"pathSeparator",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void File::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void File::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void File::__constructor(__jni_impl::java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void File::__constructor(__jni_impl::java::net::URI arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/net/URI;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring File::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean File::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong File::length()
	{
		return __thiz.callMethod<jlong>(
			"length",
			"()J"
		);
	}
	jstring File::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint File::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint File::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint File::compareTo(__jni_impl::java::io::File arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/io/File;)I",
			arg0.__jniObject().object()
		);
	}
	jarray File::list()
	{
		return __thiz.callObjectMethod(
			"list",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray File::list(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"list",
			"(Ljava/io/FilenameFilter;)[Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jboolean File::isAbsolute()
	{
		return __thiz.callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jstring File::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean File::_delete()
	{
		return __thiz.callMethod<jboolean>(
			"delete",
			"()Z"
		);
	}
	jboolean File::setReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"setReadOnly",
			"()Z"
		);
	}
	jboolean File::canRead()
	{
		return __thiz.callMethod<jboolean>(
			"canRead",
			"()Z"
		);
	}
	jstring File::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject File::toURI()
	{
		return __thiz.callObjectMethod(
			"toURI",
			"()Ljava/net/URI;"
		);
	}
	QAndroidJniObject File::toURL()
	{
		return __thiz.callObjectMethod(
			"toURL",
			"()Ljava/net/URL;"
		);
	}
	jstring File::getAbsolutePath()
	{
		return __thiz.callObjectMethod(
			"getAbsolutePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring File::getCanonicalPath()
	{
		return __thiz.callObjectMethod(
			"getCanonicalPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean File::isDirectory()
	{
		return __thiz.callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	QAndroidJniObject File::getAbsoluteFile()
	{
		return __thiz.callObjectMethod(
			"getAbsoluteFile",
			"()Ljava/io/File;"
		);
	}
	jboolean File::exists()
	{
		return __thiz.callMethod<jboolean>(
			"exists",
			"()Z"
		);
	}
	jboolean File::mkdir()
	{
		return __thiz.callMethod<jboolean>(
			"mkdir",
			"()Z"
		);
	}
	QAndroidJniObject File::getCanonicalFile()
	{
		return __thiz.callObjectMethod(
			"getCanonicalFile",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject File::getParentFile()
	{
		return __thiz.callObjectMethod(
			"getParentFile",
			"()Ljava/io/File;"
		);
	}
	jboolean File::mkdirs()
	{
		return __thiz.callMethod<jboolean>(
			"mkdirs",
			"()Z"
		);
	}
	jboolean File::setWritable(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setWritable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean File::setWritable(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setWritable",
			"(Z)Z",
			arg0
		);
	}
	jboolean File::setReadable(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setReadable",
			"(Z)Z",
			arg0
		);
	}
	jboolean File::setReadable(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setReadable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean File::setExecutable(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setExecutable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean File::setExecutable(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setExecutable",
			"(Z)Z",
			arg0
		);
	}
	jarray File::listRoots()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.File",
			"listRoots",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	QAndroidJniObject File::createTempFile(jstring arg0, jstring arg1, __jni_impl::java::io::File arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject File::createTempFile(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;",
			arg0,
			arg1
		);
	}
	jboolean File::canWrite()
	{
		return __thiz.callMethod<jboolean>(
			"canWrite",
			"()Z"
		);
	}
	jboolean File::isFile()
	{
		return __thiz.callMethod<jboolean>(
			"isFile",
			"()Z"
		);
	}
	jboolean File::isHidden()
	{
		return __thiz.callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	jlong File::lastModified()
	{
		return __thiz.callMethod<jlong>(
			"lastModified",
			"()J"
		);
	}
	jboolean File::createNewFile()
	{
		return __thiz.callMethod<jboolean>(
			"createNewFile",
			"()Z"
		);
	}
	void File::deleteOnExit()
	{
		__thiz.callMethod<void>(
			"deleteOnExit",
			"()V"
		);
	}
	jarray File::listFiles()
	{
		return __thiz.callObjectMethod(
			"listFiles",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	jarray File::listFiles(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"listFiles",
			"(Ljava/io/FileFilter;)[Ljava/io/File;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jboolean File::renameTo(__jni_impl::java::io::File arg0)
	{
		return __thiz.callMethod<jboolean>(
			"renameTo",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean File::setLastModified(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setLastModified",
			"(J)Z",
			arg0
		);
	}
	jboolean File::canExecute()
	{
		return __thiz.callMethod<jboolean>(
			"canExecute",
			"()Z"
		);
	}
	jlong File::getTotalSpace()
	{
		return __thiz.callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	jlong File::getFreeSpace()
	{
		return __thiz.callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	jlong File::getUsableSpace()
	{
		return __thiz.callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	QAndroidJniObject File::toPath()
	{
		return __thiz.callObjectMethod(
			"toPath",
			"()Ljava/nio/file/Path;"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class File : public __jni_impl::java::io::File
	{
	public:
		File(QAndroidJniObject obj) { __thiz = obj; }
		File(jstring arg0)
		{
			__constructor(
				arg0);
		}
		File(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		File(__jni_impl::java::io::File arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		File(__jni_impl::java::net::URI arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILE

