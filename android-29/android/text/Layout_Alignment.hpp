#pragma once

#ifndef ANDROID_TEXT_LAYOUT_ALIGNMENT
#define ANDROID_TEXT_LAYOUT_ALIGNMENT

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::text
{
	class Layout_Alignment : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALIGN_NORMAL();
		static QAndroidJniObject ALIGN_OPPOSITE();
		static QAndroidJniObject ALIGN_CENTER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	QAndroidJniObject Layout_Alignment::ALIGN_NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_NORMAL",
			"Landroid/text/Layout$Alignment;");
	}
	QAndroidJniObject Layout_Alignment::ALIGN_OPPOSITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_OPPOSITE",
			"Landroid/text/Layout$Alignment;");
	}
	QAndroidJniObject Layout_Alignment::ALIGN_CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_CENTER",
			"Landroid/text/Layout$Alignment;");
	}
	
	// Constructors
	void Layout_Alignment::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.Layout$Alignment",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Layout_Alignment::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"values",
			"()[Landroid/text/Layout$Alignment;");
	}
	QAndroidJniObject Layout_Alignment::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/Layout$Alignment;",
			arg0);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class Layout_Alignment : public __jni_impl::android::text::Layout_Alignment
	{
	public:
		Layout_Alignment(QAndroidJniObject obj) { __thiz = obj; }
		Layout_Alignment()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_LAYOUT_ALIGNMENT

