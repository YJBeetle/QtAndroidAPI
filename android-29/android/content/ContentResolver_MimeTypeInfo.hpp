#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics::drawable
{
	class Icon;
}

namespace android::content
{
	class ContentResolver_MimeTypeInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		ContentResolver_MimeTypeInfo(QAndroidJniObject obj);
		// Constructors
		ContentResolver_MimeTypeInfo() = default;
		
		// Methods
		jstring getContentDescription();
		QAndroidJniObject getIcon();
		jstring getLabel();
	};
} // namespace android::content

