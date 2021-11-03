#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi
{
	class SupplicantState : public java::lang::Enum
	{
	public:
		// Fields
		static android::net::wifi::SupplicantState ASSOCIATED();
		static android::net::wifi::SupplicantState ASSOCIATING();
		static android::net::wifi::SupplicantState AUTHENTICATING();
		static android::net::wifi::SupplicantState COMPLETED();
		static android::net::wifi::SupplicantState DISCONNECTED();
		static android::net::wifi::SupplicantState DORMANT();
		static android::net::wifi::SupplicantState FOUR_WAY_HANDSHAKE();
		static android::net::wifi::SupplicantState GROUP_HANDSHAKE();
		static android::net::wifi::SupplicantState INACTIVE();
		static android::net::wifi::SupplicantState INTERFACE_DISABLED();
		static android::net::wifi::SupplicantState INVALID();
		static android::net::wifi::SupplicantState SCANNING();
		static android::net::wifi::SupplicantState UNINITIALIZED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SupplicantState(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SupplicantState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isValidState(android::net::wifi::SupplicantState arg0);
		static android::net::wifi::SupplicantState valueOf(JString arg0);
		static JArray values();
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

