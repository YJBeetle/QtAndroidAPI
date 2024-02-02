#pragma once

#include "../../../java/lang/Exception.def.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JThrowable;

namespace android::app::sdksandbox
{
	class LoadSdkException : public java::lang::Exception
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit LoadSdkException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		LoadSdkException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		LoadSdkException(JThrowable arg0, android::os::Bundle arg1);
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getExtraInformation() const;
		jint getLoadSdkErrorCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::sdksandbox

