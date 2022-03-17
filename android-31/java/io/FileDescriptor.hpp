#pragma once

#include "./FileDescriptor.def.hpp"

namespace java::io
{
	// Fields
	inline java::io::FileDescriptor FileDescriptor::err()
	{
		return getStaticObjectField(
			"java.io.FileDescriptor",
			"err",
			"Ljava/io/FileDescriptor;"
		);
	}
	inline java::io::FileDescriptor FileDescriptor::in()
	{
		return getStaticObjectField(
			"java.io.FileDescriptor",
			"in",
			"Ljava/io/FileDescriptor;"
		);
	}
	inline java::io::FileDescriptor FileDescriptor::out()
	{
		return getStaticObjectField(
			"java.io.FileDescriptor",
			"out",
			"Ljava/io/FileDescriptor;"
		);
	}
	
	// Constructors
	inline FileDescriptor::FileDescriptor()
		: JObject(
			"java.io.FileDescriptor",
			"()V"
		) {}
	
	// Methods
	inline void FileDescriptor::sync() const
	{
		callMethod<void>(
			"sync",
			"()V"
		);
	}
	inline jboolean FileDescriptor::valid() const
	{
		return callMethod<jboolean>(
			"valid",
			"()Z"
		);
	}
} // namespace java::io

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
