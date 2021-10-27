#pragma once

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
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
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
	QAndroidJniObject FileVisitOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitOption;",
			arg0
		);
	}
	QAndroidJniObject FileVisitOption::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitOption;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray FileVisitOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"values",
			"()[Ljava/nio/file/FileVisitOption;"
		).object<jarray>();
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

