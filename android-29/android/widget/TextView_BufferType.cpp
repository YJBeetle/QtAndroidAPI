#include "./TextView_BufferType.hpp"

namespace android::widget
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
	
	TextView_BufferType::TextView_BufferType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	jarray TextView_BufferType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.TextView$BufferType",
			"values",
			"()[Landroid/widget/TextView$BufferType;"
		).object<jarray>();
	}
} // namespace android::widget

