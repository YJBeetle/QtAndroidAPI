#pragma once

#include "../../JObject.hpp"

class JCharArray;

namespace android::view
{
	class KeyCharacterMap_KeyData : public JObject
	{
	public:
		// Fields
		static jint META_LENGTH();
		jchar displayLabel();
		JCharArray meta();
		jchar number();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyCharacterMap_KeyData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyCharacterMap_KeyData(QJniObject obj);
		
		// Constructors
		KeyCharacterMap_KeyData();
		
		// Methods
	};
} // namespace android::view

