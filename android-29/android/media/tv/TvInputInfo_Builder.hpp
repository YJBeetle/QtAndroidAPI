#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::media::tv
{
	class TvInputInfo;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::tv
{
	class TvInputInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		TvInputInfo_Builder(QAndroidJniObject obj);
		// Constructors
		TvInputInfo_Builder(android::content::Context &arg0, android::content::ComponentName &arg1);
		TvInputInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setCanRecord(jboolean arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setTunerCount(jint arg0);
	};
} // namespace android::media::tv

