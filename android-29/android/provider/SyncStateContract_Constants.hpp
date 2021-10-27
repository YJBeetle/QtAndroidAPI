#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class SyncStateContract_Constants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		SyncStateContract_Constants(QAndroidJniObject obj);
		// Constructors
		SyncStateContract_Constants();
		
		// Methods
	};
} // namespace android::provider

