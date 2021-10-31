#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class RadioAccessSpecifier : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RadioAccessSpecifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RadioAccessSpecifier(QJniObject obj);
		
		// Constructors
		RadioAccessSpecifier(jint arg0, jintArray arg1, jintArray arg2);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jintArray getBands();
		jintArray getChannels();
		jint getRadioAccessNetwork();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

