#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class RemoteInput;
}
namespace android::app::slice
{
	class Slice;
}
namespace android::app::slice
{
	class SliceSpec;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}

namespace android::app::slice
{
	class Slice_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Slice_Builder(QAndroidJniObject obj);
		// Constructors
		Slice_Builder(android::app::slice::Slice_Builder &arg0);
		Slice_Builder(android::net::Uri arg0, android::app::slice::SliceSpec arg1);
		Slice_Builder() = default;
		
		// Methods
		QAndroidJniObject addAction(android::app::PendingIntent arg0, android::app::slice::Slice arg1, jstring arg2);
		QAndroidJniObject addBundle(android::os::Bundle arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject addHints(__JniBaseClass arg0);
		QAndroidJniObject addIcon(android::graphics::drawable::Icon arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject addInt(jint arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject addLong(jlong arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject addRemoteInput(android::app::RemoteInput arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject addSubSlice(android::app::slice::Slice arg0, jstring arg1);
		QAndroidJniObject addText(jstring arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject build();
		QAndroidJniObject setCallerNeeded(jboolean arg0);
	};
} // namespace android::app::slice

