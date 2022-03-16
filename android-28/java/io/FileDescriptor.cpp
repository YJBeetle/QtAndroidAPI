#include "./FileDescriptor.hpp"

namespace java::io
{
	// Fields
	java::io::FileDescriptor FileDescriptor::err()
	{
		return getStaticObjectField(
			"java.io.FileDescriptor",
			"err",
			"Ljava/io/FileDescriptor;"
		);
	}
	java::io::FileDescriptor FileDescriptor::in()
	{
		return getStaticObjectField(
			"java.io.FileDescriptor",
			"in",
			"Ljava/io/FileDescriptor;"
		);
	}
	java::io::FileDescriptor FileDescriptor::out()
	{
		return getStaticObjectField(
			"java.io.FileDescriptor",
			"out",
			"Ljava/io/FileDescriptor;"
		);
	}
	
	// Constructors
	FileDescriptor::FileDescriptor()
		: JObject(
			"java.io.FileDescriptor",
			"()V"
		) {}
	
	// Methods
	void FileDescriptor::sync() const
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
	jboolean FileDescriptor::valid() const
	{
		return callMethod<jboolean>(
			"valid",
			"()Z"
		);
	}
} // namespace java::io

