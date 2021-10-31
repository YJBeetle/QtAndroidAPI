#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::net::wifi
{
	class ScanResult_InformationElement : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanResult_InformationElement(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult_InformationElement(QAndroidJniObject obj);
		
		// Constructors
		ScanResult_InformationElement(android::net::wifi::ScanResult_InformationElement &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		java::nio::ByteBuffer getBytes();
		jint getId();
		jint getIdExt();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

