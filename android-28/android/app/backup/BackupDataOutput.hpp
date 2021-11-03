#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class FileDescriptor;
}
class JString;

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
		jint writeEntityData(JByteArray arg0, jint arg1);
		jint writeEntityHeader(JString arg0, jint arg1);
	};
} // namespace android::app::backup

