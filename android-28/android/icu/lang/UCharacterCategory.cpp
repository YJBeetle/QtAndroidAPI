#include "./UCharacterCategory.hpp"

namespace android::icu::lang
{
	// Fields
	
	// QJniObject forward
	UCharacterCategory::UCharacterCategory(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring UCharacterCategory::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacterCategory",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::icu::lang

