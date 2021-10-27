#pragma once

#ifndef JAVA_NIO_FILE_PATHS
#define JAVA_NIO_FILE_PATHS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class URI;
}

namespace __jni_impl::java::nio::file
{
	class Paths : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::java::net::URI arg0);
		static QAndroidJniObject get(jstring arg0, jarray arg1);
		static QAndroidJniObject get(const QString &arg0, jarray arg1);
	};
} // namespace __jni_impl::java::nio::file

#include "../../net/URI.hpp"

namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void Paths::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.Paths",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Paths::get(__jni_impl::java::net::URI arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Paths",
			"get",
			"(Ljava/net/URI;)Ljava/nio/file/Path;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Paths::get(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Paths",
			"get",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Paths::get(const QString &arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Paths",
			"get",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class Paths : public __jni_impl::java::nio::file::Paths
	{
	public:
		Paths(QAndroidJniObject obj) { __thiz = obj; }
		Paths()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_PATHS

