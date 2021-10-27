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
		
		KeyCharacterMap_KeyData(QAndroidJniObject obj);
		// Constructors
		KeyCharacterMap_KeyData();
		
		// Methods
	};
} // namespace android::view

