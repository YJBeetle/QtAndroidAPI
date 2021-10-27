#pragma once

#ifndef ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE
#define ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::widget
{
	class TextView_BufferType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EDITABLE();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject SPANNABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::widget


namespace __jni_impl::android::widget
{
	// Fields
	QAndroidJniObject TextView_BufferType::EDITABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextView$BufferType",
			"EDITABLE",
			"Landroid/widget/TextView$BufferType;"
		);
	}
	QAndroidJniObject TextView_BufferType::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextView$BufferType",
			"NORMAL",
			"Landroid/widget/TextView$BufferType;"
		);
	}
	QAndroidJniObject TextView_BufferType::SPANNABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextView$BufferType",
			"SPANNABLE",
			"Landroid/widget/TextView$BufferType;"
		);
	}
	
	// Constructors
	void TextView_BufferType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView$BufferType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextView_BufferType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.TextView$BufferType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/widget/TextView$BufferType;",
			arg0
		);
	}
	QAndroidJniObject TextView_BufferType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.TextView$BufferType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/widget/TextView$BufferType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TextView_BufferType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.TextView$BufferType",
			"values",
			"()[Landroid/widget/TextView$BufferType;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TextView_BufferType : public __jni_impl::android::widget::TextView_BufferType
	{
	public:
		TextView_BufferType(QAndroidJniObject obj) { __thiz = obj; }
		TextView_BufferType()
		{
			__constructor();
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE

