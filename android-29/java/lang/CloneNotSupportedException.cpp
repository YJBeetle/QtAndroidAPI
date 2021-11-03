#include "../../JString.hpp"
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
	CloneNotSupportedException::CloneNotSupportedException(JString arg0)
		: java::lang::Exception(
			"java.lang.CloneNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

