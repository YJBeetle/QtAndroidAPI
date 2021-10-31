#include "./ReflectPermission.hpp"

namespace java::lang::reflect
{
	// Fields
	
	ReflectPermission::ReflectPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReflectPermission::ReflectPermission(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ReflectPermission::ReflectPermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::lang::reflect

