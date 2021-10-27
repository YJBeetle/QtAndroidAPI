#include "./RuntimePermission.hpp"

namespace java::lang
{
	// Fields
	
	RuntimePermission::RuntimePermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RuntimePermission::RuntimePermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RuntimePermission::RuntimePermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	RuntimePermission::RuntimePermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	RuntimePermission::RuntimePermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

