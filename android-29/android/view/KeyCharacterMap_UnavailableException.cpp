#include "./KeyCharacterMap_UnavailableException.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	KeyCharacterMap_UnavailableException::KeyCharacterMap_UnavailableException(QAndroidJniObject obj) : android::util::AndroidRuntimeException(obj) {}
	
	// Constructors
	KeyCharacterMap_UnavailableException::KeyCharacterMap_UnavailableException(jstring arg0)
		: android::util::AndroidRuntimeException(
			"android.view.KeyCharacterMap$UnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::view

