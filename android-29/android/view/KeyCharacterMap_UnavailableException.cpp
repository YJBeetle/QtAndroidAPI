#include "./KeyCharacterMap_UnavailableException.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	KeyCharacterMap_UnavailableException::KeyCharacterMap_UnavailableException(QJniObject obj) : android::util::AndroidRuntimeException(obj) {}
	
	// Constructors
	KeyCharacterMap_UnavailableException::KeyCharacterMap_UnavailableException(jstring arg0)
		: android::util::AndroidRuntimeException(
			"android.view.KeyCharacterMap$UnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::view

