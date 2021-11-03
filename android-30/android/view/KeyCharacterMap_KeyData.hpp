#pragma once

#include "../../JObject.hpp"


namespace android::view
{
	class KeyCharacterMap_KeyData : public JObject
	{
	public:
		// Fields
		static jint META_LENGTH();
		jchar displayLabel();
		jcharArray meta();
		jchar number();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyCharacterMap_KeyData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyCharacterMap_KeyData(QAndroidJniObject obj);
		
		// Constructors
		KeyCharacterMap_KeyData();
		
		// Methods
	};
} // namespace android::view

