#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./BackingStoreException.hpp"

namespace java::util::prefs
{
	// Fields
	
	// QAndroidJniObject forward
	BackingStoreException::BackingStoreException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	BackingStoreException::BackingStoreException(JString arg0)
		: java::lang::Exception(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	BackingStoreException::BackingStoreException(JThrowable arg0)
		: java::lang::Exception(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::prefs

