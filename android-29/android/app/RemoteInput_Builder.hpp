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
		
		RemoteInput_Builder(QAndroidJniObject obj);
		// Constructors
		RemoteInput_Builder(jstring &arg0);
		RemoteInput_Builder(const QString &arg0);
		RemoteInput_Builder() = default;
		
		// Methods
		QAndroidJniObject addExtras(android::os::Bundle arg0);
		QAndroidJniObject build();
		QAndroidJniObject getExtras();
		QAndroidJniObject setAllowDataType(jstring arg0, jboolean arg1);
		QAndroidJniObject setAllowDataType(const QString &arg0, jboolean arg1);
		QAndroidJniObject setAllowFreeFormInput(jboolean arg0);
		QAndroidJniObject setChoices(jarray arg0);
		QAndroidJniObject setEditChoicesBeforeSending(jint arg0);
		QAndroidJniObject setLabel(jstring arg0);
		QAndroidJniObject setLabel(const QString &arg0);
	};
} // namespace android::app

