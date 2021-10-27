#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class Session2Command;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class Session2CommandGroup : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Session2CommandGroup(QAndroidJniObject obj);
		// Constructors
		Session2CommandGroup() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getCommands();
		jboolean hasCommand(android::media::Session2Command arg0);
		jboolean hasCommand(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

