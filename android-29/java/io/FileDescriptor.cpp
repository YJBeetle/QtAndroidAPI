#include "./FileDescriptor.hpp"

namespace java::io
{
	// Fields
	QAndroidJniObject FileDescriptor::err()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.FileDescriptor",
			"err",
			"Ljava/io/FileDescriptor;"
		);
	}
	QAndroidJniObject FileDescriptor::in()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.FileDescriptor",
			"in",
			"Ljava/io/FileDescriptor;"
		);
	}
	QAndroidJniObject FileDescriptor::out()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.FileDescriptor",
			"out",
			"Ljava/io/FileDescriptor;"
		);
	}
	
	FileDescriptor::FileDescriptor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileDescriptor::FileDescriptor()
	{
		__thiz = QAndroidJniObject(
			"java.io.FileDescriptor",
			"()V"
		);
	}
	
	// Methods
	void FileDescriptor::sync()
	{
		__thiz.callMethod<void>(
			"sync",
			"()V"
		);
	}
	jboolean FileDescriptor::valid()
	{
		return __thiz.callMethod<jboolean>(
			"valid",
			"()Z"
		);
	}
} // namespace java::io

