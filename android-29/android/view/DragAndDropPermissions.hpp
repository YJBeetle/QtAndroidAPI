#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class DragAndDropPermissions : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DragAndDropPermissions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DragAndDropPermissions(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		void release();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

