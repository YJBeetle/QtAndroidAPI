#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::text::method
{
	class TextKeyListener_Capitalize : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CHARACTERS();
		static QAndroidJniObject NONE();
		static QAndroidJniObject SENTENCES();
		static QAndroidJniObject WORDS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::text::method


namespace __jni_impl::android::text::method
{
	// Fields
	QAndroidJniObject TextKeyListener_Capitalize::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"CHARACTERS",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	QAndroidJniObject TextKeyListener_Capitalize::NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"NONE",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	QAndroidJniObject TextKeyListener_Capitalize::SENTENCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"SENTENCES",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	QAndroidJniObject TextKeyListener_Capitalize::WORDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TextKeyListener$Capitalize",
			"WORDS",
			"Landroid/text/method/TextKeyListener$Capitalize;"
		);
	}
	
	// Constructors
	void TextKeyListener_Capitalize::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.TextKeyListener$Capitalize",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextKeyListener_Capitalize::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/method/TextKeyListener$Capitalize;",
			arg0
		);
	}
	QAndroidJniObject TextKeyListener_Capitalize::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/method/TextKeyListener$Capitalize;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TextKeyListener_Capitalize::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener$Capitalize",
			"values",
			"()[Landroid/text/method/TextKeyListener$Capitalize;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class TextKeyListener_Capitalize : public __jni_impl::android::text::method::TextKeyListener_Capitalize
	{
	public:
		TextKeyListener_Capitalize(QAndroidJniObject obj) { __thiz = obj; }
		TextKeyListener_Capitalize()
		{
			__constructor();
		}
	};
} // namespace android::text::method

