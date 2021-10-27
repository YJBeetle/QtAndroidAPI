#include "./UCharacterDirection.hpp"

namespace android::icu::lang
{
	// Fields
	
	UCharacterDirection::UCharacterDirection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring UCharacterDirection::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacterDirection",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::icu::lang

