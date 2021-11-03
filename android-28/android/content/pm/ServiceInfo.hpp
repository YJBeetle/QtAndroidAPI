#pragma once

#include "./ComponentInfo.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class ServiceInfo : public android::content::pm::ComponentInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_EXTERNAL_SERVICE();
		static jint FLAG_ISOLATED_PROCESS();
		static jint FLAG_SINGLE_USER();
		static jint FLAG_STOP_WITH_TASK();
		jint flags();
		JString permission();
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::ComponentInfo(className, sig, std::forward<Ts>(agv)...) {}
		ServiceInfo(QJniObject obj);
		
		// Constructors
		ServiceInfo();
		ServiceInfo(android::content::pm::ServiceInfo &arg0);
		
		// Methods
		jint describeContents();
		void dump(JObject arg0, JString arg1);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

