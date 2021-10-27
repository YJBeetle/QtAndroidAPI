#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class ClassLoader;
}

namespace android::view
{
	class AbsSavedState : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EMPTY_STATE();
		
		AbsSavedState(QAndroidJniObject obj);
		// Constructors
		AbsSavedState() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getSuperState();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

