#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class DataRemovalRequest_LocusIdRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataRemovalRequest_LocusIdRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DataRemovalRequest_LocusIdRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getFlags();
		android::content::LocusId getLocusId();
	};
} // namespace android::view::contentcapture

