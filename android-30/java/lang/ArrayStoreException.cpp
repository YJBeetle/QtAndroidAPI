#include "../../JString.hpp"
#include "./ArrayStoreException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ArrayStoreException::ArrayStoreException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ArrayStoreException::ArrayStoreException()
		: java::lang::RuntimeException(
			"java.lang.ArrayStoreException",
			"()V"
		) {}
	ArrayStoreException::ArrayStoreException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.ArrayStoreException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

