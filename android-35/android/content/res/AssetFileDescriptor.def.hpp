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
class JString;

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
		AssetFileDescriptor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2);
		AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2, android::os::Bundle arg3);
		
		// Methods
		void close() const;
		java::io::FileInputStream createInputStream() const;
		java::io::FileOutputStream createOutputStream() const;
		jint describeContents() const;
		jlong getDeclaredLength() const;
		android::os::Bundle getExtras() const;
		java::io::FileDescriptor getFileDescriptor() const;
		jlong getLength() const;
		android::os::ParcelFileDescriptor getParcelFileDescriptor() const;
		jlong getStartOffset() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::res

