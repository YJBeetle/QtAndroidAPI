#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app::admin
{
	class PreferentialNetworkServiceConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PREFERENTIAL_NETWORK_ID_1();
		static jint PREFERENTIAL_NETWORK_ID_2();
		static jint PREFERENTIAL_NETWORK_ID_3();
		static jint PREFERENTIAL_NETWORK_ID_4();
		static jint PREFERENTIAL_NETWORK_ID_5();
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferentialNetworkServiceConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PreferentialNetworkServiceConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JIntArray getExcludedUids() const;
		JIntArray getIncludedUids() const;
		jint getNetworkId() const;
		jint hashCode() const;
		jboolean isEnabled() const;
		jboolean isFallbackToDefaultConnectionAllowed() const;
		jboolean shouldBlockNonMatchingNetworks() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

