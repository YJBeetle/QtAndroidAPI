#pragma once

#include "./ServiceStartNotAllowedException.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class BackgroundServiceStartNotAllowedException : public android::app::ServiceStartNotAllowedException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BackgroundServiceStartNotAllowedException(const char *className, const char *sig, Ts...agv) : android::app::ServiceStartNotAllowedException(className, sig, std::forward<Ts>(agv)...) {}
		BackgroundServiceStartNotAllowedException(QJniObject obj);
		
		// Constructors
		BackgroundServiceStartNotAllowedException(JString arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

