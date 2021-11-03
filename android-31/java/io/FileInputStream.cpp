#include "../../JByteArray.hpp"
#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./FileInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	FileInputStream::FileInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	FileInputStream::FileInputStream(java::io::File arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	FileInputStream::FileInputStream(java::io::FileDescriptor arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	FileInputStream::FileInputStream(JString arg0)
		: java::io::InputStream(
			"java.io.FileInputStream",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint FileInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void FileInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::nio::channels::FileChannel FileInputStream::getChannel()
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	java::io::FileDescriptor FileInputStream::getFD()
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jint FileInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint FileInputStream::read(JByteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint FileInputStream::read(JByteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jlong FileInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

