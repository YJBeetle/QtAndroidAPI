#pragma once

#include "../../../JObject.hpp"

namespace android::app::backup
{
	class FullBackupDataOutput : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FullBackupDataOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FullBackupDataOutput(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getQuota() const;
		jint getTransportFlags() const;
	};
} // namespace android::app::backup

