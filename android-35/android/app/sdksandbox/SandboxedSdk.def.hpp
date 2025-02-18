#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class SharedLibraryInfo;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::sdksandbox
{
	class SandboxedSdk : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SandboxedSdk(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SandboxedSdk(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SandboxedSdk(JObject arg0);
		
		// Methods
		jint describeContents() const;
		JObject getInterface() const;
		android::content::pm::SharedLibraryInfo getSharedLibraryInfo() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::sdksandbox

