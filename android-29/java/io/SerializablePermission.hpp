#pragma once

#ifndef JAVA_IO_SERIALIZABLEPERMISSION
#define JAVA_IO_SERIALIZABLEPERMISSION

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace __jni_impl::java::io
{
	class SerializablePermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void SerializablePermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SerializablePermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class SerializablePermission : public __jni_impl::java::io::SerializablePermission
	{
	public:
		SerializablePermission(QAndroidJniObject obj) { __thiz = obj; }
		SerializablePermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SerializablePermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_SERIALIZABLEPERMISSION

