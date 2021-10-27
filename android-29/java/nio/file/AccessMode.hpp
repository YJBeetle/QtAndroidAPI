#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file
{
	class AccessMode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EXECUTE();
		static QAndroidJniObject READ();
		static QAndroidJniObject WRITE();
		
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
	QAndroidJniObject AccessMode::EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.AccessMode",
			"EXECUTE",
			"Ljava/nio/file/AccessMode;"
		);
	}
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
	
	// Constructors
	void AccessMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.AccessMode",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AccessMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/AccessMode;",
			arg0
		);
	}
	QAndroidJniObject AccessMode::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/AccessMode;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray AccessMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"values",
			"()[Ljava/nio/file/AccessMode;"
		).object<jarray>();
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

