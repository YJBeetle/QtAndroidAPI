#pragma once

#ifndef JAVA_NIO_FILE_LINKPERMISSION
#define JAVA_NIO_FILE_LINKPERMISSION

#include "../../../__JniBaseClass.hpp"
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"


namespace __jni_impl::java::nio::file
{
	class LinkPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void LinkPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LinkPermission::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LinkPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void LinkPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class LinkPermission : public __jni_impl::java::nio::file::LinkPermission
	{
	public:
		LinkPermission(QAndroidJniObject obj) { __thiz = obj; }
		LinkPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		LinkPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_LINKPERMISSION

