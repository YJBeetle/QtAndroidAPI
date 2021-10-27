#pragma once

#include "../../__JniBaseClass.hpp"

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
	class URI;
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
		static jstring pathSeparator();
		static jchar pathSeparatorChar();
		static jstring separator();
		static jchar separatorChar();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::net::URI arg0);
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::File arg0, const QString &arg1);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		static QAndroidJniObject createTempFile(jstring arg0, jstring arg1);
		static QAndroidJniObject createTempFile(const QString &arg0, const QString &arg1);
		static QAndroidJniObject createTempFile(jstring arg0, jstring arg1, __jni_impl::java::io::File arg2);
		static QAndroidJniObject createTempFile(const QString &arg0, const QString &arg1, __jni_impl::java::io::File arg2);
		static jarray listRoots();
		jboolean canExecute();
		jboolean canRead();
		jboolean canWrite();
		jint compareTo(__jni_impl::java::io::File arg0);
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
		jarray list(__jni_impl::__JniBaseClass arg0);
		jarray listFiles();
		jarray listFiles(__jni_impl::__JniBaseClass arg0);
		jboolean mkdir();
		jboolean mkdirs();
		jboolean renameTo(__jni_impl::java::io::File arg0);
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
} // namespace __jni_impl::java::io

#include "ObjectInputStream.hpp"
#include "ObjectOutputStream.hpp"
#include "../net/URI.hpp"
#include "../net/URL.hpp"

namespace __jni_impl::java::io
{
	// Fields
	jstring File::pathSeparator()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.File",
			"pathSeparator",
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
	jstring File::separator()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.File",
			"separator",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jchar File::separatorChar()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.io.File",
			"separatorChar"
		);
	}
	
	// Constructors
	void File::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void File::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void File::__constructor(__jni_impl::java::net::URI arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/net/URI;)V",
			arg0.__jniObject().object()
		);
	}
	void File::__constructor(__jni_impl::java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void File::__constructor(__jni_impl::java::io::File arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void File::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void File::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.File",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
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
	QAndroidJniObject File::createTempFile(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
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
	QAndroidJniObject File::createTempFile(const QString &arg0, const QString &arg1, __jni_impl::java::io::File arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
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
	jboolean File::canExecute()
	{
		return __thiz.callMethod<jboolean>(
			"canExecute",
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
	jboolean File::canWrite()
	{
		return __thiz.callMethod<jboolean>(
			"canWrite",
			"()Z"
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
	jint File::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean File::createNewFile()
	{
		return __thiz.callMethod<jboolean>(
			"createNewFile",
			"()Z"
		);
	}
	jboolean File::_delete()
	{
		return __thiz.callMethod<jboolean>(
			"delete",
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
	jboolean File::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean File::exists()
	{
		return __thiz.callMethod<jboolean>(
			"exists",
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
	jstring File::getAbsolutePath()
	{
		return __thiz.callObjectMethod(
			"getAbsolutePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject File::getCanonicalFile()
	{
		return __thiz.callObjectMethod(
			"getCanonicalFile",
			"()Ljava/io/File;"
		);
	}
	jstring File::getCanonicalPath()
	{
		return __thiz.callObjectMethod(
			"getCanonicalPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong File::getFreeSpace()
	{
		return __thiz.callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	jstring File::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring File::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject File::getParentFile()
	{
		return __thiz.callObjectMethod(
			"getParentFile",
			"()Ljava/io/File;"
		);
	}
	jstring File::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong File::getTotalSpace()
	{
		return __thiz.callMethod<jlong>(
			"getTotalSpace",
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
	jint File::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean File::isAbsolute()
	{
		return __thiz.callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jboolean File::isDirectory()
	{
		return __thiz.callMethod<jboolean>(
			"isDirectory",
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
	jlong File::length()
	{
		return __thiz.callMethod<jlong>(
			"length",
			"()J"
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
	jboolean File::mkdir()
	{
		return __thiz.callMethod<jboolean>(
			"mkdir",
			"()Z"
		);
	}
	jboolean File::mkdirs()
	{
		return __thiz.callMethod<jboolean>(
			"mkdirs",
			"()Z"
		);
	}
	jboolean File::renameTo(__jni_impl::java::io::File arg0)
	{
		return __thiz.callMethod<jboolean>(
			"renameTo",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
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
	jboolean File::setExecutable(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setExecutable",
			"(ZZ)Z",
			arg0,
			arg1
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
	jboolean File::setReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"setReadOnly",
			"()Z"
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
	jboolean File::setWritable(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setWritable",
			"(Z)Z",
			arg0
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
	QAndroidJniObject File::toPath()
	{
		return __thiz.callObjectMethod(
			"toPath",
			"()Ljava/nio/file/Path;"
		);
	}
	jstring File::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
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
		File(__jni_impl::java::net::URI arg0)
		{
			__constructor(
				arg0);
		}
		File(__jni_impl::java::io::File arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		File(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

