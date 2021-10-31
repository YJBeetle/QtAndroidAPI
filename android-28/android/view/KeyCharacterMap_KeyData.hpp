#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class KeyCharacterMap_KeyData : public __JniBaseClass
	{
	public:
		// Fields
		static jint META_LENGTH();
		jchar displayLabel();
		jcharArray meta();
		jchar number();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyCharacterMap_KeyData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyCharacterMap_KeyData(QJniObject obj);
		
		// Constructors
		KeyCharacterMap_KeyData();
		
		// Methods
	};
} // namespace android::view

