#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::app::backup
{
	class BackupDataInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupDataInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataInput(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getDataSize();
		jstring getKey();
		jint readEntityData(jbyteArray arg0, jint arg1, jint arg2);
		jboolean readNextHeader();
		void skipEntityData();
	};
} // namespace android::app::backup

