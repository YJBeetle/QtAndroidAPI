#pragma once

#include "../util/AndroidRuntimeException.hpp"

class JString;

namespace android::view
{
	class KeyCharacterMap_UnavailableException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyCharacterMap_UnavailableException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		KeyCharacterMap_UnavailableException(QAndroidJniObject obj);
		
		// Constructors
		KeyCharacterMap_UnavailableException(JString arg0);
		
		// Methods
	};
} // namespace android::view

