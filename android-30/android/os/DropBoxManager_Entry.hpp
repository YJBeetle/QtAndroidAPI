#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}

namespace android::os
{
	class DropBoxManager_Entry : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DropBoxManager_Entry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DropBoxManager_Entry(QJniObject obj);
		
		// Constructors
		DropBoxManager_Entry(jstring arg0, jlong arg1);
		DropBoxManager_Entry(jstring arg0, jlong arg1, jstring arg2);
		DropBoxManager_Entry(jstring arg0, jlong arg1, jbyteArray arg2, jint arg3);
		DropBoxManager_Entry(jstring arg0, jlong arg1, android::os::ParcelFileDescriptor arg2, jint arg3);
		DropBoxManager_Entry(jstring arg0, jlong arg1, java::io::File arg2, jint arg3);
		
		// Methods
		void close();
		jint describeContents();
		jint getFlags();
		java::io::InputStream getInputStream();
		jstring getTag();
		jstring getText(jint arg0);
		jlong getTimeMillis();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

