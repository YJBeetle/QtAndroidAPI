#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::app::backup
{
	class BackupDataInput : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackupDataInput(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataInput(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getDataSize();
		jstring getKey();
		jint readEntityData(jbyteArray arg0, jint arg1, jint arg2);
		jboolean readNextHeader();
		void skipEntityData();
	};
} // namespace android::app::backup

