#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::view::contentcapture
{
	class DataRemovalRequest;
}

namespace android::view::contentcapture
{
	class DataRemovalRequest_LocusIdRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataRemovalRequest_LocusIdRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataRemovalRequest_LocusIdRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getFlags() const;
		android::content::LocusId getLocusId() const;
	};
} // namespace android::view::contentcapture

