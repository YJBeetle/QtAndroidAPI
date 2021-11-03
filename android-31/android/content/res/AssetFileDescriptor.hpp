#pragma once

#include "../../../JObject.hpp"

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
	class AssetFileDescriptor : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jlong UNKNOWN_LENGTH();
		
		// QJniObject forward
		template<typename ...Ts> explicit AssetFileDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssetFileDescriptor(QJniObject obj);
		
		// Constructors
		AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2);
		AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2, android::os::Bundle arg3);
		
		// Methods
		void close();
		java::io::FileInputStream createInputStream();
		java::io::FileOutputStream createOutputStream();
		jint describeContents();
		jlong getDeclaredLength();
		android::os::Bundle getExtras();
		java::io::FileDescriptor getFileDescriptor();
		jlong getLength();
		android::os::ParcelFileDescriptor getParcelFileDescriptor();
		jlong getStartOffset();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::res

