#include "./FileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	FileSystemException::FileSystemException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	FileSystemException::FileSystemException(jstring arg0)
		: java::io::IOException(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	FileSystemException::FileSystemException(jstring arg0, jstring arg1, jstring arg2)
		: java::io::IOException(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jstring FileSystemException::getFile()
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getOtherFile()
	{
		return callObjectMethod(
			"getOtherFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file

