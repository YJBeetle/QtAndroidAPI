#pragma once

#include "../../../JObject.hpp"

namespace android::app::backup
{
	class FullBackupDataOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FullBackupDataOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FullBackupDataOutput(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getQuota();
		jint getTransportFlags();
	};
} // namespace android::app::backup

