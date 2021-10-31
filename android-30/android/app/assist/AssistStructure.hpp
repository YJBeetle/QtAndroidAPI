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
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssistStructure(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AssistStructure(QAndroidJniObject obj);
		
		// Constructors
		AssistStructure();
		
		// Methods
		jint describeContents();
		jlong getAcquisitionEndTime();
		jlong getAcquisitionStartTime();
		android::content::ComponentName getActivityComponent();
		android::app::assist::AssistStructure_WindowNode getWindowNodeAt(jint arg0);
		jint getWindowNodeCount();
		jboolean isHomeActivity();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::assist

