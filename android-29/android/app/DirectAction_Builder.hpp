#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class DirectAction;
}
namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class DirectAction_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		DirectAction_Builder(QAndroidJniObject obj);
		// Constructors
		DirectAction_Builder(jstring arg0);
		DirectAction_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setLocusId(android::content::LocusId arg0);
	};
} // namespace android::app

