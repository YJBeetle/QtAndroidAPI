#include "./IDNA_Info.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	IDNA_Info::IDNA_Info(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IDNA_Info::IDNA_Info()
		: __JniBaseClass(
			"android.icu.text.IDNA$Info",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass IDNA_Info::getErrors()
	{
		return callObjectMethod(
			"getErrors",
			"()Ljava/util/Set;"
		);
	}
	jboolean IDNA_Info::hasErrors()
	{
		return callMethod<jboolean>(
			"hasErrors",
			"()Z"
		);
	}
	jboolean IDNA_Info::isTransitionalDifferent()
	{
		return callMethod<jboolean>(
			"isTransitionalDifferent",
			"()Z"
		);
	}
} // namespace android::icu::text

