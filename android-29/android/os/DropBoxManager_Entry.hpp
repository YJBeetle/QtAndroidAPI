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
		static QAndroidJniObject CREATOR();
		
		DropBoxManager_Entry(QAndroidJniObject obj);
		// Constructors
		DropBoxManager_Entry(jstring &arg0, jlong &arg1);
		DropBoxManager_Entry(const QString &arg0, jlong &arg1);
		DropBoxManager_Entry(jstring &arg0, jlong &arg1, jstring &arg2);
		DropBoxManager_Entry(const QString &arg0, jlong &arg1, const QString &arg2);
		DropBoxManager_Entry(jstring &arg0, jlong &arg1, jbyteArray &arg2, jint &arg3);
		DropBoxManager_Entry(const QString &arg0, jlong &arg1, jbyteArray &arg2, jint &arg3);
		DropBoxManager_Entry(jstring &arg0, jlong &arg1, android::os::ParcelFileDescriptor &arg2, jint &arg3);
		DropBoxManager_Entry(const QString &arg0, jlong &arg1, android::os::ParcelFileDescriptor &arg2, jint &arg3);
		DropBoxManager_Entry(jstring &arg0, jlong &arg1, java::io::File &arg2, jint &arg3);
		DropBoxManager_Entry(const QString &arg0, jlong &arg1, java::io::File &arg2, jint &arg3);
		DropBoxManager_Entry() = default;
		
		// Methods
		void close();
		jint describeContents();
		jint getFlags();
		QAndroidJniObject getInputStream();
		jstring getTag();
		jstring getText(jint arg0);
		jlong getTimeMillis();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

