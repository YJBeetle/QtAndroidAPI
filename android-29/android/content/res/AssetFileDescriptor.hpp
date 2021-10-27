#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
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
	class FileDescriptor;
}
namespace java::io
{
	class FileInputStream;
}
namespace java::io
{
	class FileOutputStream;
}

namespace android::content::res
{
	class AssetFileDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jlong UNKNOWN_LENGTH();
		
		AssetFileDescriptor(QAndroidJniObject obj);
		// Constructors
		AssetFileDescriptor(android::os::ParcelFileDescriptor &arg0, jlong &arg1, jlong &arg2);
		AssetFileDescriptor(android::os::ParcelFileDescriptor &arg0, jlong &arg1, jlong &arg2, android::os::Bundle &arg3);
		AssetFileDescriptor() = default;
		
		// Methods
		void close();
		QAndroidJniObject createInputStream();
		QAndroidJniObject createOutputStream();
		jint describeContents();
		jlong getDeclaredLength();
		QAndroidJniObject getExtras();
		QAndroidJniObject getFileDescriptor();
		jlong getLength();
		QAndroidJniObject getParcelFileDescriptor();
		jlong getStartOffset();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::res

