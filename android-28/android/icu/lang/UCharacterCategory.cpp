#include "../../../JString.hpp"
#include "./UCharacterCategory.hpp"

namespace android::icu::lang
{
	// Fields
	
	// QAndroidJniObject forward
	UCharacterCategory::UCharacterCategory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString UCharacterCategory::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacterCategory",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::icu::lang

