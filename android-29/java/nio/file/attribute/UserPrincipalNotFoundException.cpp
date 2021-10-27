#include "./UserPrincipalNotFoundException.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	UserPrincipalNotFoundException::UserPrincipalNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UserPrincipalNotFoundException::UserPrincipalNotFoundException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.UserPrincipalNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UserPrincipalNotFoundException::UserPrincipalNotFoundException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.UserPrincipalNotFoundException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring UserPrincipalNotFoundException::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file::attribute

