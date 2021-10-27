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
	class DataRemovalRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		DataRemovalRequest_Builder(QAndroidJniObject obj);
		// Constructors
		DataRemovalRequest_Builder();
		
		// Methods
		QAndroidJniObject addLocusId(android::content::LocusId arg0, jint arg1);
		QAndroidJniObject build();
		QAndroidJniObject forEverything();
	};
} // namespace android::view::contentcapture

