#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class MediaStore_Audio : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaStore_Audio(QAndroidJniObject obj);
		// Constructors
		MediaStore_Audio();
		
		// Methods
		static jstring keyFor(jstring arg0);
	};
} // namespace android::provider

