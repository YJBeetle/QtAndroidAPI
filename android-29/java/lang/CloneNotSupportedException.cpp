#include "./CloneNotSupportedException.hpp"

namespace java::lang
{
	// Fields
	
	CloneNotSupportedException::CloneNotSupportedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CloneNotSupportedException::CloneNotSupportedException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.CloneNotSupportedException",
			"()V"
		);
	}
	CloneNotSupportedException::CloneNotSupportedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.CloneNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CloneNotSupportedException::CloneNotSupportedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.CloneNotSupportedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

