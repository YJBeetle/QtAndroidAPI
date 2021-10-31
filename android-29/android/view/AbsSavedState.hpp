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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbsSavedState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbsSavedState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		QAndroidJniObject getSuperState();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

