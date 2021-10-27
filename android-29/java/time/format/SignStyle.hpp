#pragma once

#ifndef JAVA_TIME_FORMAT_SIGNSTYLE
#define JAVA_TIME_FORMAT_SIGNSTYLE

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::time::format
{
	class SignStyle : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALWAYS();
		static QAndroidJniObject EXCEEDS_PAD();
		static QAndroidJniObject NEVER();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject NOT_NEGATIVE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::java::time::format


namespace __jni_impl::java::time::format
{
	// Fields
	QAndroidJniObject SignStyle::ALWAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"ALWAYS",
			"Ljava/time/format/SignStyle;"
		);
	}
	QAndroidJniObject SignStyle::EXCEEDS_PAD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"EXCEEDS_PAD",
			"Ljava/time/format/SignStyle;"
		);
	}
	QAndroidJniObject SignStyle::NEVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"NEVER",
			"Ljava/time/format/SignStyle;"
		);
	}
	QAndroidJniObject SignStyle::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"NORMAL",
			"Ljava/time/format/SignStyle;"
		);
	}
	QAndroidJniObject SignStyle::NOT_NEGATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.SignStyle",
			"NOT_NEGATIVE",
			"Ljava/time/format/SignStyle;"
		);
	}
	
	// Constructors
	void SignStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.format.SignStyle",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SignStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.SignStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/SignStyle;",
			arg0
		);
	}
	QAndroidJniObject SignStyle::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.SignStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/SignStyle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray SignStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.SignStyle",
			"values",
			"()[Ljava/time/format/SignStyle;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::time::format

namespace java::time::format
{
	class SignStyle : public __jni_impl::java::time::format::SignStyle
	{
	public:
		SignStyle(QAndroidJniObject obj) { __thiz = obj; }
		SignStyle()
		{
			__constructor();
		}
	};
} // namespace java::time::format

#endif // JAVA_TIME_FORMAT_SIGNSTYLE

