#include "./StructUtsname.hpp"

namespace android::system
{
	// Fields
	jstring StructUtsname::machine()
	{
		return __thiz.getObjectField(
			"machine",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StructUtsname::nodename()
	{
		return __thiz.getObjectField(
			"nodename",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StructUtsname::release()
	{
		return __thiz.getObjectField(
			"release",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StructUtsname::sysname()
	{
		return __thiz.getObjectField(
			"sysname",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StructUtsname::version()
	{
		return __thiz.getObjectField(
			"version",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	StructUtsname::StructUtsname(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StructUtsname::StructUtsname(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz = QAndroidJniObject(
			"android.system.StructUtsname",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jstring StructUtsname::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

