#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::time::format
{
	class FormatStyle : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FULL();
		static QAndroidJniObject LONG();
		static QAndroidJniObject MEDIUM();
		static QAndroidJniObject SHORT();
		
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
	QAndroidJniObject FormatStyle::FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"FULL",
			"Ljava/time/format/FormatStyle;"
		);
	}
	QAndroidJniObject FormatStyle::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"LONG",
			"Ljava/time/format/FormatStyle;"
		);
	}
	QAndroidJniObject FormatStyle::MEDIUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"MEDIUM",
			"Ljava/time/format/FormatStyle;"
		);
	}
	QAndroidJniObject FormatStyle::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"SHORT",
			"Ljava/time/format/FormatStyle;"
		);
	}
	
	// Constructors
	void FormatStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.format.FormatStyle",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FormatStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/FormatStyle;",
			arg0
		);
	}
	QAndroidJniObject FormatStyle::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/FormatStyle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray FormatStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"values",
			"()[Ljava/time/format/FormatStyle;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::time::format

namespace java::time::format
{
	class FormatStyle : public __jni_impl::java::time::format::FormatStyle
	{
	public:
		FormatStyle(QAndroidJniObject obj) { __thiz = obj; }
		FormatStyle()
		{
			__constructor();
		}
	};
} // namespace java::time::format

