#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class LocaleData_PaperSize : public __JniBaseClass
	{
	public:
		// Fields
		
		LocaleData_PaperSize(QAndroidJniObject obj);
		// Constructors
		LocaleData_PaperSize() = default;
		
		// Methods
		jint getHeight();
		jint getWidth();
	};
} // namespace android::icu::util

