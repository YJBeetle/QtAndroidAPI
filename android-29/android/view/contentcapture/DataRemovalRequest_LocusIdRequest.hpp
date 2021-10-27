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
		
		DataRemovalRequest_LocusIdRequest(QAndroidJniObject obj);
		// Constructors
		DataRemovalRequest_LocusIdRequest() = default;
		
		// Methods
		jint getFlags();
		QAndroidJniObject getLocusId();
	};
} // namespace android::view::contentcapture

