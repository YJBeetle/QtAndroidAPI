#include "./IDNA_Info.hpp"

namespace android::icu::text
{
	// Fields
	
	IDNA_Info::IDNA_Info(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IDNA_Info::IDNA_Info()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.IDNA$Info",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject IDNA_Info::getErrors()
	{
		return __thiz.callObjectMethod(
			"getErrors",
			"()Ljava/util/Set;"
		);
	}
	jboolean IDNA_Info::hasErrors()
	{
		return __thiz.callMethod<jboolean>(
			"hasErrors",
			"()Z"
		);
	}
	jboolean IDNA_Info::isTransitionalDifferent()
	{
		return __thiz.callMethod<jboolean>(
			"isTransitionalDifferent",
			"()Z"
		);
	}
} // namespace android::icu::text

