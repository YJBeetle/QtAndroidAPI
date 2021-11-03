#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"


namespace android::view
{
	class KeyCharacterMap_UnavailableException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyCharacterMap_UnavailableException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		KeyCharacterMap_UnavailableException(QJniObject obj);
		
		// Constructors
		KeyCharacterMap_UnavailableException(jstring arg0);
		
		// Methods
	};
} // namespace android::view

