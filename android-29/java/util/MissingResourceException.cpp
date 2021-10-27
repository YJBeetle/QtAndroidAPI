#include "./MissingResourceException.hpp"

namespace java::util
{
	// Fields
	
	MissingResourceException::MissingResourceException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MissingResourceException::MissingResourceException(jstring &arg0, jstring &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingResourceException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	MissingResourceException::MissingResourceException(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingResourceException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jstring MissingResourceException::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingResourceException::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

