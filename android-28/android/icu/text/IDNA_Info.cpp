#include "./IDNA_Info.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	IDNA_Info::IDNA_Info(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IDNA_Info::IDNA_Info()
		: JObject(
			"android.icu.text.IDNA$Info",
			"()V"
		) {}
	
	// Methods
	JObject IDNA_Info::getErrors() const
	{
		return callObjectMethod(
			"getErrors",
			"()Ljava/util/Set;"
		);
	}
	jboolean IDNA_Info::hasErrors() const
	{
		return callMethod<jboolean>(
			"hasErrors",
			"()Z"
		);
	}
	jboolean IDNA_Info::isTransitionalDifferent() const
	{
		return callMethod<jboolean>(
			"isTransitionalDifferent",
			"()Z"
		);
	}
} // namespace android::icu::text

