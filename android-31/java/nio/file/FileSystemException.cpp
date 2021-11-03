#include "../../../JString.hpp"
#include "./FileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	FileSystemException::FileSystemException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	FileSystemException::FileSystemException(JString arg0)
		: java::io::IOException(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	FileSystemException::FileSystemException(JString arg0, JString arg1, JString arg2)
		: java::io::IOException(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	JString FileSystemException::getFile() const
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		);
	}
	JString FileSystemException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	JString FileSystemException::getOtherFile() const
	{
		return callObjectMethod(
			"getOtherFile",
			"()Ljava/lang/String;"
		);
	}
	JString FileSystemException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file

