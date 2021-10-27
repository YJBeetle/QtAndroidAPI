#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class DisplayContext_Type : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CAPITALIZATION();
		static QAndroidJniObject DIALECT_HANDLING();
		static QAndroidJniObject DISPLAY_LENGTH();
		static QAndroidJniObject SUBSTITUTE_HANDLING();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject DisplayContext_Type::CAPITALIZATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"CAPITALIZATION",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	QAndroidJniObject DisplayContext_Type::DIALECT_HANDLING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"DIALECT_HANDLING",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	QAndroidJniObject DisplayContext_Type::DISPLAY_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"DISPLAY_LENGTH",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	QAndroidJniObject DisplayContext_Type::SUBSTITUTE_HANDLING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"SUBSTITUTE_HANDLING",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	
	// Constructors
	void DisplayContext_Type::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DisplayContext$Type",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DisplayContext_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext$Type;",
			arg0
		);
	}
	QAndroidJniObject DisplayContext_Type::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext$Type;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray DisplayContext_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"values",
			"()[Landroid/icu/text/DisplayContext$Type;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DisplayContext_Type : public __jni_impl::android::icu::text::DisplayContext_Type
	{
	public:
		DisplayContext_Type(QAndroidJniObject obj) { __thiz = obj; }
		DisplayContext_Type()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

