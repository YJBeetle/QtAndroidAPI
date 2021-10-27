#include "./BackingStoreException.hpp"

namespace java::util::prefs
{
	// Fields
	
	BackingStoreException::BackingStoreException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BackingStoreException::BackingStoreException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BackingStoreException::BackingStoreException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	BackingStoreException::BackingStoreException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::util::prefs

