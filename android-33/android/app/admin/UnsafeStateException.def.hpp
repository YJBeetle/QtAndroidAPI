#pragma once

#include "../../../java/lang/IllegalStateException.def.hpp"

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
		UnsafeStateException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getMessage() const;
		JObject getReasons() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

