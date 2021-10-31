#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class InputBinding : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InputBinding(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputBinding(QJniObject obj);
		
		// Constructors
		InputBinding(__JniBaseClass arg0, android::view::inputmethod::InputBinding &arg1);
		InputBinding(__JniBaseClass arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents();
		__JniBaseClass getConnection();
		__JniBaseClass getConnectionToken();
		jint getPid();
		jint getUid();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

