#pragma once

#ifndef JAVA_TIME_FORMAT_RESOLVERSTYLE
#define JAVA_TIME_FORMAT_RESOLVERSTYLE

#include "../../lang/Enum.hpp"


namespace __jni_impl::java::time::format
{
	class ResolverStyle : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject STRICT();
		static QAndroidJniObject SMART();
		static QAndroidJniObject LENIENT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::time::format


namespace __jni_impl::java::time::format
{
	// Fields
	QAndroidJniObject ResolverStyle::STRICT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.ResolverStyle",
			"STRICT",
			"Ljava/time/format/ResolverStyle;");
	}
	QAndroidJniObject ResolverStyle::SMART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.ResolverStyle",
			"SMART",
			"Ljava/time/format/ResolverStyle;");
	}
	QAndroidJniObject ResolverStyle::LENIENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.ResolverStyle",
			"LENIENT",
			"Ljava/time/format/ResolverStyle;");
	}
	
	// Constructors
	void ResolverStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.format.ResolverStyle",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ResolverStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"values",
			"()[Ljava/time/format/ResolverStyle;");
	}
	QAndroidJniObject ResolverStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/ResolverStyle;",
			arg0);
	}
} // namespace __jni_impl::java::time::format

namespace java::time::format
{
	class ResolverStyle : public __jni_impl::java::time::format::ResolverStyle
	{
	public:
		ResolverStyle(QAndroidJniObject obj) { __thiz = obj; }
		ResolverStyle()
		{
			__constructor();
		}
	};
} // namespace java::time::format

#endif // JAVA_TIME_FORMAT_RESOLVERSTYLE

