#pragma once

#include "./ComponentInfo.hpp"

class JArray;
class JArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class ProviderInfo : public android::content::pm::ComponentInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_SINGLE_USER();
		JString authority();
		jint flags();
		jboolean grantUriPermissions();
		jint initOrder();
		jboolean isSyncable();
		jboolean multiprocess();
		JArray pathPermissions();
		JString readPermission();
		JArray uriPermissionPatterns();
		JString writePermission();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProviderInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::ComponentInfo(className, sig, std::forward<Ts>(agv)...) {}
		ProviderInfo(QJniObject obj);
		
		// Constructors
		ProviderInfo();
		ProviderInfo(android::content::pm::ProviderInfo &arg0);
		
		// Methods
		jint describeContents();
		void dump(JObject arg0, JString arg1);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

