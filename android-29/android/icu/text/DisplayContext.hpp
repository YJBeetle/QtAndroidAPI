#pragma once

#ifndef ANDROID_ICU_TEXT_DISPLAYCONTEXT
#define ANDROID_ICU_TEXT_DISPLAYCONTEXT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"

namespace __jni_impl::android::icu::text
{
	class DisplayContext_Type;
}

namespace __jni_impl::android::icu::text
{
	class DisplayContext : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject STANDARD_NAMES();
		static QAndroidJniObject DIALECT_NAMES();
		static QAndroidJniObject CAPITALIZATION_NONE();
		static QAndroidJniObject CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE();
		static QAndroidJniObject CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE();
		static QAndroidJniObject CAPITALIZATION_FOR_UI_LIST_OR_MENU();
		static QAndroidJniObject CAPITALIZATION_FOR_STANDALONE();
		static QAndroidJniObject LENGTH_FULL();
		static QAndroidJniObject LENGTH_SHORT();
		static QAndroidJniObject SUBSTITUTE();
		static QAndroidJniObject NO_SUBSTITUTE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject type();
		jint value();
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "DisplayContext_Type.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject DisplayContext::STANDARD_NAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"STANDARD_NAMES",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::DIALECT_NAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"DIALECT_NAMES",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_NONE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_UI_LIST_OR_MENU",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::CAPITALIZATION_FOR_STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"CAPITALIZATION_FOR_STANDALONE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::LENGTH_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"LENGTH_FULL",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::LENGTH_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"LENGTH_SHORT",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::SUBSTITUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"SUBSTITUTE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject DisplayContext::NO_SUBSTITUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.DisplayContext",
			"NO_SUBSTITUTE",
			"Landroid/icu/text/DisplayContext;"
		);
	}
	
	// Constructors
	void DisplayContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DisplayContext",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DisplayContext::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Landroid/icu/text/DisplayContext$Type;"
		);
	}
	jint DisplayContext::value()
	{
		return __thiz.callMethod<jint>(
			"value",
			"()I"
		);
	}
	jarray DisplayContext::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext",
			"values",
			"()[Landroid/icu/text/DisplayContext;"
		).object<jarray>();
	}
	QAndroidJniObject DisplayContext::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext;",
			arg0
		);
	}
	QAndroidJniObject DisplayContext::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DisplayContext",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DisplayContext : public __jni_impl::android::icu::text::DisplayContext
	{
	public:
		DisplayContext(QAndroidJniObject obj) { __thiz = obj; }
		DisplayContext()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DISPLAYCONTEXT

