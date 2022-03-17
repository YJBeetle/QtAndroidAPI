#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
class JString;

namespace android::os
{
	class DropBoxManager_Entry : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DropBoxManager_Entry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DropBoxManager_Entry(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DropBoxManager_Entry(JString arg0, jlong arg1);
		DropBoxManager_Entry(JString arg0, jlong arg1, JString arg2);
		DropBoxManager_Entry(JString arg0, jlong arg1, JByteArray arg2, jint arg3);
		DropBoxManager_Entry(JString arg0, jlong arg1, android::os::ParcelFileDescriptor arg2, jint arg3);
		DropBoxManager_Entry(JString arg0, jlong arg1, java::io::File arg2, jint arg3);
		
		// Methods
		void close() const;
		jint describeContents() const;
		jint getFlags() const;
		java::io::InputStream getInputStream() const;
		JString getTag() const;
		JString getText(jint arg0) const;
		jlong getTimeMillis() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

