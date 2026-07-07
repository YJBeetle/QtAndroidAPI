#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;

namespace android::app::backup
{
	class BackupDataOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupDataOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataOutput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getQuota() const;
		jint getTransportFlags() const;
		jint writeEntityData(JByteArray arg0, jint arg1) const;
		jint writeEntityHeader(JString arg0, jint arg1) const;
	};
} // namespace android::app::backup

