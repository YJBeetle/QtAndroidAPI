#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class SupplicantState : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ASSOCIATED();
		static QAndroidJniObject ASSOCIATING();
		static QAndroidJniObject AUTHENTICATING();
		static QAndroidJniObject COMPLETED();
		static QAndroidJniObject DISCONNECTED();
		static QAndroidJniObject DORMANT();
		static QAndroidJniObject FOUR_WAY_HANDSHAKE();
		static QAndroidJniObject GROUP_HANDSHAKE();
		static QAndroidJniObject INACTIVE();
		static QAndroidJniObject INTERFACE_DISABLED();
		static QAndroidJniObject INVALID();
		static QAndroidJniObject SCANNING();
		static QAndroidJniObject UNINITIALIZED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SupplicantState(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SupplicantState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isValidState(android::net::wifi::SupplicantState arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

