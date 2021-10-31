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
	
	// QAndroidJniObject forward
	FileDescriptor::FileDescriptor(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FileDescriptor::FileDescriptor()
		: __JniBaseClass(
			"java.io.FileDescriptor",
			"()V"
		) {}
	
	// Methods
	void FileDescriptor::sync()
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
	jboolean FileDescriptor::valid()
	{
		return callMethod<jboolean>(
			"valid",
			"()Z"
		);
	}
} // namespace java::io

