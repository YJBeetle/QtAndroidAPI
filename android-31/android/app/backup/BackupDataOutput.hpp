#pragma once

#include "../../../JObject.hpp"


namespace android::app::backup
{
	class BackupDataOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupDataOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataOutput(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getQuota();
		jint getTransportFlags();
		jint writeEntityData(jbyteArray arg0, jint arg1);
		jint writeEntityHeader(jstring arg0, jint arg1);
	};
} // namespace android::app::backup

