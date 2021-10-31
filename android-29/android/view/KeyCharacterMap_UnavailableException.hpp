#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"


namespace android::view
{
	class KeyCharacterMap_UnavailableException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		KeyCharacterMap_UnavailableException(QAndroidJniObject obj);
		// Constructors
		KeyCharacterMap_UnavailableException(jstring arg0);
		KeyCharacterMap_UnavailableException() = default;
		
		// Methods
	};
} // namespace android::view

