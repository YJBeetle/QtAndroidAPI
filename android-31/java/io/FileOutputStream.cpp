#include "../../JByteArray.hpp"
#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./FileOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	FileOutputStream::FileOutputStream(QJniObject obj) : java::io::OutputStream(obj) {}
	
	// Constructors
	FileOutputStream::FileOutputStream(java::io::File arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	FileOutputStream::FileOutputStream(java::io::FileDescriptor arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	FileOutputStream::FileOutputStream(JString arg0)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	FileOutputStream::FileOutputStream(java::io::File arg0, jboolean arg1)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		) {}
	FileOutputStream::FileOutputStream(JString arg0, jboolean arg1)
		: java::io::OutputStream(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	void FileOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::nio::channels::FileChannel FileOutputStream::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	java::io::FileDescriptor FileOutputStream::getFD() const
	{
		return callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	void FileOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void FileOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FileOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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

