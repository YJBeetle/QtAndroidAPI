#include "./KeyCharacterMap_UnavailableException.hpp"

namespace android::view
{
	// Fields
	
	KeyCharacterMap_UnavailableException::KeyCharacterMap_UnavailableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyCharacterMap_UnavailableException::KeyCharacterMap_UnavailableException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyCharacterMap$UnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::view

