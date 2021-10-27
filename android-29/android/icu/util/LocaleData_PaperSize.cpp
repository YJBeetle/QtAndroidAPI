#include "./LocaleData_PaperSize.hpp"

namespace android::icu::util
{
	// Fields
	
	LocaleData_PaperSize::LocaleData_PaperSize(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint LocaleData_PaperSize::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint LocaleData_PaperSize::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::icu::util

