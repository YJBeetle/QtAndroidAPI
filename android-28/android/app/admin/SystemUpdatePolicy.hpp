#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class SystemUpdatePolicy : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_INSTALL_AUTOMATIC();
		static jint TYPE_INSTALL_WINDOWED();
		static jint TYPE_POSTPONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SystemUpdatePolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemUpdatePolicy(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::admin::SystemUpdatePolicy createAutomaticInstallPolicy();
		static android::app::admin::SystemUpdatePolicy createPostponeInstallPolicy();
		static android::app::admin::SystemUpdatePolicy createWindowedInstallPolicy(jint arg0, jint arg1);
		jint describeContents();
		JObject getFreezePeriods();
		jint getInstallWindowEnd();
		jint getInstallWindowStart();
		jint getPolicyType();
		android::app::admin::SystemUpdatePolicy setFreezePeriods(JObject arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

