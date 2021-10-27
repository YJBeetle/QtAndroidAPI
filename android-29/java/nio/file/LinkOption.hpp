#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file
{
	class LinkOption : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NOFOLLOW_LINKS();
		
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
	QAndroidJniObject LinkOption::NOFOLLOW_LINKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.LinkOption",
			"NOFOLLOW_LINKS",
			"Ljava/nio/file/LinkOption;"
		);
	}
	
	// Constructors
	void LinkOption::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.LinkOption",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LinkOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/LinkOption;",
			arg0
		);
	}
	QAndroidJniObject LinkOption::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/LinkOption;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray LinkOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"values",
			"()[Ljava/nio/file/LinkOption;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class LinkOption : public __jni_impl::java::nio::file::LinkOption
	{
	public:
		LinkOption(QAndroidJniObject obj) { __thiz = obj; }
		LinkOption()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

