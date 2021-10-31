#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::backup
{
	class FullBackupDataOutput : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FullBackupDataOutput(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FullBackupDataOutput(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getQuota();
		jint getTransportFlags();
	};
} // namespace android::app::backup

