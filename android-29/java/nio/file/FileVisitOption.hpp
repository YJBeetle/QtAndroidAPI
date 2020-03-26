#pragma once

#ifndef JAVA_NIO_FILE_FILEVISITOPTION
#define JAVA_NIO_FILE_FILEVISITOPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file
{
	class FileVisitOption : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FOLLOW_LINKS();
		
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
	QAndroidJniObject FileVisitOption::FOLLOW_LINKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitOption",
			"FOLLOW_LINKS",
			"Ljava/nio/file/FileVisitOption;"
		);
	}
	
	// Constructors
	void FileVisitOption::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileVisitOption",
			"(V)V");
	}
	
	// Methods
	jarray FileVisitOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"values",
			"()[Ljava/nio/file/FileVisitOption;"
		).object<jarray>();
	}
	QAndroidJniObject FileVisitOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitOption;",
			arg0
		);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileVisitOption : public __jni_impl::java::nio::file::FileVisitOption
	{
	public:
		FileVisitOption(QAndroidJniObject obj) { __thiz = obj; }
		FileVisitOption()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILEVISITOPTION

