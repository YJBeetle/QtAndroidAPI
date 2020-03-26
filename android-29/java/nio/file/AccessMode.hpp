#pragma once

#ifndef JAVA_NIO_FILE_ACCESSMODE
#define JAVA_NIO_FILE_ACCESSMODE

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file
{
	class AccessMode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject READ();
		static QAndroidJniObject WRITE();
		static QAndroidJniObject EXECUTE();
		
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
	QAndroidJniObject AccessMode::READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.AccessMode",
			"READ",
			"Ljava/nio/file/AccessMode;"
		);
	}
	QAndroidJniObject AccessMode::WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.AccessMode",
			"WRITE",
			"Ljava/nio/file/AccessMode;"
		);
	}
	QAndroidJniObject AccessMode::EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.AccessMode",
			"EXECUTE",
			"Ljava/nio/file/AccessMode;"
		);
	}
	
	// Constructors
	void AccessMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.AccessMode",
			"(V)V");
	}
	
	// Methods
	jarray AccessMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"values",
			"()[Ljava/nio/file/AccessMode;"
		).object<jarray>();
	}
	QAndroidJniObject AccessMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/AccessMode;",
			arg0
		);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class AccessMode : public __jni_impl::java::nio::file::AccessMode
	{
	public:
		AccessMode(QAndroidJniObject obj) { __thiz = obj; }
		AccessMode()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_ACCESSMODE

