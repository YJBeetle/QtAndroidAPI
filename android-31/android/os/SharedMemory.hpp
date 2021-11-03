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
		
		// QJniObject forward
		template<typename ...Ts> explicit SharedMemory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SharedMemory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::SharedMemory create(JString arg0, jint arg1);
		static void unmap(java::nio::ByteBuffer arg0);
		void close();
		jint describeContents();
		jint getSize();
		java::nio::ByteBuffer map(jint arg0, jint arg1, jint arg2);
		java::nio::ByteBuffer mapReadOnly();
		java::nio::ByteBuffer mapReadWrite();
		jboolean setProtect(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

