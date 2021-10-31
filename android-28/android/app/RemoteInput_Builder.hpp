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
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteInput_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteInput_Builder(QJniObject obj);
		
		// Constructors
		RemoteInput_Builder(jstring arg0);
		
		// Methods
		android::app::RemoteInput_Builder addExtras(android::os::Bundle arg0);
		android::app::RemoteInput build();
		android::os::Bundle getExtras();
		android::app::RemoteInput_Builder setAllowDataType(jstring arg0, jboolean arg1);
		android::app::RemoteInput_Builder setAllowFreeFormInput(jboolean arg0);
		android::app::RemoteInput_Builder setChoices(jarray arg0);
		android::app::RemoteInput_Builder setLabel(jstring arg0);
	};
} // namespace android::app

