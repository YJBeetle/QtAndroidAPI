#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ModuleInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ModuleInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ModuleInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getName();
		jstring getPackageName();
		jint hashCode();
		jboolean isHidden();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

