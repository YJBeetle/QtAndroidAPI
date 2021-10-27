#include "./ReflectPermission.hpp"

namespace java::lang::reflect
{
	// Fields
	
	ReflectPermission::ReflectPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReflectPermission::ReflectPermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ReflectPermission::ReflectPermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	ReflectPermission::ReflectPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	ReflectPermission::ReflectPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang::reflect

