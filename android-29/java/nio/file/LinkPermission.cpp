#include "./LinkPermission.hpp"

namespace java::nio::file
{
	// Fields
	
	LinkPermission::LinkPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinkPermission::LinkPermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	LinkPermission::LinkPermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	LinkPermission::LinkPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	LinkPermission::LinkPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::nio::file

