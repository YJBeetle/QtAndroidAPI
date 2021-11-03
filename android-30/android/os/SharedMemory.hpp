#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::os
{
	class SharedMemory : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SharedMemory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SharedMemory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::SharedMemory create(JString arg0, jint arg1);
		static void unmap(java::nio::ByteBuffer arg0);
		void close() const;
		jint describeContents() const;
		jint getSize() const;
		java::nio::ByteBuffer map(jint arg0, jint arg1, jint arg2) const;
		java::nio::ByteBuffer mapReadOnly() const;
		java::nio::ByteBuffer mapReadWrite() const;
		jboolean setProtect(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

