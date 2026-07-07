#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::settings::preferences
{
	class SetValueResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RESULT_DISABLED();
		static jint RESULT_DISALLOW();
		static jint RESULT_INTERNAL_ERROR();
		static jint RESULT_INVALID_REQUEST();
		static jint RESULT_OK();
		static jint RESULT_REQUIRE_APP_PERMISSION();
		static jint RESULT_REQUIRE_USER_CONSENT();
		static jint RESULT_RESTRICTED();
		static jint RESULT_UNAVAILABLE();
		static jint RESULT_UNSUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit SetValueResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetValueResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getResultCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::settings::preferences

