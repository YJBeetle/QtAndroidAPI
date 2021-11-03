#pragma once

#include "./ServiceStartNotAllowedException.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class ForegroundServiceStartNotAllowedException : public android::app::ServiceStartNotAllowedException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ForegroundServiceStartNotAllowedException(const char *className, const char *sig, Ts...agv) : android::app::ServiceStartNotAllowedException(className, sig, std::forward<Ts>(agv)...) {}
		ForegroundServiceStartNotAllowedException(QJniObject obj);
		
		// Constructors
		ForegroundServiceStartNotAllowedException(JString arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

