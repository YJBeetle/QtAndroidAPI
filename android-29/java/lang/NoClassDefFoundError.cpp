#include "./NoClassDefFoundError.hpp"

namespace java::lang
{
	// Fields
	
	NoClassDefFoundError::NoClassDefFoundError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoClassDefFoundError::NoClassDefFoundError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoClassDefFoundError",
			"()V"
		);
	}
	NoClassDefFoundError::NoClassDefFoundError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoClassDefFoundError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoClassDefFoundError::NoClassDefFoundError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoClassDefFoundError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

