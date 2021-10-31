#include "./CloneNotSupportedException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	CloneNotSupportedException::CloneNotSupportedException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	CloneNotSupportedException::CloneNotSupportedException()
		: java::lang::Exception(
			"java.lang.CloneNotSupportedException",
			"()V"
		) {}
	CloneNotSupportedException::CloneNotSupportedException(jstring arg0)
		: java::lang::Exception(
			"java.lang.CloneNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

