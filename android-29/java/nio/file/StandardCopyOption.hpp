#pragma once

#ifndef JAVA_NIO_FILE_STANDARDCOPYOPTION
#define JAVA_NIO_FILE_STANDARDCOPYOPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file
{
	class StandardCopyOption : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject REPLACE_EXISTING();
		static QAndroidJniObject COPY_ATTRIBUTES();
		static QAndroidJniObject ATOMIC_MOVE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	QAndroidJniObject StandardCopyOption::REPLACE_EXISTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"REPLACE_EXISTING",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	QAndroidJniObject StandardCopyOption::COPY_ATTRIBUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"COPY_ATTRIBUTES",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	QAndroidJniObject StandardCopyOption::ATOMIC_MOVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"ATOMIC_MOVE",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	
	// Constructors
	void StandardCopyOption::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.StandardCopyOption",
			"(V)V");
	}
	
	// Methods
	jarray StandardCopyOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardCopyOption",
			"values",
			"()[Ljava/nio/file/StandardCopyOption;"
		).object<jarray>();
	}
	QAndroidJniObject StandardCopyOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardCopyOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/StandardCopyOption;",
			arg0
		);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class StandardCopyOption : public __jni_impl::java::nio::file::StandardCopyOption
	{
	public:
		StandardCopyOption(QAndroidJniObject obj) { __thiz = obj; }
		StandardCopyOption()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_STANDARDCOPYOPTION

