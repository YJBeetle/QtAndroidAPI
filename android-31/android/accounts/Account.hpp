#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::accounts
{
	class Account : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jstring name();
		jstring type();
		
		// QJniObject forward
		template<typename ...Ts> explicit Account(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Account(QJniObject obj);
		
		// Constructors
		Account(android::os::Parcel arg0);
		Account(jstring arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accounts

