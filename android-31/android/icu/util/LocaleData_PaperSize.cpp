#include "./LocaleData_PaperSize.hpp"

namespace android::icu::util
{
	// Fields
	
	// QAndroidJniObject forward
	LocaleData_PaperSize::LocaleData_PaperSize(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint LocaleData_PaperSize::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint LocaleData_PaperSize::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::icu::util

