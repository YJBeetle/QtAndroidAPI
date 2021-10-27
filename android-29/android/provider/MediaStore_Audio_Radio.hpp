#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class MediaStore_Audio_Radio : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ENTRY_CONTENT_TYPE();
		
		MediaStore_Audio_Radio(QAndroidJniObject obj);
		// Constructors
		MediaStore_Audio_Radio() = default;
		
		// Methods
	};
} // namespace android::provider

