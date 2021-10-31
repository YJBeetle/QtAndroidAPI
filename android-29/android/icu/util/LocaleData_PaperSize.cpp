#include "./LocaleData_PaperSize.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	LocaleData_PaperSize::LocaleData_PaperSize(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint LocaleData_PaperSize::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint LocaleData_PaperSize::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::icu::util

