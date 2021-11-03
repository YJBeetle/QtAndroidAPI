#pragma once

#include "../../../JObject.hpp"

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
	class AssistStructure : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssistStructure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssistStructure(QAndroidJniObject obj);
		
		// Constructors
		AssistStructure();
		
		// Methods
		jint describeContents() const;
		jlong getAcquisitionEndTime() const;
		jlong getAcquisitionStartTime() const;
		android::content::ComponentName getActivityComponent() const;
		android::app::assist::AssistStructure_WindowNode getWindowNodeAt(jint arg0) const;
		jint getWindowNodeCount() const;
		jboolean isHomeActivity() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::assist

