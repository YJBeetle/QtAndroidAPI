#pragma once

#ifndef ANDROID_ICU_TEXT_MESSAGEPATTERN_ARGTYPE
#define ANDROID_ICU_TEXT_MESSAGEPATTERN_ARGTYPE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class MessagePattern_ArgType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NONE();
		static QAndroidJniObject SIMPLE();
		static QAndroidJniObject CHOICE();
		static QAndroidJniObject PLURAL();
		static QAndroidJniObject SELECT();
		static QAndroidJniObject SELECTORDINAL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
		jboolean hasPluralStyle();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject MessagePattern_ArgType::NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"NONE",
			"Landroid/icu/text/MessagePattern$ArgType;");
	}
	QAndroidJniObject MessagePattern_ArgType::SIMPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SIMPLE",
			"Landroid/icu/text/MessagePattern$ArgType;");
	}
	QAndroidJniObject MessagePattern_ArgType::CHOICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"CHOICE",
			"Landroid/icu/text/MessagePattern$ArgType;");
	}
	QAndroidJniObject MessagePattern_ArgType::PLURAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"PLURAL",
			"Landroid/icu/text/MessagePattern$ArgType;");
	}
	QAndroidJniObject MessagePattern_ArgType::SELECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SELECT",
			"Landroid/icu/text/MessagePattern$ArgType;");
	}
	QAndroidJniObject MessagePattern_ArgType::SELECTORDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SELECTORDINAL",
			"Landroid/icu/text/MessagePattern$ArgType;");
	}
	
	// Constructors
	void MessagePattern_ArgType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessagePattern$ArgType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MessagePattern_ArgType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ArgType",
			"values",
			"()[Landroid/icu/text/MessagePattern$ArgType;");
	}
	QAndroidJniObject MessagePattern_ArgType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$ArgType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ArgType;",
			arg0);
	}
	jboolean MessagePattern_ArgType::hasPluralStyle()
	{
		return __thiz.callMethod<jboolean>(
			"hasPluralStyle",
			"()Z");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MessagePattern_ArgType : public __jni_impl::android::icu::text::MessagePattern_ArgType
	{
	public:
		MessagePattern_ArgType(QAndroidJniObject obj) { __thiz = obj; }
		MessagePattern_ArgType()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_MESSAGEPATTERN_ARGTYPE

