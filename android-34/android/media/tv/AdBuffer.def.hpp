#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class SharedMemory;
}
class JString;

namespace android::media::tv
{
	class AdBuffer : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdBuffer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdBuffer(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdBuffer(jint arg0, JString arg1, android::os::SharedMemory arg2, jint arg3, jint arg4, jlong arg5, jint arg6);
		
		// Methods
		jint describeContents() const;
		jint getFlags() const;
		jint getId() const;
		jint getLength() const;
		JString getMimeType() const;
		jint getOffset() const;
		jlong getPresentationTimeUs() const;
		android::os::SharedMemory getSharedMemory() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

