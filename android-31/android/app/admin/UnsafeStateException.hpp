#pragma once

#include "../../../java/lang/IllegalStateException.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::admin
{
	class UnsafeStateException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsafeStateException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		UnsafeStateException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString getMessage();
		JObject getReasons();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

