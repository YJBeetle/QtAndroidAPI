#pragma once

#ifndef JAVA_UTIL_LOCALE_CATEGORY
#define JAVA_UTIL_LOCALE_CATEGORY

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::util
{
	class Locale_Category : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DISPLAY();
		static QAndroidJniObject FORMAT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	QAndroidJniObject Locale_Category::DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$Category",
			"DISPLAY",
			"Ljava/util/Locale$Category;");
	}
	QAndroidJniObject Locale_Category::FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$Category",
			"FORMAT",
			"Ljava/util/Locale$Category;");
	}
	
	// Constructors
	void Locale_Category::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$Category",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Locale_Category::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$Category",
			"values",
			"()[Ljava/util/Locale$Category;");
	}
	QAndroidJniObject Locale_Category::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$Category",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Locale$Category;",
			arg0);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Locale_Category : public __jni_impl::java::util::Locale_Category
	{
	public:
		Locale_Category(QAndroidJniObject obj) { __thiz = obj; }
		Locale_Category()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_LOCALE_CATEGORY

