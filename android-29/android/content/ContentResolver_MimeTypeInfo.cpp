#include "../graphics/drawable/Icon.hpp"
#include "./ContentResolver_MimeTypeInfo.hpp"

namespace android::content
{
	// Fields
	
	ContentResolver_MimeTypeInfo::ContentResolver_MimeTypeInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring ContentResolver_MimeTypeInfo::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ContentResolver_MimeTypeInfo::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring ContentResolver_MimeTypeInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace android::content

