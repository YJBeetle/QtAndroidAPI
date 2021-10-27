#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::assist
{
	class AssistStructure_WindowNode;
}
namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::assist
{
	class AssistStructure : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		AssistStructure(QAndroidJniObject obj);
		// Constructors
		AssistStructure();
		
		// Methods
		jint describeContents();
		jlong getAcquisitionEndTime();
		jlong getAcquisitionStartTime();
		QAndroidJniObject getActivityComponent();
		QAndroidJniObject getWindowNodeAt(jint arg0);
		jint getWindowNodeCount();
		jboolean isHomeActivity();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::assist

