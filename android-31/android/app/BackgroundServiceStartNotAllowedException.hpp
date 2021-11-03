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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackgroundServiceStartNotAllowedException(const char *className, const char *sig, Ts...agv) : android::app::ServiceStartNotAllowedException(className, sig, std::forward<Ts>(agv)...) {}
		BackgroundServiceStartNotAllowedException(QAndroidJniObject obj);
		
		// Constructors
		BackgroundServiceStartNotAllowedException(JString arg0);
		
		// Methods
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

