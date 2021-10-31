#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../os/PatternMatcher.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PathPermission : public android::os::PatternMatcher
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		PathPermission(QAndroidJniObject obj);
		// Constructors
		PathPermission(android::os::Parcel arg0);
		PathPermission(jstring arg0, jint arg1, jstring arg2, jstring arg3);
		PathPermission() = default;
		
		// Methods
		jstring getReadPermission();
		jstring getWritePermission();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

