#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS
#define JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::nio::file::attribute
{
	class PosixFilePermissions : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject toString(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject asFileAttribute(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject fromString(jstring arg0);
	};
} // namespace __jni_impl::java::nio::file::attribute

#include "../../../lang/StringBuilder.hpp"

namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	
	// Constructors
	void PosixFilePermissions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.PosixFilePermissions",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PosixFilePermissions::toString(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"toString",
			"(Ljava/util/Set;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PosixFilePermissions::asFileAttribute(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"asFileAttribute",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/FileAttribute;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PosixFilePermissions::fromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class PosixFilePermissions : public __jni_impl::java::nio::file::attribute::PosixFilePermissions
	{
	public:
		PosixFilePermissions(QAndroidJniObject obj) { __thiz = obj; }
		PosixFilePermissions()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS

