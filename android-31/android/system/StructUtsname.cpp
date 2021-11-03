#include "./StructUtsname.hpp"

namespace android::system
{
	// Fields
	jstring StructUtsname::machine()
	{
		return getObjectField(
			"machine",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StructUtsname::nodename()
	{
		return getObjectField(
			"nodename",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StructUtsname::release()
	{
		return getObjectField(
			"release",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StructUtsname::sysname()
	{
		return getObjectField(
			"sysname",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StructUtsname::version()
	{
		return getObjectField(
			"version",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	StructUtsname::StructUtsname(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StructUtsname::StructUtsname(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
		: JObject(
			"android.system.StructUtsname",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jstring StructUtsname::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

