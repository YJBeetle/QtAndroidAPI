#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class RemoteInput;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class RemoteInput_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteInput_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteInput_Builder(QAndroidJniObject obj);
		
		// Constructors
		RemoteInput_Builder(jstring arg0);
		
		// Methods
		QAndroidJniObject addExtras(android::os::Bundle arg0);
		QAndroidJniObject build();
		QAndroidJniObject getExtras();
		QAndroidJniObject setAllowDataType(jstring arg0, jboolean arg1);
		QAndroidJniObject setAllowFreeFormInput(jboolean arg0);
		QAndroidJniObject setChoices(jarray arg0);
		QAndroidJniObject setEditChoicesBeforeSending(jint arg0);
		QAndroidJniObject setLabel(jstring arg0);
	};
} // namespace android::app

