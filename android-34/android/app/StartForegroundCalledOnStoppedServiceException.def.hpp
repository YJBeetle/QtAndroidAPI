#pragma once

#include "../../java/lang/IllegalStateException.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class StartForegroundCalledOnStoppedServiceException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StartForegroundCalledOnStoppedServiceException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		StartForegroundCalledOnStoppedServiceException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		StartForegroundCalledOnStoppedServiceException(JString arg0);
		
		// Methods
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

