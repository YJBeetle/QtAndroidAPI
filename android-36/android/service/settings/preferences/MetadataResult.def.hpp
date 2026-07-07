#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::settings::preferences
{
	class MetadataResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RESULT_INTERNAL_ERROR();
		static jint RESULT_OK();
		static jint RESULT_UNSUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit MetadataResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MetadataResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getMetadataList() const;
		jint getResultCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::settings::preferences

