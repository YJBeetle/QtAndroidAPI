#include "./UCharacterDirection.hpp"

namespace android::icu::lang
{
	// Fields
	
	// QAndroidJniObject forward
	UCharacterDirection::UCharacterDirection(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring UCharacterDirection::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacterDirection",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::icu::lang

