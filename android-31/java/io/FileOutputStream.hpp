#pragma once

#include "../../JByteArray.hpp"
#include "./File.def.hpp"
#include "./FileDescriptor.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/channels/FileChannel.def.hpp"
#include "./FileOutputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline FileOutputStream::FileOutputStream(java::io::File arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline FileOutputStream::FileOutputStream(java::io::FileDescriptor arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	inline FileOutputStream::FileOutputStream(JString arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline FileOutputStream::FileOutputStream(java::io::File arg0, jboolean arg1)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		) {}
	inline FileOutputStream::FileOutputStream(JString arg0, jboolean arg1)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline void FileOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::nio::channels::FileChannel FileOutputStream::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	inline java::io::FileDescriptor FileOutputStream::getFD() const
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	inline void FileOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void FileOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void FileOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./OutputStream.hpp"

