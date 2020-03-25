#pragma once

#ifndef ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_DIRECTION
#define ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_DIRECTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class RelativeDateTimeFormatter_Direction : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LAST_2();
		static QAndroidJniObject LAST();
		static QAndroidJniObject THIS();
		static QAndroidJniObject NEXT();
		static QAndroidJniObject NEXT_2();
		static QAndroidJniObject PLAIN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject RelativeDateTimeFormatter_Direction::LAST_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"LAST_2",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::LAST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"LAST",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::THIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"THIS",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::NEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"NEXT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::NEXT_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"NEXT_2",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::PLAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"PLAIN",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;");
	}
	
	// Constructors
	void RelativeDateTimeFormatter_Direction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_Direction::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$Direction;");
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Direction;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class RelativeDateTimeFormatter_Direction : public __jni_impl::android::icu::text::RelativeDateTimeFormatter_Direction
	{
	public:
		RelativeDateTimeFormatter_Direction(QAndroidJniObject obj) { __thiz = obj; }
		RelativeDateTimeFormatter_Direction()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_DIRECTION

