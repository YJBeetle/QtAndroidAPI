#pragma once

#ifndef JAVA_UTIL_LOCALE_FILTERINGMODE
#define JAVA_UTIL_LOCALE_FILTERINGMODE

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::util
{
	class Locale_FilteringMode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AUTOSELECT_FILTERING();
		static QAndroidJniObject EXTENDED_FILTERING();
		static QAndroidJniObject IGNORE_EXTENDED_RANGES();
		static QAndroidJniObject MAP_EXTENDED_RANGES();
		static QAndroidJniObject REJECT_EXTENDED_RANGES();
		
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
	QAndroidJniObject Locale_FilteringMode::AUTOSELECT_FILTERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"AUTOSELECT_FILTERING",
			"Ljava/util/Locale$FilteringMode;");
	}
	QAndroidJniObject Locale_FilteringMode::EXTENDED_FILTERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"EXTENDED_FILTERING",
			"Ljava/util/Locale$FilteringMode;");
	}
	QAndroidJniObject Locale_FilteringMode::IGNORE_EXTENDED_RANGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"IGNORE_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;");
	}
	QAndroidJniObject Locale_FilteringMode::MAP_EXTENDED_RANGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"MAP_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;");
	}
	QAndroidJniObject Locale_FilteringMode::REJECT_EXTENDED_RANGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"REJECT_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;");
	}
	
	// Constructors
	void Locale_FilteringMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$FilteringMode",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Locale_FilteringMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$FilteringMode",
			"values",
			"()[Ljava/util/Locale$FilteringMode;");
	}
	QAndroidJniObject Locale_FilteringMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$FilteringMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;",
			arg0);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Locale_FilteringMode : public __jni_impl::java::util::Locale_FilteringMode
	{
	public:
		Locale_FilteringMode(QAndroidJniObject obj) { __thiz = obj; }
		Locale_FilteringMode()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_LOCALE_FILTERINGMODE

