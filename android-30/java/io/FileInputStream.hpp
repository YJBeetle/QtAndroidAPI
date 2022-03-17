#pragma once

#include "../../JByteArray.hpp"
#include "./File.def.hpp"
#include "./FileDescriptor.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/channels/FileChannel.def.hpp"
#include "./FileInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline FileInputStream::FileInputStream(java::io::File arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline FileInputStream::FileInputStream(java::io::FileDescriptor arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	inline FileInputStream::FileInputStream(JString arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint FileInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void FileInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::nio::channels::FileChannel FileInputStream::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	inline java::io::FileDescriptor FileInputStream::getFD() const
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	inline jint FileInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint FileInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint FileInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jlong FileInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

// Base class headers
#include "./InputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
