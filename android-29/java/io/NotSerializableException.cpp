#include "./NotSerializableException.hpp"

namespace java::io
{
	// Fields
	
	NotSerializableException::NotSerializableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotSerializableException::NotSerializableException()
	{
		__thiz = QAndroidJniObject(
			"java.io.NotSerializableException",
			"()V"
		);
	}
	NotSerializableException::NotSerializableException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.NotSerializableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NotSerializableException::NotSerializableException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.NotSerializableException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::io

