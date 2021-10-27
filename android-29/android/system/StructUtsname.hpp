#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::system
{
	class StructUtsname : public __JniBaseClass
	{
	public:
		// Fields
		jstring machine();
		jstring nodename();
		jstring release();
		jstring sysname();
		jstring version();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4);
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::system


namespace __jni_impl::android::system
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
			arg4
		);
	}
	void StructUtsname::__constructor(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.system.StructUtsname",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>()
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

