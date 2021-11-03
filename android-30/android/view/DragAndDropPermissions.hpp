#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class DragAndDropPermissions : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DragAndDropPermissions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DragAndDropPermissions(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		void release();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

