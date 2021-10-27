#pragma once

#ifndef ANDROID_TEXT_TEXTUTILS_TRUNCATEAT
#define ANDROID_TEXT_TEXTUTILS_TRUNCATEAT

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::text
{
	class TextUtils_TruncateAt : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject END();
		static QAndroidJniObject MARQUEE();
		static QAndroidJniObject MIDDLE();
		static QAndroidJniObject START();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	QAndroidJniObject TextUtils_TruncateAt::END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"END",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	QAndroidJniObject TextUtils_TruncateAt::MARQUEE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"MARQUEE",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	QAndroidJniObject TextUtils_TruncateAt::MIDDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"MIDDLE",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	QAndroidJniObject TextUtils_TruncateAt::START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"START",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	
	// Constructors
	void TextUtils_TruncateAt::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.TextUtils$TruncateAt",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextUtils_TruncateAt::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/TextUtils$TruncateAt;",
			arg0
		);
	}
	QAndroidJniObject TextUtils_TruncateAt::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/TextUtils$TruncateAt;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TextUtils_TruncateAt::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"values",
			"()[Landroid/text/TextUtils$TruncateAt;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class TextUtils_TruncateAt : public __jni_impl::android::text::TextUtils_TruncateAt
	{
	public:
		TextUtils_TruncateAt(QAndroidJniObject obj) { __thiz = obj; }
		TextUtils_TruncateAt()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_TEXTUTILS_TRUNCATEAT

