#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class MessagePattern_Part_Type : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ARG_DOUBLE();
		static QAndroidJniObject ARG_INT();
		static QAndroidJniObject ARG_LIMIT();
		static QAndroidJniObject ARG_NAME();
		static QAndroidJniObject ARG_NUMBER();
		static QAndroidJniObject ARG_SELECTOR();
		static QAndroidJniObject ARG_START();
		static QAndroidJniObject ARG_STYLE();
		static QAndroidJniObject ARG_TYPE();
		static QAndroidJniObject INSERT_CHAR();
		static QAndroidJniObject MSG_LIMIT();
		static QAndroidJniObject MSG_START();
		static QAndroidJniObject REPLACE_NUMBER();
		static QAndroidJniObject SKIP_SYNTAX();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jboolean hasNumericValue();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject MessagePattern_Part_Type::ARG_DOUBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_DOUBLE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_INT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_LIMIT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_NAME",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_NUMBER",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_SELECTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_SELECTOR",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_START",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_STYLE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::ARG_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"ARG_TYPE",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::INSERT_CHAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"INSERT_CHAR",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::MSG_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"MSG_LIMIT",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::MSG_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"MSG_START",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::REPLACE_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"REPLACE_NUMBER",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::SKIP_SYNTAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessagePattern$Part$Type",
			"SKIP_SYNTAX",
			"Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	
	// Constructors
	void MessagePattern_Part_Type::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessagePattern$Part$Type",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MessagePattern_Part_Type::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$Part$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$Part$Type;",
			arg0
		);
	}
	QAndroidJniObject MessagePattern_Part_Type::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$Part$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$Part$Type;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray MessagePattern_Part_Type::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessagePattern$Part$Type",
			"values",
			"()[Landroid/icu/text/MessagePattern$Part$Type;"
		).object<jarray>();
	}
	jboolean MessagePattern_Part_Type::hasNumericValue()
	{
		return __thiz.callMethod<jboolean>(
			"hasNumericValue",
			"()Z"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MessagePattern_Part_Type : public __jni_impl::android::icu::text::MessagePattern_Part_Type
	{
	public:
		MessagePattern_Part_Type(QAndroidJniObject obj) { __thiz = obj; }
		MessagePattern_Part_Type()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

