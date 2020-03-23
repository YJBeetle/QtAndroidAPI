#pragma once

#ifndef ANDROID_SYSTEM_STRUCTUTSNAME
#define ANDROID_SYSTEM_STRUCTUTSNAME

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::system
{
	class StructUtsname : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject machine();
		QAndroidJniObject nodename();
		QAndroidJniObject release();
		QAndroidJniObject sysname();
		QAndroidJniObject version();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::system


namespace __jni_impl::android::system
{
	// Fields
	QAndroidJniObject StructUtsname::machine()
	{
		return __thiz.getObjectField(
			"machine",
			"Ljava/lang/String;");
	}
	QAndroidJniObject StructUtsname::nodename()
	{
		return __thiz.getObjectField(
			"nodename",
			"Ljava/lang/String;");
	}
	QAndroidJniObject StructUtsname::release()
	{
		return __thiz.getObjectField(
			"release",
			"Ljava/lang/String;");
	}
	QAndroidJniObject StructUtsname::sysname()
	{
		return __thiz.getObjectField(
			"sysname",
			"Ljava/lang/String;");
	}
	QAndroidJniObject StructUtsname::version()
	{
		return __thiz.getObjectField(
			"version",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void StructUtsname::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz = QAndroidJniObject(
			"android.system.StructUtsname",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	
	// Methods
	QAndroidJniObject StructUtsname::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::system

namespace android::system
{
	class StructUtsname : public __jni_impl::android::system::StructUtsname
	{
	public:
		StructUtsname(QAndroidJniObject obj) { __thiz = obj; }
		StructUtsname(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_STRUCTUTSNAME

