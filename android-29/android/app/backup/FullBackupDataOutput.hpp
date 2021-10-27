#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::backup
{
	class FullBackupDataOutput : public __JniBaseClass
	{
	public:
		// Fields
		
		FullBackupDataOutput(QAndroidJniObject obj);
		// Constructors
		FullBackupDataOutput() = default;
		
		// Methods
		jlong getQuota();
		jint getTransportFlags();
	};
} // namespace android::app::backup

