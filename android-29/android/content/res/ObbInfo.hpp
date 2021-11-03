#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::res
{
	class ObbInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint OBB_OVERLAY();
		jstring filename();
		jint flags();
		jstring packageName();
		jint version();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObbInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObbInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::res

