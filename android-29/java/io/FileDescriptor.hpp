#pragma once

#ifndef JAVA_IO_FILEDESCRIPTOR
#define JAVA_IO_FILEDESCRIPTOR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::io
{
	class FileDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject in();
		static QAndroidJniObject out();
		static QAndroidJniObject err();
		
		// Constructors
		void __constructor();
		
		// Methods
		void sync();
		jboolean valid();
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	QAndroidJniObject FileDescriptor::in()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.FileDescriptor",
			"in",
			"Ljava/io/FileDescriptor;");
	}
	QAndroidJniObject FileDescriptor::out()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.FileDescriptor",
			"out",
			"Ljava/io/FileDescriptor;");
	}
	QAndroidJniObject FileDescriptor::err()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.FileDescriptor",
			"err",
			"Ljava/io/FileDescriptor;");
	}
	
	// Constructors
	void FileDescriptor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.FileDescriptor",
			"()V");
	}
	
	// Methods
	void FileDescriptor::sync()
	{
		__thiz.callMethod<void>(
			"sync",
			"()V");
	}
	jboolean FileDescriptor::valid()
	{
		return __thiz.callMethod<jboolean>(
			"valid",
			"()Z");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class FileDescriptor : public __jni_impl::java::io::FileDescriptor
	{
	public:
		FileDescriptor(QAndroidJniObject obj) { __thiz = obj; }
		FileDescriptor()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILEDESCRIPTOR

