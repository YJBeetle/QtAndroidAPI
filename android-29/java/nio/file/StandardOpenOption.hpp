#pragma once

#ifndef JAVA_NIO_FILE_STANDARDOPENOPTION
#define JAVA_NIO_FILE_STANDARDOPENOPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file
{
	class StandardOpenOption : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject READ();
		static QAndroidJniObject WRITE();
		static QAndroidJniObject APPEND();
		static QAndroidJniObject TRUNCATE_EXISTING();
		static QAndroidJniObject CREATE();
		static QAndroidJniObject CREATE_NEW();
		static QAndroidJniObject DELETE_ON_CLOSE();
		static QAndroidJniObject SPARSE();
		static QAndroidJniObject SYNC();
		static QAndroidJniObject DSYNC();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	QAndroidJniObject StandardOpenOption::READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"READ",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"WRITE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::APPEND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"APPEND",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::TRUNCATE_EXISTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"TRUNCATE_EXISTING",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::CREATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"CREATE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::CREATE_NEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"CREATE_NEW",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::DELETE_ON_CLOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"DELETE_ON_CLOSE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::SPARSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"SPARSE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::SYNC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"SYNC",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	QAndroidJniObject StandardOpenOption::DSYNC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"DSYNC",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	
	// Constructors
	void StandardOpenOption::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.StandardOpenOption",
			"(V)V");
	}
	
	// Methods
	jarray StandardOpenOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardOpenOption",
			"values",
			"()[Ljava/nio/file/StandardOpenOption;"
		).object<jarray>();
	}
	QAndroidJniObject StandardOpenOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardOpenOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/StandardOpenOption;",
			arg0
		);
	}
	QAndroidJniObject StandardOpenOption::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardOpenOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/StandardOpenOption;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class StandardOpenOption : public __jni_impl::java::nio::file::StandardOpenOption
	{
	public:
		StandardOpenOption(QAndroidJniObject obj) { __thiz = obj; }
		StandardOpenOption()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_STANDARDOPENOPTION

