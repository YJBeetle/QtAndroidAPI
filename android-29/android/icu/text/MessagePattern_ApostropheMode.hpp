#pragma once

#ifndef ANDROID_ICU_TEXT_MESSAGEPATTERN_APOSTROPHEMODE
#define ANDROID_ICU_TEXT_MESSAGEPATTERN_APOSTROPHEMODE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class MessagePattern_ApostropheMode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DOUBLE_OPTIONAL();
		static QAndroidJniObject DOUBLE_REQUIRED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject MessagePattern_ApostropheMode::DOUBLE_OPTIONAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ApostropheMode",
			"DOUBLE_OPTIONAL",
			"Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	QAndroidJniObject MessagePattern_ApostropheMode::DOUBLE_REQUIRED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ApostropheMode",
			"DOUBLE_REQUIRED",
			"Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	
	// Constructors
	void MessagePattern_ApostropheMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessagePattern$ApostropheMode",
			"(V)V");
	}
	
	// Methods
	jarray MessagePattern_ApostropheMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"values",
			"()[Landroid/icu/text/MessagePattern$ApostropheMode;"
		).object<jarray>();
	}
	QAndroidJniObject MessagePattern_ApostropheMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ApostropheMode;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern_ApostropheMode::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ApostropheMode;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MessagePattern_ApostropheMode : public __jni_impl::android::icu::text::MessagePattern_ApostropheMode
	{
	public:
		MessagePattern_ApostropheMode(QAndroidJniObject obj) { __thiz = obj; }
		MessagePattern_ApostropheMode()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_MESSAGEPATTERN_APOSTROPHEMODE

