#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::util
{
	class ULocale_Category : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DISPLAY();
		static QAndroidJniObject FORMAT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	QAndroidJniObject ULocale_Category::DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale$Category",
			"DISPLAY",
			"Landroid/icu/util/ULocale$Category;"
		);
	}
	QAndroidJniObject ULocale_Category::FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale$Category",
			"FORMAT",
			"Landroid/icu/util/ULocale$Category;"
		);
	}
	
	// Constructors
	void ULocale_Category::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale$Category",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ULocale_Category::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Category;",
			arg0
		);
	}
	QAndroidJniObject ULocale_Category::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Category;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ULocale_Category::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale$Category",
			"values",
			"()[Landroid/icu/util/ULocale$Category;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class ULocale_Category : public __jni_impl::android::icu::util::ULocale_Category
	{
	public:
		ULocale_Category(QAndroidJniObject obj) { __thiz = obj; }
		ULocale_Category()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

