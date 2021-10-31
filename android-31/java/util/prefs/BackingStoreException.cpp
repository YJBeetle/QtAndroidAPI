#include "./BackingStoreException.hpp"

namespace java::util::prefs
{
	// Fields
	
	// QJniObject forward
	BackingStoreException::BackingStoreException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	BackingStoreException::BackingStoreException(jstring arg0)
		: java::lang::Exception(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	BackingStoreException::BackingStoreException(jthrowable arg0)
		: java::lang::Exception(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util::prefs

