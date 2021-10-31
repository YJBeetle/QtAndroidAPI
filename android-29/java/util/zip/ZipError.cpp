#include "./ZipError.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	ZipError::ZipError(QAndroidJniObject obj) : java::lang::InternalError(obj) {}
	
	// Constructors
	ZipError::ZipError(jstring arg0)
		: java::lang::InternalError(
			"java.util.zip.ZipError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util::zip

