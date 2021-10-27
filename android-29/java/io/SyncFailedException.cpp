#include "./SyncFailedException.hpp"

namespace java::io
{
	// Fields
	
	SyncFailedException::SyncFailedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncFailedException::SyncFailedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SyncFailedException::SyncFailedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::io

