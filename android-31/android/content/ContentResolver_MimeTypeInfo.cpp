#include "../graphics/drawable/Icon.hpp"
#include "./ContentResolver_MimeTypeInfo.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentResolver_MimeTypeInfo::ContentResolver_MimeTypeInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring ContentResolver_MimeTypeInfo::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::graphics::drawable::Icon ContentResolver_MimeTypeInfo::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring ContentResolver_MimeTypeInfo::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace android::content

