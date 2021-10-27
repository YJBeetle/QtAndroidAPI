#pragma once

#include "../../__JniBaseClass.hpp"
#include "Enum.hpp"


namespace __jni_impl::java::lang
{
	class ProcessBuilder_Redirect_Type : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject APPEND();
		static QAndroidJniObject INHERIT();
		static QAndroidJniObject PIPE();
		static QAndroidJniObject READ();
		static QAndroidJniObject WRITE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	QAndroidJniObject ProcessBuilder_Redirect_Type::APPEND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"APPEND",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect_Type::INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"INHERIT",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect_Type::PIPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"PIPE",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect_Type::READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"READ",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect_Type::WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect$Type",
			"WRITE",
			"Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
	
	// Constructors
	void ProcessBuilder_Redirect_Type::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ProcessBuilder$Redirect$Type",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ProcessBuilder_Redirect_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/ProcessBuilder$Redirect$Type;",
			arg0
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect_Type::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/ProcessBuilder$Redirect$Type;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ProcessBuilder_Redirect_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect$Type",
			"values",
			"()[Ljava/lang/ProcessBuilder$Redirect$Type;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ProcessBuilder_Redirect_Type : public __jni_impl::java::lang::ProcessBuilder_Redirect_Type
	{
	public:
		ProcessBuilder_Redirect_Type(QAndroidJniObject obj) { __thiz = obj; }
		ProcessBuilder_Redirect_Type()
		{
			__constructor();
		}
	};
} // namespace java::lang

