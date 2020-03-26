#pragma once

#ifndef ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL
#define ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::webkit
{
	class ConsoleMessage_MessageLevel : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject TIP();
		static QAndroidJniObject LOG();
		static QAndroidJniObject WARNING();
		static QAndroidJniObject ERROR();
		static QAndroidJniObject DEBUG();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	QAndroidJniObject ConsoleMessage_MessageLevel::TIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"TIP",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"LOG",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::WARNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"WARNING",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"ERROR",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::DEBUG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"DEBUG",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	
	// Constructors
	void ConsoleMessage_MessageLevel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ConsoleMessage$MessageLevel",
			"(V)V");
	}
	
	// Methods
	jarray ConsoleMessage_MessageLevel::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.ConsoleMessage$MessageLevel",
			"values",
			"()[Landroid/webkit/ConsoleMessage$MessageLevel;"
		).object<jarray>();
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.ConsoleMessage$MessageLevel",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/ConsoleMessage$MessageLevel;",
			arg0
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class ConsoleMessage_MessageLevel : public __jni_impl::android::webkit::ConsoleMessage_MessageLevel
	{
	public:
		ConsoleMessage_MessageLevel(QAndroidJniObject obj) { __thiz = obj; }
		ConsoleMessage_MessageLevel()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL

